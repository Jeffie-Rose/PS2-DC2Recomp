#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_CHARA_HEIGHT__FP12RS_STACKDATAi
// Address: 0x26bff0 - 0x26c03c
void ps2__GET_CHARA_HEIGHT__FP12RS_STACKDATAi_0x26bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_CHARA_HEIGHT__FP12RS_STACKDATAi_0x26bff0");
#endif

    switch (ctx->pc) {
        case 0x26c004u: goto label_26c004;
        case 0x26c00cu: goto label_26c00c;
        case 0x26c028u: goto label_26c028;
        default: break;
    }

    ctx->pc = 0x26bff0u;

    // 0x26bff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26bff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26bff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26bffc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26BFFCu;
    SET_GPR_U32(ctx, 31, 0x26C004u);
    ctx->pc = 0x26C000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BFFCu;
            // 0x26c000: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C004u; }
        if (ctx->pc != 0x26C004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C004u; }
        if (ctx->pc != 0x26C004u) { return; }
    }
    ctx->pc = 0x26C004u;
label_26c004:
    // 0x26c004: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x26C004u;
    SET_GPR_U32(ctx, 31, 0x26C00Cu);
    ctx->pc = 0x26C008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C004u;
            // 0x26c008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C00Cu; }
        if (ctx->pc != 0x26C00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C00Cu; }
        if (ctx->pc != 0x26C00Cu) { return; }
    }
    ctx->pc = 0x26C00Cu;
label_26c00c:
    // 0x26c00c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C00Cu;
    {
        const bool branch_taken_0x26c00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c00c) {
            ctx->pc = 0x26C01Cu;
            goto label_26c01c;
        }
    }
    ctx->pc = 0x26C014u;
    // 0x26c014: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26C014u;
    {
        const bool branch_taken_0x26c014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C014u;
            // 0x26c018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c014) {
            ctx->pc = 0x26C02Cu;
            goto label_26c02c;
        }
    }
    ctx->pc = 0x26C01Cu;
label_26c01c:
    // 0x26c01c: 0xc44c0110  lwc1        $f12, 0x110($v0)
    ctx->pc = 0x26c01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c020: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26C020u;
    SET_GPR_U32(ctx, 31, 0x26C028u);
    ctx->pc = 0x26C024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C020u;
            // 0x26c024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C028u; }
        if (ctx->pc != 0x26C028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C028u; }
        if (ctx->pc != 0x26C028u) { return; }
    }
    ctx->pc = 0x26C028u;
label_26c028:
    // 0x26c028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c02c:
    // 0x26c02c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c034: 0x3e00008  jr          $ra
    ctx->pc = 0x26C034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C034u;
            // 0x26c038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C03Cu;
}
