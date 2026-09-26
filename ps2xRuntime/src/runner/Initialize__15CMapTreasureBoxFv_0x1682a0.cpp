#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__15CMapTreasureBoxFv
// Address: 0x1682a0 - 0x1682e4
void Initialize__15CMapTreasureBoxFv_0x1682a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__15CMapTreasureBoxFv_0x1682a0");
#endif

    switch (ctx->pc) {
        case 0x1682b4u: goto label_1682b4;
        default: break;
    }

    ctx->pc = 0x1682a0u;

    // 0x1682a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1682a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1682a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1682a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1682a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1682a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1682ac: 0xc05d4d0  jal         func_175340
    ctx->pc = 0x1682ACu;
    SET_GPR_U32(ctx, 31, 0x1682B4u);
    ctx->pc = 0x1682B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1682ACu;
            // 0x1682b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175340u;
    if (runtime->hasFunction(0x175340u)) {
        auto targetFn = runtime->lookupFunction(0x175340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1682B4u; }
        if (ctx->pc != 0x1682B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CCharacter2Fv_0x175340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1682B4u; }
        if (ctx->pc != 0x1682B4u) { return; }
    }
    ctx->pc = 0x1682B4u;
label_1682b4:
    // 0x1682b4: 0xae000660  sw          $zero, 0x660($s0)
    ctx->pc = 0x1682b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 0));
    // 0x1682b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1682b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1682bc: 0xae000664  sw          $zero, 0x664($s0)
    ctx->pc = 0x1682bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 0));
    // 0x1682c0: 0xae030668  sw          $v1, 0x668($s0)
    ctx->pc = 0x1682c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 3));
    // 0x1682c4: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x1682c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x1682c8: 0xae030670  sw          $v1, 0x670($s0)
    ctx->pc = 0x1682c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 3));
    // 0x1682cc: 0xae000674  sw          $zero, 0x674($s0)
    ctx->pc = 0x1682ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1652), GPR_U32(ctx, 0));
    // 0x1682d0: 0xae000678  sw          $zero, 0x678($s0)
    ctx->pc = 0x1682d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 0));
    // 0x1682d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1682d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1682d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1682d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1682dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1682DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1682E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1682DCu;
            // 0x1682e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1682E4u;
}
