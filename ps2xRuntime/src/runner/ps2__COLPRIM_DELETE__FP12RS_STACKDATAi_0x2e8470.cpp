#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _COLPRIM_DELETE__FP12RS_STACKDATAi
// Address: 0x2e8470 - 0x2e84cc
void ps2__COLPRIM_DELETE__FP12RS_STACKDATAi_0x2e8470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__COLPRIM_DELETE__FP12RS_STACKDATAi_0x2e8470");
#endif

    switch (ctx->pc) {
        case 0x2e8494u: goto label_2e8494;
        case 0x2e84b4u: goto label_2e84b4;
        default: break;
    }

    ctx->pc = 0x2e8470u;

    // 0x2e8470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e8470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e8474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8478: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e847c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E847Cu;
    {
        const bool branch_taken_0x2e847c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E847Cu;
            // 0x2e8480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e847c) {
            ctx->pc = 0x2E848Cu;
            goto label_2e848c;
        }
    }
    ctx->pc = 0x2E8484u;
    // 0x2e8484: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E8484u;
    {
        const bool branch_taken_0x2e8484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8484u;
            // 0x2e8488: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8484) {
            ctx->pc = 0x2E84C4u;
            goto label_2e84c4;
        }
    }
    ctx->pc = 0x2E848Cu;
label_2e848c:
    // 0x2e848c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E848Cu;
    SET_GPR_U32(ctx, 31, 0x2E8494u);
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8494u; }
        if (ctx->pc != 0x2E8494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8494u; }
        if (ctx->pc != 0x2E8494u) { return; }
    }
    ctx->pc = 0x2E8494u;
label_2e8494:
    // 0x2e8494: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8498: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x2e8498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e849c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E849Cu;
    {
        const bool branch_taken_0x2e849c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E84A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E849Cu;
            // 0x2e84a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e849c) {
            ctx->pc = 0x2E84ACu;
            goto label_2e84ac;
        }
    }
    ctx->pc = 0x2E84A4u;
    // 0x2e84a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E84A4u;
    {
        const bool branch_taken_0x2e84a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E84A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E84A4u;
            // 0x2e84a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84a4) {
            ctx->pc = 0x2E84C0u;
            goto label_2e84c0;
        }
    }
    ctx->pc = 0x2E84ACu;
label_2e84ac:
    // 0x2e84ac: 0xc06e9a0  jal         func_1BA680
    ctx->pc = 0x2E84ACu;
    SET_GPR_U32(ctx, 31, 0x2E84B4u);
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E84B4u; }
        if (ctx->pc != 0x2E84B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E84B4u; }
        if (ctx->pc != 0x2E84B4u) { return; }
    }
    ctx->pc = 0x2E84B4u;
label_2e84b4:
    // 0x2e84b4: 0x8f839ed0  lw          $v1, -0x6130($gp)
    ctx->pc = 0x2e84b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e84b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e84bc: 0xac600134  sw          $zero, 0x134($v1)
    ctx->pc = 0x2e84bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 0));
label_2e84c0:
    // 0x2e84c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e84c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e84c4:
    // 0x2e84c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E84C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E84C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E84C4u;
            // 0x2e84c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E84CCu;
}
