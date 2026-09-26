#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CollisionFish__FP15RACE_FISH_PARAMi
// Address: 0x31e8d0 - 0x31ee6c
void CollisionFish__FP15RACE_FISH_PARAMi_0x31e8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CollisionFish__FP15RACE_FISH_PARAMi_0x31e8d0");
#endif

    switch (ctx->pc) {
        case 0x31e8fcu: goto label_31e8fc;
        case 0x31e9f4u: goto label_31e9f4;
        case 0x31ea3cu: goto label_31ea3c;
        case 0x31ea58u: goto label_31ea58;
        case 0x31eaecu: goto label_31eaec;
        case 0x31ed54u: goto label_31ed54;
        case 0x31edc8u: goto label_31edc8;
        case 0x31edf4u: goto label_31edf4;
        default: break;
    }

    ctx->pc = 0x31e8d0u;

    // 0x31e8d0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x31e8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x31e8d4: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x31e8d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31e8d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31e8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31e8dc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x31e8dcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e8e0: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x31E8E0u;
    {
        const bool branch_taken_0x31e8e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E8E0u;
            // 0x31e8e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8e0) {
            ctx->pc = 0x31EA24u;
            goto label_31ea24;
        }
    }
    ctx->pc = 0x31E8E8u;
    // 0x31e8e8: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x31e8e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x31e8ec: 0x1420003b  bnez        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x31E8ECu;
    {
        const bool branch_taken_0x31e8ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E8ECu;
            // 0x31e8f0: 0x24aefff8  addiu       $t6, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8ec) {
            ctx->pc = 0x31E9DCu;
            goto label_31e9dc;
        }
    }
    ctx->pc = 0x31E8F4u;
    // 0x31e8f4: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x31e8f4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e8f8: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x31e8f8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e8fc:
    // 0x31e8fc: 0x1fd1821  addu        $v1, $t7, $sp
    ctx->pc = 0x31e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x31e900: 0x98c821  addu        $t9, $a0, $t8
    ctx->pc = 0x31e900u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x31e904: 0x24700020  addiu       $s0, $v1, 0x20
    ctx->pc = 0x31e904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31e908: 0x24710040  addiu       $s1, $v1, 0x40
    ctx->pc = 0x31e908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x31e90c: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x31e90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
    // 0x31e910: 0x25ac0001  addiu       $t4, $t5, 0x1
    ctx->pc = 0x31e910u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x31e914: 0xc7210054  lwc1        $f1, 0x54($t9)
    ctx->pc = 0x31e914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e918: 0x25ab0002  addiu       $t3, $t5, 0x2
    ctx->pc = 0x31e918u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x31e91c: 0xc7200050  lwc1        $f0, 0x50($t9)
    ctx->pc = 0x31e91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e920: 0x25aa0003  addiu       $t2, $t5, 0x3
    ctx->pc = 0x31e920u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x31e924: 0x25a90004  addiu       $t1, $t5, 0x4
    ctx->pc = 0x31e924u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x31e928: 0x25a80005  addiu       $t0, $t5, 0x5
    ctx->pc = 0x31e928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 5));
    // 0x31e92c: 0x25a70006  addiu       $a3, $t5, 0x6
    ctx->pc = 0x31e92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 6));
    // 0x31e930: 0x25a60007  addiu       $a2, $t5, 0x7
    ctx->pc = 0x31e930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 7));
    // 0x31e934: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x31e934u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x31e938: 0x25ef0020  addiu       $t7, $t7, 0x20
    ctx->pc = 0x31e938u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 32));
    // 0x31e93c: 0x1ae182a  slt         $v1, $t5, $t6
    ctx->pc = 0x31e93cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x31e940: 0x27180500  addiu       $t8, $t8, 0x500
    ctx->pc = 0x31e940u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1280));
    // 0x31e944: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31e944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e948: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x31e948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x31e94c: 0xae0c0004  sw          $t4, 0x4($s0)
    ctx->pc = 0x31e94cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 12));
    // 0x31e950: 0xc72100f4  lwc1        $f1, 0xF4($t9)
    ctx->pc = 0x31e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e954: 0xc72000f0  lwc1        $f0, 0xF0($t9)
    ctx->pc = 0x31e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e958: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31e958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e95c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x31e95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x31e960: 0xae0b0008  sw          $t3, 0x8($s0)
    ctx->pc = 0x31e960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 11));
    // 0x31e964: 0xc7210194  lwc1        $f1, 0x194($t9)
    ctx->pc = 0x31e964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e968: 0xc7200190  lwc1        $f0, 0x190($t9)
    ctx->pc = 0x31e968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e96c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31e96cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e970: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x31e970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x31e974: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x31e974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x31e978: 0xc7210234  lwc1        $f1, 0x234($t9)
    ctx->pc = 0x31e978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e97c: 0xc7200230  lwc1        $f0, 0x230($t9)
    ctx->pc = 0x31e97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e980: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31e980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e984: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x31e984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x31e988: 0xae090010  sw          $t1, 0x10($s0)
    ctx->pc = 0x31e988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 9));
    // 0x31e98c: 0xc72102d4  lwc1        $f1, 0x2D4($t9)
    ctx->pc = 0x31e98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e990: 0xc72002d0  lwc1        $f0, 0x2D0($t9)
    ctx->pc = 0x31e990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e994: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31e994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e998: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x31e998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x31e99c: 0xae080014  sw          $t0, 0x14($s0)
    ctx->pc = 0x31e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 8));
    // 0x31e9a0: 0xc7210374  lwc1        $f1, 0x374($t9)
    ctx->pc = 0x31e9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e9a4: 0xc7200370  lwc1        $f0, 0x370($t9)
    ctx->pc = 0x31e9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e9a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31e9a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e9ac: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x31e9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x31e9b0: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x31e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x31e9b4: 0xc7210414  lwc1        $f1, 0x414($t9)
    ctx->pc = 0x31e9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e9b8: 0xc7200410  lwc1        $f0, 0x410($t9)
    ctx->pc = 0x31e9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e9bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31e9bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e9c0: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x31e9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x31e9c4: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x31e9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x31e9c8: 0xc72104b4  lwc1        $f1, 0x4B4($t9)
    ctx->pc = 0x31e9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 1204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e9cc: 0xc72004b0  lwc1        $f0, 0x4B0($t9)
    ctx->pc = 0x31e9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e9d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31e9d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e9d4: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x31E9D4u;
    {
        const bool branch_taken_0x31e9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E9D4u;
            // 0x31e9d8: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9d4) {
            ctx->pc = 0x31E8FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e8fc;
        }
    }
    ctx->pc = 0x31E9DCu;
label_31e9dc:
    // 0x31e9dc: 0x0  nop
    ctx->pc = 0x31e9dcu;
    // NOP
    // 0x31e9e0: 0x1a5082a  slt         $at, $t5, $a1
    ctx->pc = 0x31e9e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31e9e4: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x31E9E4u;
    {
        const bool branch_taken_0x31e9e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E9E4u;
            // 0x31e9e8: 0xd3880  sll         $a3, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9e4) {
            ctx->pc = 0x31EA24u;
            goto label_31ea24;
        }
    }
    ctx->pc = 0x31E9ECu;
    // 0x31e9ec: 0xed1821  addu        $v1, $a3, $t5
    ctx->pc = 0x31e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x31e9f0: 0x34140  sll         $t0, $v1, 5
    ctx->pc = 0x31e9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_31e9f4:
    // 0x31e9f4: 0xfd3021  addu        $a2, $a3, $sp
    ctx->pc = 0x31e9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x31e9f8: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x31e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x31e9fc: 0xaccd0020  sw          $t5, 0x20($a2)
    ctx->pc = 0x31e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 13));
    // 0x31ea00: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x31ea00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x31ea04: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x31ea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ea08: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x31ea08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x31ea0c: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x31ea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ea10: 0x250800a0  addiu       $t0, $t0, 0xA0
    ctx->pc = 0x31ea10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x31ea14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31ea14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31ea18: 0x1a5182a  slt         $v1, $t5, $a1
    ctx->pc = 0x31ea18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31ea1c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x31EA1Cu;
    {
        const bool branch_taken_0x31ea1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EA1Cu;
            // 0x31ea20: 0xe4c00040  swc1        $f0, 0x40($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea1c) {
            ctx->pc = 0x31E9F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e9f4;
        }
    }
    ctx->pc = 0x31EA24u;
label_31ea24:
    // 0x31ea24: 0x0  nop
    ctx->pc = 0x31ea24u;
    // NOP
    // 0x31ea28: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x31ea28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x31ea2c: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x31ea2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x31ea30: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x31EA30u;
    {
        const bool branch_taken_0x31ea30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EA30u;
            // 0x31ea34: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea30) {
            ctx->pc = 0x31EAB8u;
            goto label_31eab8;
        }
    }
    ctx->pc = 0x31EA38u;
    // 0x31ea38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31ea38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ea3c:
    // 0x31ea3c: 0x25c80001  addiu       $t0, $t6, 0x1
    ctx->pc = 0x31ea3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x31ea40: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x31ea40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31ea44: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x31EA44u;
    {
        const bool branch_taken_0x31ea44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EA44u;
            // 0x31ea48: 0x84880  sll         $t1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea44) {
            ctx->pc = 0x31EAA8u;
            goto label_31eaa8;
        }
    }
    ctx->pc = 0x31EA4Cu;
    // 0x31ea4c: 0x15d1821  addu        $v1, $t2, $sp
    ctx->pc = 0x31ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x31ea50: 0x246b0040  addiu       $t3, $v1, 0x40
    ctx->pc = 0x31ea50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x31ea54: 0x246c0020  addiu       $t4, $v1, 0x20
    ctx->pc = 0x31ea54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_31ea58:
    // 0x31ea58: 0x13d1821  addu        $v1, $t1, $sp
    ctx->pc = 0x31ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x31ea5c: 0x24670040  addiu       $a3, $v1, 0x40
    ctx->pc = 0x31ea5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x31ea60: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x31ea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ea64: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x31ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ea68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31ea68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31ea6c: 0x0  nop
    ctx->pc = 0x31ea6cu;
    // NOP
    // 0x31ea70: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x31EA70u;
    {
        const bool branch_taken_0x31ea70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31ea70) {
            ctx->pc = 0x31EA94u;
            goto label_31ea94;
        }
    }
    ctx->pc = 0x31EA78u;
    // 0x31ea78: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x31ea78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x31ea7c: 0x246d0020  addiu       $t5, $v1, 0x20
    ctx->pc = 0x31ea7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31ea80: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x31ea80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x31ea84: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x31ea84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x31ea88: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x31ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x31ea8c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x31ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x31ea90: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x31ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
label_31ea94:
    // 0x31ea94: 0x0  nop
    ctx->pc = 0x31ea94u;
    // NOP
    // 0x31ea98: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x31ea98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x31ea9c: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x31ea9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31eaa0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x31EAA0u;
    {
        const bool branch_taken_0x31eaa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EAA0u;
            // 0x31eaa4: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eaa0) {
            ctx->pc = 0x31EA58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31ea58;
        }
    }
    ctx->pc = 0x31EAA8u;
label_31eaa8:
    // 0x31eaa8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x31eaa8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x31eaac: 0x1c6182a  slt         $v1, $t6, $a2
    ctx->pc = 0x31eaacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x31eab0: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x31EAB0u;
    {
        const bool branch_taken_0x31eab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EAB0u;
            // 0x31eab4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eab0) {
            ctx->pc = 0x31EA3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31ea3c;
        }
    }
    ctx->pc = 0x31EAB8u;
label_31eab8:
    // 0x31eab8: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x31eab8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31eabc: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x31eabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x31eac0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31eac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eac4: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x31eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x31eac8: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x31eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x31eacc: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x31eaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x31ead0: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x31ead0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x31ead4: 0x102000b6  beqz        $at, . + 4 + (0xB6 << 2)
    ctx->pc = 0x31EAD4u;
    {
        const bool branch_taken_0x31ead4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EAD4u;
            // 0x31ead8: 0xafa00104  sw          $zero, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ead4) {
            ctx->pc = 0x31EDB0u;
            goto label_31edb0;
        }
    }
    ctx->pc = 0x31EADCu;
    // 0x31eadc: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x31eadcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x31eae0: 0x14200098  bnez        $at, . + 4 + (0x98 << 2)
    ctx->pc = 0x31EAE0u;
    {
        const bool branch_taken_0x31eae0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EAE0u;
            // 0x31eae4: 0x24a3fff8  addiu       $v1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eae0) {
            ctx->pc = 0x31ED44u;
            goto label_31ed44;
        }
    }
    ctx->pc = 0x31EAE8u;
    // 0x31eae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31eae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31eaec:
    // 0x31eaec: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x31eaecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x31eaf0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x31eaf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x31eaf4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x31eaf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x31eaf8: 0x103482a  slt         $t1, $t0, $v1
    ctx->pc = 0x31eaf8u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31eafc: 0x8cee0000  lw          $t6, 0x0($a3)
    ctx->pc = 0x31eafcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31eb00: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x31eb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x31eb04: 0xe5080  sll         $t2, $t6, 2
    ctx->pc = 0x31eb04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x31eb08: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x31eb08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x31eb0c: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x31eb0cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x31eb10: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x31eb10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x31eb14: 0x8d4c0058  lw          $t4, 0x58($t2)
    ctx->pc = 0x31eb14u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x31eb18: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x31eb18u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x31eb1c: 0xc5080  sll         $t2, $t4, 2
    ctx->pc = 0x31eb1cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x31eb20: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x31eb20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x31eb24: 0x15d6021  addu        $t4, $t2, $sp
    ctx->pc = 0x31eb24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x31eb28: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x31eb28u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x31eb2c: 0x8d8a00f0  lw          $t2, 0xF0($t4)
    ctx->pc = 0x31eb2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 240)));
    // 0x31eb30: 0x17d6821  addu        $t5, $t3, $sp
    ctx->pc = 0x31eb30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x31eb34: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x31eb34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x31eb38: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x31eb38u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x31eb3c: 0xad8b00f0  sw          $t3, 0xF0($t4)
    ctx->pc = 0x31eb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 240), GPR_U32(ctx, 11));
    // 0x31eb40: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x31eb40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x31eb44: 0xad4e0060  sw          $t6, 0x60($t2)
    ctx->pc = 0x31eb44u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 96), GPR_U32(ctx, 14));
    // 0x31eb48: 0x8cee0004  lw          $t6, 0x4($a3)
    ctx->pc = 0x31eb48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x31eb4c: 0xe5080  sll         $t2, $t6, 2
    ctx->pc = 0x31eb4cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x31eb50: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x31eb50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x31eb54: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x31eb54u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x31eb58: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x31eb58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x31eb5c: 0x8d4c0058  lw          $t4, 0x58($t2)
    ctx->pc = 0x31eb5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x31eb60: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x31eb60u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x31eb64: 0xc5080  sll         $t2, $t4, 2
    ctx->pc = 0x31eb64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x31eb68: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x31eb68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x31eb6c: 0x15d6021  addu        $t4, $t2, $sp
    ctx->pc = 0x31eb6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x31eb70: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x31eb70u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x31eb74: 0x8d8a00f0  lw          $t2, 0xF0($t4)
    ctx->pc = 0x31eb74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 240)));
    // 0x31eb78: 0x17d6821  addu        $t5, $t3, $sp
    ctx->pc = 0x31eb78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x31eb7c: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x31eb7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x31eb80: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x31eb80u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x31eb84: 0xad8b00f0  sw          $t3, 0xF0($t4)
    ctx->pc = 0x31eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 240), GPR_U32(ctx, 11));
    // 0x31eb88: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x31eb88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x31eb8c: 0xad4e0060  sw          $t6, 0x60($t2)
    ctx->pc = 0x31eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 96), GPR_U32(ctx, 14));
    // 0x31eb90: 0x8cee0008  lw          $t6, 0x8($a3)
    ctx->pc = 0x31eb90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x31eb94: 0xe5080  sll         $t2, $t6, 2
    ctx->pc = 0x31eb94u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x31eb98: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x31eb98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x31eb9c: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x31eb9cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x31eba0: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x31eba0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x31eba4: 0x8d4c0058  lw          $t4, 0x58($t2)
    ctx->pc = 0x31eba4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x31eba8: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x31eba8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x31ebac: 0xc5080  sll         $t2, $t4, 2
    ctx->pc = 0x31ebacu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x31ebb0: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x31ebb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x31ebb4: 0x15d6021  addu        $t4, $t2, $sp
    ctx->pc = 0x31ebb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x31ebb8: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x31ebb8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x31ebbc: 0x8d8a00f0  lw          $t2, 0xF0($t4)
    ctx->pc = 0x31ebbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 240)));
    // 0x31ebc0: 0x17d6821  addu        $t5, $t3, $sp
    ctx->pc = 0x31ebc0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x31ebc4: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x31ebc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x31ebc8: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x31ebc8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x31ebcc: 0xad8b00f0  sw          $t3, 0xF0($t4)
    ctx->pc = 0x31ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 240), GPR_U32(ctx, 11));
    // 0x31ebd0: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x31ebd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x31ebd4: 0xad4e0060  sw          $t6, 0x60($t2)
    ctx->pc = 0x31ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 96), GPR_U32(ctx, 14));
    // 0x31ebd8: 0x8cee000c  lw          $t6, 0xC($a3)
    ctx->pc = 0x31ebd8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x31ebdc: 0xe5080  sll         $t2, $t6, 2
    ctx->pc = 0x31ebdcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x31ebe0: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x31ebe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x31ebe4: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x31ebe4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x31ebe8: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x31ebe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x31ebec: 0x8d4c0058  lw          $t4, 0x58($t2)
    ctx->pc = 0x31ebecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x31ebf0: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x31ebf0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x31ebf4: 0xc5080  sll         $t2, $t4, 2
    ctx->pc = 0x31ebf4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x31ebf8: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x31ebf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x31ebfc: 0x15d6021  addu        $t4, $t2, $sp
    ctx->pc = 0x31ebfcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x31ec00: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x31ec00u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x31ec04: 0x8d8a00f0  lw          $t2, 0xF0($t4)
    ctx->pc = 0x31ec04u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 240)));
    // 0x31ec08: 0x17d6821  addu        $t5, $t3, $sp
    ctx->pc = 0x31ec08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x31ec0c: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x31ec0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x31ec10: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x31ec10u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x31ec14: 0xad8b00f0  sw          $t3, 0xF0($t4)
    ctx->pc = 0x31ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 240), GPR_U32(ctx, 11));
    // 0x31ec18: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x31ec18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x31ec1c: 0xad4e0060  sw          $t6, 0x60($t2)
    ctx->pc = 0x31ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 96), GPR_U32(ctx, 14));
    // 0x31ec20: 0x8cee0010  lw          $t6, 0x10($a3)
    ctx->pc = 0x31ec20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x31ec24: 0xe5080  sll         $t2, $t6, 2
    ctx->pc = 0x31ec24u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x31ec28: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x31ec28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x31ec2c: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x31ec2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x31ec30: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x31ec30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x31ec34: 0x8d4c0058  lw          $t4, 0x58($t2)
    ctx->pc = 0x31ec34u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x31ec38: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x31ec38u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x31ec3c: 0xc5080  sll         $t2, $t4, 2
    ctx->pc = 0x31ec3cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x31ec40: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x31ec40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x31ec44: 0x15d6021  addu        $t4, $t2, $sp
    ctx->pc = 0x31ec44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x31ec48: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x31ec48u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x31ec4c: 0x8d8a00f0  lw          $t2, 0xF0($t4)
    ctx->pc = 0x31ec4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 240)));
    // 0x31ec50: 0x17d6821  addu        $t5, $t3, $sp
    ctx->pc = 0x31ec50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x31ec54: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x31ec54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x31ec58: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x31ec58u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x31ec5c: 0xad8b00f0  sw          $t3, 0xF0($t4)
    ctx->pc = 0x31ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 240), GPR_U32(ctx, 11));
    // 0x31ec60: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x31ec60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x31ec64: 0xad4e0060  sw          $t6, 0x60($t2)
    ctx->pc = 0x31ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 96), GPR_U32(ctx, 14));
    // 0x31ec68: 0x8cee0014  lw          $t6, 0x14($a3)
    ctx->pc = 0x31ec68u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x31ec6c: 0xe5080  sll         $t2, $t6, 2
    ctx->pc = 0x31ec6cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x31ec70: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x31ec70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x31ec74: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x31ec74u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x31ec78: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x31ec78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x31ec7c: 0x8d4c0058  lw          $t4, 0x58($t2)
    ctx->pc = 0x31ec7cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x31ec80: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x31ec80u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x31ec84: 0xc5080  sll         $t2, $t4, 2
    ctx->pc = 0x31ec84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x31ec88: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x31ec88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x31ec8c: 0x15d6021  addu        $t4, $t2, $sp
    ctx->pc = 0x31ec8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x31ec90: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x31ec90u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x31ec94: 0x8d8a00f0  lw          $t2, 0xF0($t4)
    ctx->pc = 0x31ec94u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 240)));
    // 0x31ec98: 0x17d6821  addu        $t5, $t3, $sp
    ctx->pc = 0x31ec98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x31ec9c: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x31ec9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x31eca0: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x31eca0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x31eca4: 0xad8b00f0  sw          $t3, 0xF0($t4)
    ctx->pc = 0x31eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 240), GPR_U32(ctx, 11));
    // 0x31eca8: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x31eca8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x31ecac: 0xad4e0060  sw          $t6, 0x60($t2)
    ctx->pc = 0x31ecacu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 96), GPR_U32(ctx, 14));
    // 0x31ecb0: 0x8cee0018  lw          $t6, 0x18($a3)
    ctx->pc = 0x31ecb0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x31ecb4: 0xe5080  sll         $t2, $t6, 2
    ctx->pc = 0x31ecb4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x31ecb8: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x31ecb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x31ecbc: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x31ecbcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x31ecc0: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x31ecc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x31ecc4: 0x8d4c0058  lw          $t4, 0x58($t2)
    ctx->pc = 0x31ecc4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x31ecc8: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x31ecc8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x31eccc: 0xc5080  sll         $t2, $t4, 2
    ctx->pc = 0x31ecccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x31ecd0: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x31ecd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x31ecd4: 0x15d6021  addu        $t4, $t2, $sp
    ctx->pc = 0x31ecd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x31ecd8: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x31ecd8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x31ecdc: 0x8d8a00f0  lw          $t2, 0xF0($t4)
    ctx->pc = 0x31ecdcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 240)));
    // 0x31ece0: 0x17d6821  addu        $t5, $t3, $sp
    ctx->pc = 0x31ece0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x31ece4: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x31ece4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x31ece8: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x31ece8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x31ecec: 0xad8b00f0  sw          $t3, 0xF0($t4)
    ctx->pc = 0x31ececu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 240), GPR_U32(ctx, 11));
    // 0x31ecf0: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x31ecf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x31ecf4: 0xad4e0060  sw          $t6, 0x60($t2)
    ctx->pc = 0x31ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 96), GPR_U32(ctx, 14));
    // 0x31ecf8: 0x8ced001c  lw          $t5, 0x1C($a3)
    ctx->pc = 0x31ecf8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x31ecfc: 0xd3880  sll         $a3, $t5, 2
    ctx->pc = 0x31ecfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x31ed00: 0xed3821  addu        $a3, $a3, $t5
    ctx->pc = 0x31ed00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x31ed04: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x31ed04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x31ed08: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x31ed08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x31ed0c: 0x8ceb0058  lw          $t3, 0x58($a3)
    ctx->pc = 0x31ed0cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x31ed10: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x31ed10u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x31ed14: 0xb3880  sll         $a3, $t3, 2
    ctx->pc = 0x31ed14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x31ed18: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x31ed18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x31ed1c: 0xfd5821  addu        $t3, $a3, $sp
    ctx->pc = 0x31ed1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x31ed20: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x31ed20u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x31ed24: 0x8d6700f0  lw          $a3, 0xF0($t3)
    ctx->pc = 0x31ed24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 240)));
    // 0x31ed28: 0x15d6021  addu        $t4, $t2, $sp
    ctx->pc = 0x31ed28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x31ed2c: 0x24ea0001  addiu       $t2, $a3, 0x1
    ctx->pc = 0x31ed2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31ed30: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x31ed30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x31ed34: 0xad6a00f0  sw          $t2, 0xF0($t3)
    ctx->pc = 0x31ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 240), GPR_U32(ctx, 10));
    // 0x31ed38: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x31ed38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x31ed3c: 0x1520ff6b  bnez        $t1, . + 4 + (-0x95 << 2)
    ctx->pc = 0x31ED3Cu;
    {
        const bool branch_taken_0x31ed3c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x31ED40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31ED3Cu;
            // 0x31ed40: 0xaced0060  sw          $t5, 0x60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed3c) {
            ctx->pc = 0x31EAECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31eaec;
        }
    }
    ctx->pc = 0x31ED44u;
label_31ed44:
    // 0x31ed44: 0x0  nop
    ctx->pc = 0x31ed44u;
    // NOP
    // 0x31ed48: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x31ed48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31ed4c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x31ED4Cu;
    {
        const bool branch_taken_0x31ed4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31ED4Cu;
            // 0x31ed50: 0x85880  sll         $t3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed4c) {
            ctx->pc = 0x31EDB0u;
            goto label_31edb0;
        }
    }
    ctx->pc = 0x31ED54u;
label_31ed54:
    // 0x31ed54: 0x17d1821  addu        $v1, $t3, $sp
    ctx->pc = 0x31ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x31ed58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x31ed58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x31ed5c: 0x8c6c0020  lw          $t4, 0x20($v1)
    ctx->pc = 0x31ed5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x31ed60: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x31ed60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x31ed64: 0xc3080  sll         $a2, $t4, 2
    ctx->pc = 0x31ed64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x31ed68: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x31ed68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31ed6c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x31ed6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x31ed70: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x31ed70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x31ed74: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x31ed74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x31ed78: 0x8cc90058  lw          $t1, 0x58($a2)
    ctx->pc = 0x31ed78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x31ed7c: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x31ed7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x31ed80: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x31ed80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x31ed84: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x31ed84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x31ed88: 0xdd4821  addu        $t1, $a2, $sp
    ctx->pc = 0x31ed88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x31ed8c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x31ed8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x31ed90: 0x8d2600f0  lw          $a2, 0xF0($t1)
    ctx->pc = 0x31ed90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 240)));
    // 0x31ed94: 0xfd5021  addu        $t2, $a3, $sp
    ctx->pc = 0x31ed94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x31ed98: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x31ed98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31ed9c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x31ed9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x31eda0: 0xad2700f0  sw          $a3, 0xF0($t1)
    ctx->pc = 0x31eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 240), GPR_U32(ctx, 7));
    // 0x31eda4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x31eda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x31eda8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x31EDA8u;
    {
        const bool branch_taken_0x31eda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EDA8u;
            // 0x31edac: 0xaccc0060  sw          $t4, 0x60($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eda8) {
            ctx->pc = 0x31ED54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31ed54;
        }
    }
    ctx->pc = 0x31EDB0u;
label_31edb0:
    // 0x31edb0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31edb0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31edb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31edb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31edb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31edb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31edbc: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x31edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x31edc0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x31edc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x31edc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31edc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31edc8:
    // 0x31edc8: 0x11d1821  addu        $v1, $t0, $sp
    ctx->pc = 0x31edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x31edcc: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x31edccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31edd0: 0x246a0060  addiu       $t2, $v1, 0x60
    ctx->pc = 0x31edd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x31edd4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x31edd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31edd8: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x31edd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x31eddc: 0x13d2821  addu        $a1, $t1, $sp
    ctx->pc = 0x31eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x31ede0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x31ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x31ede4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31ede8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x31ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x31edec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31EDECu;
    {
        const bool branch_taken_0x31edec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EDECu;
            // 0x31edf0: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31edec) {
            ctx->pc = 0x31EE38u;
            goto label_31ee38;
        }
    }
    ctx->pc = 0x31EDF4u;
label_31edf4:
    // 0x31edf4: 0x0  nop
    ctx->pc = 0x31edf4u;
    // NOP
    // 0x31edf8: 0x1471821  addu        $v1, $t2, $a3
    ctx->pc = 0x31edf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x31edfc: 0xc4c00054  lwc1        $f0, 0x54($a2)
    ctx->pc = 0x31edfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ee00: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x31ee00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31ee04: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x31ee04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31ee08: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x31ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x31ee0c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31ee10: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x31ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x31ee14: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x31ee14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31ee18: 0xc4c00054  lwc1        $f0, 0x54($a2)
    ctx->pc = 0x31ee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ee1c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x31ee1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31ee20: 0x0  nop
    ctx->pc = 0x31ee20u;
    // NOP
    // 0x31ee24: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31EE24u;
    {
        const bool branch_taken_0x31ee24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31ee24) {
            ctx->pc = 0x31EE30u;
            goto label_31ee30;
        }
    }
    ctx->pc = 0x31EE2Cu;
    // 0x31ee2c: 0xe4c20054  swc1        $f2, 0x54($a2)
    ctx->pc = 0x31ee2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
label_31ee30:
    // 0x31ee30: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x31ee30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x31ee34: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x31ee34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_31ee38:
    // 0x31ee38: 0x8ca300f0  lw          $v1, 0xF0($a1)
    ctx->pc = 0x31ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x31ee3c: 0x183182a  slt         $v1, $t4, $v1
    ctx->pc = 0x31ee3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31ee40: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x31EE40u;
    {
        const bool branch_taken_0x31ee40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ee40) {
            ctx->pc = 0x31EDF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31edf4;
        }
    }
    ctx->pc = 0x31EE48u;
    // 0x31ee48: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x31ee48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x31ee4c: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x31ee4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x31ee50: 0x29630006  slti        $v1, $t3, 0x6
    ctx->pc = 0x31ee50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x31ee54: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x31EE54u;
    {
        const bool branch_taken_0x31ee54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EE54u;
            // 0x31ee58: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee54) {
            ctx->pc = 0x31EDC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31edc8;
        }
    }
    ctx->pc = 0x31EE5Cu;
    // 0x31ee5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31ee5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ee60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ee60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ee64: 0x3e00008  jr          $ra
    ctx->pc = 0x31EE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EE64u;
            // 0x31ee68: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31EE6Cu;
}
