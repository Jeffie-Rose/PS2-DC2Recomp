#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDirect__12CObjectFrameFv
// Address: 0x16a010 - 0x16a050
void DrawDirect__12CObjectFrameFv_0x16a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDirect__12CObjectFrameFv_0x16a010");
#endif

    switch (ctx->pc) {
        case 0x16a024u: goto label_16a024;
        case 0x16a03cu: goto label_16a03c;
        default: break;
    }

    ctx->pc = 0x16a010u;

    // 0x16a010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a01c: 0xc05a7cc  jal         func_169F30
    ctx->pc = 0x16A01Cu;
    SET_GPR_U32(ctx, 31, 0x16A024u);
    ctx->pc = 0x16A020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A01Cu;
            // 0x16a020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169F30u;
    if (runtime->hasFunction(0x169F30u)) {
        auto targetFn = runtime->lookupFunction(0x169F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A024u; }
        if (ctx->pc != 0x16A024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PreDraw__12CObjectFrameFv_0x169f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A024u; }
        if (ctx->pc != 0x16A024u) { return; }
    }
    ctx->pc = 0x16A024u;
label_16a024:
    // 0x16a024: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A024u;
    {
        const bool branch_taken_0x16a024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A024u;
            // 0x16a028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a024) {
            ctx->pc = 0x16A034u;
            goto label_16a034;
        }
    }
    ctx->pc = 0x16A02Cu;
    // 0x16a02c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16A02Cu;
    {
        const bool branch_taken_0x16a02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A02Cu;
            // 0x16a030: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a02c) {
            ctx->pc = 0x16A044u;
            goto label_16a044;
        }
    }
    ctx->pc = 0x16A034u;
label_16a034:
    // 0x16a034: 0xc050bf4  jal         func_142FD0
    ctx->pc = 0x16A034u;
    SET_GPR_U32(ctx, 31, 0x16A03Cu);
    ctx->pc = 0x16A038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A034u;
            // 0x16a038: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A03Cu; }
        if (ctx->pc != 0x16A03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A03Cu; }
        if (ctx->pc != 0x16A03Cu) { return; }
    }
    ctx->pc = 0x16A03Cu;
label_16a03c:
    // 0x16a03c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a044:
    // 0x16a044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a048: 0x3e00008  jr          $ra
    ctx->pc = 0x16A048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A048u;
            // 0x16a04c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A050u;
}
