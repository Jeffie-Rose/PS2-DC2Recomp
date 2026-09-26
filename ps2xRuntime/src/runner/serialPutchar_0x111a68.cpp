#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: serialPutchar
// Address: 0x111a68 - 0x111a9c
void serialPutchar_0x111a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("serialPutchar_0x111a68");
#endif

    switch (ctx->pc) {
        case 0x111a80u: goto label_111a80;
        default: break;
    }

    ctx->pc = 0x111a68u;

    // 0x111a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111a6c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x111a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x111a70: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x111A70u;
    {
        const bool branch_taken_0x111a70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x111A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A70u;
            // 0x111a74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a70) {
            ctx->pc = 0x111A90u;
            goto label_111a90;
        }
    }
    ctx->pc = 0x111A78u;
    // 0x111a78: 0xc044660  jal         func_111980
    ctx->pc = 0x111A78u;
    SET_GPR_U32(ctx, 31, 0x111A80u);
    ctx->pc = 0x111A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111A78u;
            // 0x111a7c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111980u;
    if (runtime->hasFunction(0x111980u)) {
        auto targetFn = runtime->lookupFunction(0x111980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111A80u; }
        if (ctx->pc != 0x111A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kputchar_0x111980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111A80u; }
        if (ctx->pc != 0x111A80u) { return; }
    }
    ctx->pc = 0x111A80u;
label_111a80:
    // 0x111a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111a84: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x111a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x111a88: 0x8044660  j           func_111980
    ctx->pc = 0x111A88u;
    ctx->pc = 0x111A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111A88u;
            // 0x111a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111980u;
    if (runtime->hasFunction(0x111980u)) {
        auto targetFn = runtime->lookupFunction(0x111980u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kputchar_0x111980(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x111A90u;
label_111a90:
    // 0x111a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111a94: 0x8044660  j           func_111980
    ctx->pc = 0x111A94u;
    ctx->pc = 0x111A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111A94u;
            // 0x111a98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111980u;
    if (runtime->hasFunction(0x111980u)) {
        auto targetFn = runtime->lookupFunction(0x111980u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kputchar_0x111980(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x111A9Cu;
}
