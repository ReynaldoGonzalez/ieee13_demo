OPFILE 1.11 PHASOR
Solver<Euler<F64>,Direct<F64,AdmittanceMatrix<F64>>> {
	name=phasor08_IEEE13_solver
	powerSystem=Distribution
}
PowerSystem {
	name=Distribution
	frequency=60
	base=40
	network {
		items {
			611_c
			632_a
			632_b
			632_c
			633_a
			633_b
			633_c
			634_a
			634_b
			634_c
			645_b
			645_c
			646_b
			646_c
			650_a
			650_b
			650_c
			651_a
			651_b
			651_c
			652_a
			671_a
			671_b
			671_c
			675_a
			675_b
			675_c
			680_a
			680_b
			680_c
			684_a
			684_c
			692_a
			692_b
			692_c
			SOURCE_A
			LD_645
			LD_646
			LD_652
			LD_692
			LD_611
			LD_634
			LD_671
			LD_675
			LD_632
			LN_684_611
			LN_684_652
			LN_645_646
			LN_632_645
			LN_671_684
			LN_632_671
			LN_671_680
			LN_651_632
			LN_632_633
			LN_671_692
			LN_692_675
			TR1_633_634
			TR1_650_651
			cap611
			cap675
			SW_671_692_a
			SW_671_692_b
			SW_671_692_c
			SW_651_632_a
			SW_651_632_b
			SW_651_632_c
			SW_632_633_a
			SW_632_633_b
			SW_632_633_c
			SW_632_671_a
			SW_632_671_b
			SW_632_671_c
			SW_692_675_a
			SW_692_675_b
			SW_692_675_c
			Fault_632_1
			Fault_633_1
			Fault_671_1
			Fault_675_1
		}
	}
}
Bus {
	name=611_c
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=115
	}
}
Bus {
	name=632_a
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-2.6
	}
}
Bus {
	name=632_b
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-121.7
	}
}
Bus {
	name=632_c
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=117.3
	}
}
Bus {
	name=633_a
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-2.6
	}
}
Bus {
	name=633_b
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-121.8
	}
}
Bus {
	name=633_c
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=117.3
	}
}
Bus {
	name=634_a
	type=PQ
	voltage {
		base=277.12812921102
		magnitude=277.12812921102
		angle=-3.4
	}
}
Bus {
	name=634_b
	type=PQ
	voltage {
		base=277.12812921102
		magnitude=277.12812921102
		angle=-122.3
	}
}
Bus {
	name=634_c
	type=PQ
	voltage {
		base=277.12812921102
		magnitude=277.12812921102
		angle=116.8
	}
}
Bus {
	name=645_b
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-121.9
	}
}
Bus {
	name=645_c
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=117.2
	}
}
Bus {
	name=646_b
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-122
	}
}
Bus {
	name=646_c
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=117.2
	}
}
Bus {
	name=650_a
	type=SLACK
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=0
	}
}
Bus {
	name=650_b
	type=SLACK
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-120
	}
}
Bus {
	name=650_c
	type=SLACK
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=120
	}
}
Bus {
	name=651_a
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=0
	}
}
Bus {
	name=651_b
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-120
	}
}
Bus {
	name=651_c
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=120
	}
}
Bus {
	name=652_a
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-5.9
	}
}
Bus {
	name=671_a
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-5.9
	}
}
Bus {
	name=671_b
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-122
	}
}
Bus {
	name=671_c
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=115.2
	}
}
Bus {
	name=675_a
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-6.2
	}
}
Bus {
	name=675_b
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-122.1
	}
}
Bus {
	name=675_c
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=115.3
	}
}
Bus {
	name=680_a
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-5.9
	}
}
Bus {
	name=680_b
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-122
	}
}
Bus {
	name=680_c
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=115.2
	}
}
Bus {
	name=684_a
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-6
	}
}
Bus {
	name=684_c
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=115.1
	}
}
Bus {
	name=692_a
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-5.9
	}
}
Bus {
	name=692_b
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=-122
	}
}
Bus {
	name=692_c
	type=PQ
	voltage {
		base=2401.77711982884
		magnitude=2401.77711982884
		angle=115.2
	}
}
ThreePhaseVoltageSource {
	name=SOURCE_A
	bus_a=650_a
	bus_b=650_b
	bus_c=650_c
	kVll=4.16
	angle_a=0
	mode=sc
	MVA_sc1=200000
	MVA_sc3=200000
}
SinglePhaseZipLoad {
	name=LD_645
	status=1
	power_re=170
	power_im=125
	buses {
		645_b
	}
	mode=wye
	vll=4.16
	range=0.2
	z_coef=0
	i_coef=0
	p_coef=1
	use_initial_voltage=0
}
SinglePhaseZipLoad {
	name=LD_646
	status=1
	power_re=230
	power_im=132
	buses {
		646_b
	}
	mode=wye
	vll=4.16
	range=0.2
	z_coef=1
	i_coef=0
	p_coef=0
	use_initial_voltage=0
}
SinglePhaseZipLoad {
	name=LD_652
	status=1
	power_re=128
	power_im=86
	buses {
		652_a
	}
	mode=wye
	vll=4.16
	range=0.2
	z_coef=1
	i_coef=0
	p_coef=0
	use_initial_voltage=0
}
SinglePhaseZipLoad {
	name=LD_692
	status=1
	power_re=170
	power_im=151
	buses {
		692_c
	}
	mode=wye
	vll=4.16
	range=0.2
	z_coef=0
	i_coef=1
	p_coef=0
	use_initial_voltage=0
}
SinglePhaseZipLoad {
	name=LD_611
	status=1
	power_re=170
	power_im=80
	buses {
		611_c
	}
	mode=wye
	vll=4.16
	range=0.2
	z_coef=0
	i_coef=1
	p_coef=0
	use_initial_voltage=0
}
ThreePhaseZipLoad {
	name=LD_634
	status=1
	power_re=160 120 120
	power_im=110 90 90
	buses {
		634_a
		634_b
		634_c
	}
	mode=wye
	vll=0.48
	range=0.2
	z_coef=0
	i_coef=0
	p_coef=1
	use_initial_voltage=0
}
ThreePhaseZipLoad {
	name=LD_671
	status=1
	power_re=385 385 385
	power_im=220 220 220
	buses {
		671_a
		671_b
		671_c
	}
	mode=wye
	vll=4.16
	range=0.2
	z_coef=0
	i_coef=0
	p_coef=1
	use_initial_voltage=0
}
ThreePhaseZipLoad {
	name=LD_675
	status=1
	power_re=485 68 290
	power_im=190 60 212
	buses {
		675_a
		675_b
		675_c
	}
	mode=wye
	vll=4.16
	range=0.2
	z_coef=0
	i_coef=0
	p_coef=1
	use_initial_voltage=0
}
ThreePhaseZipLoad {
	name=LD_632
	status=1
	power_re=17 66 117
	power_im=10 38 68
	buses {
		632_a
		632_b
		632_c
	}
	mode=wye
	vll=4.16
	range=0.2
	z_coef=0
	i_coef=0
	p_coef=1
	use_initial_voltage=0
}
SinglePhasePiLine {
	name=LN_684_611
	status=1
	mode=full
	length=0.0568182
	buses {
		684_c
		611_c
	}
	resistances=1.3292
	reactances=1.3475
	charges=4.5193
}
SinglePhasePiLine {
	name=LN_684_652
	status=1
	mode=full
	length=0.1515152
	buses {
		684_a
		652_a
	}
	resistances=1.3425
	reactances=0.5124
	charges=88.9699
}
TwoPhasePiLine {
	name=LN_645_646
	status=1
	mode=full
	length=0.0568182
	buses {
		645_b
		645_c
		646_b
		646_c
	}
	resistances=1.3238 0.2066 0.2066 1.3294
	reactances=1.3569 0.4591 0.4591 1.3471
	charges=4.6658 -0.8999 -0.8999 4.7097
}
TwoPhasePiLine {
	name=LN_632_645
	status=1
	mode=full
	length=0.094697
	buses {
		632_b
		632_c
		645_b
		645_c
	}
	resistances=1.3238 0.2066 0.2066 1.3294
	reactances=1.3569 0.4591 0.4591 1.3471
	charges=4.6658 -0.8999 -0.8999 4.7097
}
TwoPhasePiLine {
	name=LN_671_684
	status=1
	mode=full
	length=0.0568182
	buses {
		671_a
		671_c
		684_a
		684_c
	}
	resistances=1.3238 0.2066 0.2066 1.3294
	reactances=1.3569 0.4591 0.4591 1.3471
	charges=4.6658 -0.8999 -0.8999 4.7097
}
ThreePhasePiLine_ {
	name=LN_632_671
	status=1
	mode=full
	length=0.37878788
	buses {
		632_a
		632_b
		632_c
		671_a
		671_b
		671_c
	}
	resistances=0.3465 0.156 0.158 0.156 0.3375 0.1535 0.158 0.1535 0.3414
	reactances=1.0179 0.5017 0.4236 0.5017 1.0478 0.3849 0.4236 0.3849 1.0348
	charges=6.2998 -1.9958 -1.2595 -1.9958 5.9597 -0.7417 -1.2595 -0.7417 5.6386
}
ThreePhasePiLine_ {
	name=LN_671_680
	status=1
	mode=full
	length=0.189394
	buses {
		671_a
		671_b
		671_c
		680_a
		680_b
		680_c
	}
	resistances=0.3465 0.156 0.158 0.156 0.3375 0.1535 0.158 0.1535 0.3414
	reactances=1.0179 0.5017 0.4236 0.5017 1.0478 0.3849 0.4236 0.3849 1.0348
	charges=6.2998 -1.9958 -1.2595 -1.9958 5.9597 -0.7417 -1.2595 -0.7417 5.6386
}
ThreePhasePiLine_ {
	name=LN_651_632
	status=1
	mode=full
	length=0.378788
	buses {
		651_a
		651_b
		651_c
		632_a
		632_b
		632_c
	}
	resistances=0.3465 0.156 0.158 0.156 0.3375 0.1535 0.158 0.1535 0.3414
	reactances=1.0179 0.5017 0.4236 0.5017 1.0478 0.3849 0.4236 0.3849 1.0348
	charges=6.2998 -1.9958 -1.2595 -1.9958 5.9597 -0.7417 -1.2595 -0.7417 5.6386
}
ThreePhasePiLine_ {
	name=LN_632_633
	status=1
	mode=full
	length=0.094697
	buses {
		632_a
		632_b
		632_c
		633_a
		633_b
		633_c
	}
	resistances=0.7526 0.158 0.156 0.158 0.7475 0.1535 0.156 0.1535 0.7436
	reactances=1.1814 0.4236 0.5017 0.4236 1.1983 0.3849 0.5017 0.3849 1.2112
	charges=5.699 -1.0817 -1.6905 -1.0817 5.1795 -0.6588 -1.6905 -0.6588 5.4246
}
ThreePhasePiLine_ {
	name=LN_671_692
	status=1
	mode=full
	length=0.00189394
	buses {
		671_a
		671_b
		671_c
		692_a
		692_b
		692_c
	}
	resistances=0.7982 0.3192 0.2849 0.3192 0.7891 0.3192 0.2849 0.3192 0.7982
	reactances=0.4463 0.0328 -0.0143 0.0328 0.4041 0.0328 -0.0143 0.0328 0.4463
	charges=96.8867 0 0 0 96.8867 0 0 0 96.8867
}
ThreePhasePiLine_ {
	name=LN_692_675
	status=1
	mode=full
	length=0.094697
	buses {
		692_a
		692_b
		692_c
		675_a
		675_b
		675_c
	}
	resistances=0.7982 0.3192 0.2849 0.3192 0.7891 0.3192 0.2849 0.3192 0.7982
	reactances=0.4463 0.0328 -0.0143 0.0328 0.4041 0.0328 -0.0143 0.0328 0.4463
	charges=96.8867 0 0 0 96.8867 0 0 0 96.8867
}
ThreePhaseTransformer_ {
	name=TR1_633_634
	status=1
	is_mutual=0
	taps=0 0 0
	min_tap=-16
	max_tap=16
	min_range_percent=10
	max_range_percent=10
	xhl_pu=0.02
	windings {
		MultiPhaseTransformerWinding {
			buses {
				633_a
				633_b
				633_c
			}
			kVll=4.16
			kVA_base=500
			conn=wye
			r_pu=0.0055
		}
		MultiPhaseTransformerWinding {
			buses {
				634_a
				634_b
				634_c
			}
			kVll=0.48
			kVA_base=500
			conn=wye
			r_pu=0.0055
		}
	}
}
ThreePhaseTransformer_ {
	name=TR1_650_651
	status=1
	is_mutual=0
	taps=0 0 0
	min_tap=-16
	max_tap=16
	min_range_percent=10
	max_range_percent=10
	xhl_pu=0.0001
	windings {
		MultiPhaseTransformerWinding {
			buses {
				650_a
				650_b
				650_c
			}
			kVll=4.16
			kVA_base=5000
			conn=wye
			r_pu=4.98e-06
		}
		MultiPhaseTransformerWinding {
			buses {
				651_a
				651_b
				651_c
			}
			kVll=4.16
			kVA_base=5000
			conn=wye
			r_pu=4.98e-06
		}
	}
}
SinglePhaseShunt {
	name=cap611
	status=1
	vll=4.16003962961893
	power_re=0
	power_im=-100
	buses {
		611_c
	}
}
ThreePhaseShunt {
	name=cap675
	status=1 1 1
	vll=4.16003962961893
	power_re=0 0 0
	power_im=-200 -200 -200
	buses {
		675_a
		675_b
		675_c
	}
}
Switch {
	name=SW_671_692_a
	bus0=671_a
	bus1=692_a
	status=0
}
Switch {
	name=SW_671_692_b
	bus0=671_b
	bus1=692_b
	status=0
}
Switch {
	name=SW_671_692_c
	bus0=671_c
	bus1=692_c
	status=0
}
Switch {
	name=SW_651_632_a
	bus0=651_a
	bus1=632_a
	status=0
}
Switch {
	name=SW_651_632_b
	bus0=651_b
	bus1=632_b
	status=0
}
Switch {
	name=SW_651_632_c
	bus0=651_c
	bus1=632_c
	status=0
}
Switch {
	name=SW_632_633_a
	bus0=632_a
	bus1=633_a
	status=0
}
Switch {
	name=SW_632_633_b
	bus0=632_b
	bus1=633_b
	status=0
}
Switch {
	name=SW_632_633_c
	bus0=632_c
	bus1=633_c
	status=0
}
Switch {
	name=SW_632_671_a
	bus0=632_a
	bus1=671_a
	status=0
}
Switch {
	name=SW_632_671_b
	bus0=632_b
	bus1=671_b
	status=0
}
Switch {
	name=SW_632_671_c
	bus0=632_c
	bus1=671_c
	status=0
}
Switch {
	name=SW_692_675_a
	bus0=692_a
	bus1=675_a
	status=0
}
Switch {
	name=SW_692_675_b
	bus0=692_b
	bus1=675_b
	status=0
}
Switch {
	name=SW_692_675_c
	bus0=692_c
	bus1=675_c
	status=0
}
ThreePhaseFault {
	name=Fault_632_1
	buses {
		632_a
		632_b
		632_c
	}
	type=phase2ground
	status=0
	z_phase {
		re=1e-06
		im=0
	}
	z_ground {
		re=1e-06
		im=0
	}
}
ThreePhaseFault {
	name=Fault_633_1
	buses {
		633_a
		633_b
		633_c
	}
	type=phase2ground
	status=0
	z_phase {
		re=1e-06
		im=0
	}
	z_ground {
		re=1e-06
		im=0
	}
}
ThreePhaseFault {
	name=Fault_671_1
	buses {
		671_a
		671_b
		671_c
	}
	type=phase2ground
	status=0
	z_phase {
		re=1e-06
		im=0
	}
	z_ground {
		re=1e-06
		im=0
	}
}
ThreePhaseFault {
	name=Fault_675_1
	buses {
		675_a
		675_b
		675_c
	}
	type=phase2ground
	status=0
	z_phase {
		re=1e-06
		im=0
	}
	z_ground {
		re=1e-06
		im=0
	}
}
