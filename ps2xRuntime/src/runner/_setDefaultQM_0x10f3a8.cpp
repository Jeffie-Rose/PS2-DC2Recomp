#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _setDefaultQM
// Address: 0x10f3a8 - 0x10f47c
void _setDefaultQM_0x10f3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_setDefaultQM_0x10f3a8");
#endif

    switch (ctx->pc) {
        case 0x10f3dcu: goto label_10f3dc;
        case 0x10f3e4u: goto label_10f3e4;
        case 0x10f3f8u: goto label_10f3f8;
        case 0x10f400u: goto label_10f400;
        case 0x10f43cu: goto label_10f43c;
        case 0x10f448u: goto label_10f448;
        case 0x10f450u: goto label_10f450;
        case 0x10f464u: goto label_10f464;
        default: break;
    }

    ctx->pc = 0x10f3a8u;

    // 0x10f3a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10f3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10f3ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10f3b0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10f3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x10f3b4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10f3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10f3b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10f3b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3bc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10f3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10f3c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10f3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10f3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10f3c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10f3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3d0: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x10f3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x10f3d4: 0xc04394a  jal         func_10E528
    ctx->pc = 0x10F3D4u;
    SET_GPR_U32(ctx, 31, 0x10F3DCu);
    ctx->pc = 0x10F3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F3D4u;
            // 0x10f3d8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (runtime->hasFunction(0x10E528u)) {
        auto targetFn = runtime->lookupFunction(0x10E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F3DCu; }
        if (ctx->pc != 0x10F3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x10e528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F3DCu; }
        if (ctx->pc != 0x10F3DCu) { return; }
    }
    ctx->pc = 0x10F3DCu;
label_10f3dc:
    // 0x10f3dc: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x10F3DCu;
    SET_GPR_U32(ctx, 31, 0x10F3E4u);
    ctx->pc = 0x10F3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F3DCu;
            // 0x10f3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F3E4u; }
        if (ctx->pc != 0x10F3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F3E4u; }
        if (ctx->pc != 0x10F3E4u) { return; }
    }
    ctx->pc = 0x10F3E4u;
label_10f3e4:
    // 0x10f3e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10f3e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3ec: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10f3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10f3f0: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x10F3F0u;
    SET_GPR_U32(ctx, 31, 0x10F3F8u);
    ctx->pc = 0x10F3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F3F0u;
            // 0x10f3f4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F3F8u; }
        if (ctx->pc != 0x10F3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F3F8u; }
        if (ctx->pc != 0x10F3F8u) { return; }
    }
    ctx->pc = 0x10F3F8u;
label_10f3f8:
    // 0x10f3f8: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10F3F8u;
    SET_GPR_U32(ctx, 31, 0x10F400u);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F400u; }
        if (ctx->pc != 0x10F400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F400u; }
        if (ctx->pc != 0x10F400u) { return; }
    }
    ctx->pc = 0x10F400u;
label_10f400:
    // 0x10f400: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10f400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10f404: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10f404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10f408: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10f408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10f40c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10f40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10f410: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x10f410u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x10f414: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10f414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10f418: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10f418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x10f41c: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10f41cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10f420: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10f420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f424: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10f424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10f428: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10f428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x10f42c: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x10f42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x10f430: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x10f430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10f434: 0xc04630a  jal         func_118C28
    ctx->pc = 0x10F434u;
    SET_GPR_U32(ctx, 31, 0x10F43Cu);
    ctx->pc = 0x10F438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F434u;
            // 0x10f438: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F43Cu; }
        if (ctx->pc != 0x10F43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F43Cu; }
        if (ctx->pc != 0x10F43Cu) { return; }
    }
    ctx->pc = 0x10F43Cu;
label_10f43c:
    // 0x10f43c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10f43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f440: 0xc042acc  jal         func_10AB30
    ctx->pc = 0x10F440u;
    SET_GPR_U32(ctx, 31, 0x10F448u);
    ctx->pc = 0x10F444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F440u;
            // 0x10f444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB30u;
    if (runtime->hasFunction(0x10AB30u)) {
        auto targetFn = runtime->lookupFunction(0x10AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F448u; }
        if (ctx->pc != 0x10F448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x10ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F448u; }
        if (ctx->pc != 0x10F448u) { return; }
    }
    ctx->pc = 0x10F448u;
label_10f448:
    // 0x10f448: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x10F448u;
    SET_GPR_U32(ctx, 31, 0x10F450u);
    ctx->pc = 0x10F44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F448u;
            // 0x10f44c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F450u; }
        if (ctx->pc != 0x10F450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F450u; }
        if (ctx->pc != 0x10F450u) { return; }
    }
    ctx->pc = 0x10F450u;
label_10f450:
    // 0x10f450: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x10f450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x10f454: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10f454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10f458: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10f458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10f45c: 0xc04394a  jal         func_10E528
    ctx->pc = 0x10F45Cu;
    SET_GPR_U32(ctx, 31, 0x10F464u);
    ctx->pc = 0x10F460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F45Cu;
            // 0x10f460: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (runtime->hasFunction(0x10E528u)) {
        auto targetFn = runtime->lookupFunction(0x10E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F464u; }
        if (ctx->pc != 0x10F464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x10e528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F464u; }
        if (ctx->pc != 0x10F464u) { return; }
    }
    ctx->pc = 0x10F464u;
label_10f464:
    // 0x10f464: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10f464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10f468: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10f468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10f46c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10f46cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f470: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10f470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f474: 0x3e00008  jr          $ra
    ctx->pc = 0x10F474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F474u;
            // 0x10f478: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F47Cu;
}
