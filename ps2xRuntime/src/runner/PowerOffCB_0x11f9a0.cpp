#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PowerOffCB
// Address: 0x11f9a0 - 0x11fa04
void PowerOffCB_0x11f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PowerOffCB_0x11f9a0");
#endif

    switch (ctx->pc) {
        case 0x11f9c0u: goto label_11f9c0;
        case 0x11f9d8u: goto label_11f9d8;
        case 0x11f9e0u: goto label_11f9e0;
        default: break;
    }

    ctx->pc = 0x11f9a0u;

    // 0x11f9a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11f9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11f9a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11f9a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11f9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11f9ac: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x11f9acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f9b0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x11f9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x11f9b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11f9b8: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x11F9B8u;
    SET_GPR_U32(ctx, 31, 0x11F9C0u);
    ctx->pc = 0x11F9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F9B8u;
            // 0x11f9bc: 0xae111de4  sw          $s1, 0x1DE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7652), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F9C0u; }
        if (ctx->pc != 0x11F9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F9C0u; }
        if (ctx->pc != 0x11F9C0u) { return; }
    }
    ctx->pc = 0x11F9C0u;
label_11f9c0:
    // 0x11f9c0: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11f9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x11f9c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11f9c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f9c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f9cc: 0x24a5f960  addiu       $a1, $a1, -0x6A0
    ctx->pc = 0x11f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965600));
    // 0x11f9d0: 0xc044996  jal         func_112658
    ctx->pc = 0x11F9D0u;
    SET_GPR_U32(ctx, 31, 0x11F9D8u);
    ctx->pc = 0x11F9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F9D0u;
            // 0x11f9d4: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
    ctx->pc = 0x112658u;
    if (runtime->hasFunction(0x112658u)) {
        auto targetFn = runtime->lookupFunction(0x112658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F9D8u; }
        if (ctx->pc != 0x11F9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAddCmdHandler_0x112658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F9D8u; }
        if (ctx->pc != 0x11F9D8u) { return; }
    }
    ctx->pc = 0x11F9D8u;
label_11f9d8:
    // 0x11f9d8: 0xc04630a  jal         func_118C28
    ctx->pc = 0x11F9D8u;
    SET_GPR_U32(ctx, 31, 0x11F9E0u);
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F9E0u; }
        if (ctx->pc != 0x11F9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F9E0u; }
        if (ctx->pc != 0x11F9E0u) { return; }
    }
    ctx->pc = 0x11F9E0u;
label_11f9e0:
    // 0x11f9e0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x11f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x11f9e4: 0xae001de4  sw          $zero, 0x1DE4($s0)
    ctx->pc = 0x11f9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7652), GPR_U32(ctx, 0));
    // 0x11f9e8: 0xac711dfc  sw          $s1, 0x1DFC($v1)
    ctx->pc = 0x11f9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7676), GPR_U32(ctx, 17));
    // 0x11f9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f9f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11f9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f9f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11f9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f9f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11f9f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x11F9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F9FCu;
            // 0x11fa00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11FA04u;
}
