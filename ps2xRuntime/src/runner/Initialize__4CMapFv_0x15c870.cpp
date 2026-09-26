#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__4CMapFv
// Address: 0x15c870 - 0x15ca24
void Initialize__4CMapFv_0x15c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__4CMapFv_0x15c870");
#endif

    switch (ctx->pc) {
        case 0x15c8d4u: goto label_15c8d4;
        case 0x15c958u: goto label_15c958;
        case 0x15c964u: goto label_15c964;
        case 0x15c984u: goto label_15c984;
        case 0x15c9d0u: goto label_15c9d0;
        case 0x15c9e4u: goto label_15c9e4;
        case 0x15ca00u: goto label_15ca00;
        case 0x15ca08u: goto label_15ca08;
        default: break;
    }

    ctx->pc = 0x15c870u;

    // 0x15c870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15c874: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15c874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c878: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15c87c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15c87cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c88c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c890: 0xac800104  sw          $zero, 0x104($a0)
    ctx->pc = 0x15c890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
    // 0x15c894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15c894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c898: 0xac800314  sw          $zero, 0x314($a0)
    ctx->pc = 0x15c898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 788), GPR_U32(ctx, 0));
    // 0x15c89c: 0xac800310  sw          $zero, 0x310($a0)
    ctx->pc = 0x15c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 784), GPR_U32(ctx, 0));
    // 0x15c8a0: 0xac820318  sw          $v0, 0x318($a0)
    ctx->pc = 0x15c8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 792), GPR_U32(ctx, 2));
    // 0x15c8a4: 0xac80031c  sw          $zero, 0x31C($a0)
    ctx->pc = 0x15c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 796), GPR_U32(ctx, 0));
    // 0x15c8a8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15c8ac: 0xac800320  sw          $zero, 0x320($a0)
    ctx->pc = 0x15c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 0));
    // 0x15c8b0: 0xac800324  sw          $zero, 0x324($a0)
    ctx->pc = 0x15c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 804), GPR_U32(ctx, 0));
    // 0x15c8b4: 0xac80032c  sw          $zero, 0x32C($a0)
    ctx->pc = 0x15c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 812), GPR_U32(ctx, 0));
    // 0x15c8b8: 0xac800328  sw          $zero, 0x328($a0)
    ctx->pc = 0x15c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 808), GPR_U32(ctx, 0));
    // 0x15c8bc: 0xac800360  sw          $zero, 0x360($a0)
    ctx->pc = 0x15c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 864), GPR_U32(ctx, 0));
    // 0x15c8c0: 0xac800364  sw          $zero, 0x364($a0)
    ctx->pc = 0x15c8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 0));
    // 0x15c8c4: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x15c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x15c8c8: 0xac800c80  sw          $zero, 0xC80($a0)
    ctx->pc = 0x15c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3200), GPR_U32(ctx, 0));
    // 0x15c8cc: 0xac800c84  sw          $zero, 0xC84($a0)
    ctx->pc = 0x15c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3204), GPR_U32(ctx, 0));
    // 0x15c8d0: 0xac820368  sw          $v0, 0x368($a0)
    ctx->pc = 0x15c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 872), GPR_U32(ctx, 2));
label_15c8d4:
    // 0x15c8d4: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x15c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x15c8d8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x15c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x15c8dc: 0xac800394  sw          $zero, 0x394($a0)
    ctx->pc = 0x15c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 0));
    // 0x15c8e0: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x15c8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x15c8e4: 0xac800390  sw          $zero, 0x390($a0)
    ctx->pc = 0x15c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 912), GPR_U32(ctx, 0));
    // 0x15c8e8: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x15c8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x15c8ec: 0xac800398  sw          $zero, 0x398($a0)
    ctx->pc = 0x15c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 920), GPR_U32(ctx, 0));
    // 0x15c8f0: 0xac8003c4  sw          $zero, 0x3C4($a0)
    ctx->pc = 0x15c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 964), GPR_U32(ctx, 0));
    // 0x15c8f4: 0xac8003c0  sw          $zero, 0x3C0($a0)
    ctx->pc = 0x15c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 960), GPR_U32(ctx, 0));
    // 0x15c8f8: 0xac8003c8  sw          $zero, 0x3C8($a0)
    ctx->pc = 0x15c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 968), GPR_U32(ctx, 0));
    // 0x15c8fc: 0xac8003f4  sw          $zero, 0x3F4($a0)
    ctx->pc = 0x15c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1012), GPR_U32(ctx, 0));
    // 0x15c900: 0xac8003f0  sw          $zero, 0x3F0($a0)
    ctx->pc = 0x15c900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1008), GPR_U32(ctx, 0));
    // 0x15c904: 0xac8003f8  sw          $zero, 0x3F8($a0)
    ctx->pc = 0x15c904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1016), GPR_U32(ctx, 0));
    // 0x15c908: 0xac800424  sw          $zero, 0x424($a0)
    ctx->pc = 0x15c908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1060), GPR_U32(ctx, 0));
    // 0x15c90c: 0xac800420  sw          $zero, 0x420($a0)
    ctx->pc = 0x15c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1056), GPR_U32(ctx, 0));
    // 0x15c910: 0xac800428  sw          $zero, 0x428($a0)
    ctx->pc = 0x15c910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1064), GPR_U32(ctx, 0));
    // 0x15c914: 0xac800454  sw          $zero, 0x454($a0)
    ctx->pc = 0x15c914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1108), GPR_U32(ctx, 0));
    // 0x15c918: 0xac800450  sw          $zero, 0x450($a0)
    ctx->pc = 0x15c918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1104), GPR_U32(ctx, 0));
    // 0x15c91c: 0xac800458  sw          $zero, 0x458($a0)
    ctx->pc = 0x15c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1112), GPR_U32(ctx, 0));
    // 0x15c920: 0xac800484  sw          $zero, 0x484($a0)
    ctx->pc = 0x15c920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1156), GPR_U32(ctx, 0));
    // 0x15c924: 0xac800480  sw          $zero, 0x480($a0)
    ctx->pc = 0x15c924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1152), GPR_U32(ctx, 0));
    // 0x15c928: 0xac800488  sw          $zero, 0x488($a0)
    ctx->pc = 0x15c928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1160), GPR_U32(ctx, 0));
    // 0x15c92c: 0xac8004b4  sw          $zero, 0x4B4($a0)
    ctx->pc = 0x15c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1204), GPR_U32(ctx, 0));
    // 0x15c930: 0xac8004b0  sw          $zero, 0x4B0($a0)
    ctx->pc = 0x15c930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1200), GPR_U32(ctx, 0));
    // 0x15c934: 0xac8004b8  sw          $zero, 0x4B8($a0)
    ctx->pc = 0x15c934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1208), GPR_U32(ctx, 0));
    // 0x15c938: 0xac8004e4  sw          $zero, 0x4E4($a0)
    ctx->pc = 0x15c938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1252), GPR_U32(ctx, 0));
    // 0x15c93c: 0xac8004e0  sw          $zero, 0x4E0($a0)
    ctx->pc = 0x15c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1248), GPR_U32(ctx, 0));
    // 0x15c940: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x15C940u;
    {
        const bool branch_taken_0x15c940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C940u;
            // 0x15c944: 0xac8004e8  sw          $zero, 0x4E8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c940) {
            ctx->pc = 0x15C8D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c8d4;
        }
    }
    ctx->pc = 0x15C948u;
    // 0x15c948: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x15c948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15c94c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15c94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c950: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x15c950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x15c954: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15c954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c958:
    // 0x15c958: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x15c958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x15c95c: 0xc057148  jal         func_15C520
    ctx->pc = 0x15C95Cu;
    SET_GPR_U32(ctx, 31, 0x15C964u);
    ctx->pc = 0x15C960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C95Cu;
            // 0x15c960: 0x2444010c  addiu       $a0, $v0, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C520u;
    if (runtime->hasFunction(0x15C520u)) {
        auto targetFn = runtime->lookupFunction(0x15C520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C964u; }
        if (ctx->pc != 0x15C964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CPartsGroupFv_0x15c520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C964u; }
        if (ctx->pc != 0x15C964u) { return; }
    }
    ctx->pc = 0x15C964u;
label_15c964:
    // 0x15c964: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15c964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15c968: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x15c968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x15c96c: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x15c96cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x15c970: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15C970u;
    {
        const bool branch_taken_0x15c970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c970) {
            ctx->pc = 0x15C958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c958;
        }
    }
    ctx->pc = 0x15C978u;
    // 0x15c978: 0x26040cb0  addiu       $a0, $s0, 0xCB0
    ctx->pc = 0x15c978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3248));
    // 0x15c97c: 0xc0a78d4  jal         func_29E350
    ctx->pc = 0x15C97Cu;
    SET_GPR_U32(ctx, 31, 0x15C984u);
    ctx->pc = 0x15C980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C97Cu;
            // 0x15c980: 0xae000cac  sw          $zero, 0xCAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E350u;
    if (runtime->hasFunction(0x29E350u)) {
        auto targetFn = runtime->lookupFunction(0x29E350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C984u; }
        if (ctx->pc != 0x15C984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CFuncPointMngrFv_0x29e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C984u; }
        if (ctx->pc != 0x15C984u) { return; }
    }
    ctx->pc = 0x15C984u;
label_15c984:
    // 0x15c984: 0xae000c8c  sw          $zero, 0xC8C($s0)
    ctx->pc = 0x15c984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3212), GPR_U32(ctx, 0));
    // 0x15c988: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c98c: 0xae000c90  sw          $zero, 0xC90($s0)
    ctx->pc = 0x15c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3216), GPR_U32(ctx, 0));
    // 0x15c990: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15c990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c994: 0xae000c98  sw          $zero, 0xC98($s0)
    ctx->pc = 0x15c994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3224), GPR_U32(ctx, 0));
    // 0x15c998: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15c998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c99c: 0xae000c9c  sw          $zero, 0xC9C($s0)
    ctx->pc = 0x15c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3228), GPR_U32(ctx, 0));
    // 0x15c9a0: 0xae020c94  sw          $v0, 0xC94($s0)
    ctx->pc = 0x15c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3220), GPR_U32(ctx, 2));
    // 0x15c9a4: 0xae000ca0  sw          $zero, 0xCA0($s0)
    ctx->pc = 0x15c9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3232), GPR_U32(ctx, 0));
    // 0x15c9a8: 0xae00030c  sw          $zero, 0x30C($s0)
    ctx->pc = 0x15c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 0));
    // 0x15c9ac: 0xae000c88  sw          $zero, 0xC88($s0)
    ctx->pc = 0x15c9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3208), GPR_U32(ctx, 0));
    // 0x15c9b0: 0xae000cec  sw          $zero, 0xCEC($s0)
    ctx->pc = 0x15c9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3308), GPR_U32(ctx, 0));
    // 0x15c9b4: 0xae000cf0  sw          $zero, 0xCF0($s0)
    ctx->pc = 0x15c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3312), GPR_U32(ctx, 0));
    // 0x15c9b8: 0xae000cf4  sw          $zero, 0xCF4($s0)
    ctx->pc = 0x15c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3316), GPR_U32(ctx, 0));
    // 0x15c9bc: 0xae000cf8  sw          $zero, 0xCF8($s0)
    ctx->pc = 0x15c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3320), GPR_U32(ctx, 0));
    // 0x15c9c0: 0xae000cfc  sw          $zero, 0xCFC($s0)
    ctx->pc = 0x15c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3324), GPR_U32(ctx, 0));
    // 0x15c9c4: 0xae000ce4  sw          $zero, 0xCE4($s0)
    ctx->pc = 0x15c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3300), GPR_U32(ctx, 0));
    // 0x15c9c8: 0xae000ce8  sw          $zero, 0xCE8($s0)
    ctx->pc = 0x15c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3304), GPR_U32(ctx, 0));
    // 0x15c9cc: 0xae000670  sw          $zero, 0x670($s0)
    ctx->pc = 0x15c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 0));
label_15c9d0:
    // 0x15c9d0: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x15c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x15c9d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c9d8: 0x24440680  addiu       $a0, $v0, 0x680
    ctx->pc = 0x15c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x15c9dc: 0xc049c86  jal         func_127218
    ctx->pc = 0x15C9DCu;
    SET_GPR_U32(ctx, 31, 0x15C9E4u);
    ctx->pc = 0x15C9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C9DCu;
            // 0x15c9e0: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9E4u; }
        if (ctx->pc != 0x15C9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9E4u; }
        if (ctx->pc != 0x15C9E4u) { return; }
    }
    ctx->pc = 0x15C9E4u;
label_15c9e4:
    // 0x15c9e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15c9e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15c9e8: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x15c9e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x15c9ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15C9ECu;
    {
        const bool branch_taken_0x15c9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C9ECu;
            // 0x15c9f0: 0x265200c0  addiu       $s2, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9ec) {
            ctx->pc = 0x15C9D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c9d0;
        }
    }
    ctx->pc = 0x15C9F4u;
    // 0x15c9f4: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x15c9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x15c9f8: 0xc04bc90  jal         func_12F240
    ctx->pc = 0x15C9F8u;
    SET_GPR_U32(ctx, 31, 0x15CA00u);
    ctx->pc = 0x15C9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C9F8u;
            // 0x15c9fc: 0xae000334  sw          $zero, 0x334($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA00u; }
        if (ctx->pc != 0x15CA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA00u; }
        if (ctx->pc != 0x15CA00u) { return; }
    }
    ctx->pc = 0x15CA00u;
label_15ca00:
    // 0x15ca00: 0xc04bc90  jal         func_12F240
    ctx->pc = 0x15CA00u;
    SET_GPR_U32(ctx, 31, 0x15CA08u);
    ctx->pc = 0x15CA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA00u;
            // 0x15ca04: 0x26040350  addiu       $a0, $s0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA08u; }
        if (ctx->pc != 0x15CA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA08u; }
        if (ctx->pc != 0x15CA08u) { return; }
    }
    ctx->pc = 0x15CA08u;
label_15ca08:
    // 0x15ca08: 0xae000ca8  sw          $zero, 0xCA8($s0)
    ctx->pc = 0x15ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3240), GPR_U32(ctx, 0));
    // 0x15ca0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15ca0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ca10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ca10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ca14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ca14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ca18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ca18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ca1c: 0x3e00008  jr          $ra
    ctx->pc = 0x15CA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA1Cu;
            // 0x15ca20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CA24u;
}
