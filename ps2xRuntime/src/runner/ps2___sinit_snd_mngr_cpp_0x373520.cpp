#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_snd_mngr.cpp
// Address: 0x373520 - 0x373574
void ps2___sinit_snd_mngr_cpp_0x373520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_snd_mngr_cpp_0x373520");
#endif

    switch (ctx->pc) {
        case 0x373548u: goto label_373548;
        case 0x373568u: goto label_373568;
        default: break;
    }

    ctx->pc = 0x373520u;

    // 0x373520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373524: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x373524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x373528: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x373528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x37352c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37352cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373530: 0x24843680  addiu       $a0, $a0, 0x3680
    ctx->pc = 0x373530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13952));
    // 0x373534: 0x24a50680  addiu       $a1, $a1, 0x680
    ctx->pc = 0x373534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1664));
    // 0x373538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37353c: 0x2407029c  addiu       $a3, $zero, 0x29C
    ctx->pc = 0x37353cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x373540: 0xc040070  jal         func_1001C0
    ctx->pc = 0x373540u;
    SET_GPR_U32(ctx, 31, 0x373548u);
    ctx->pc = 0x373544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373540u;
            // 0x373544: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373548u; }
        if (ctx->pc != 0x373548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373548u; }
        if (ctx->pc != 0x373548u) { return; }
    }
    ctx->pc = 0x373548u;
label_373548:
    // 0x373548: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x373548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x37354c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x37354cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x373550: 0x24846040  addiu       $a0, $a0, 0x6040
    ctx->pc = 0x373550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24640));
    // 0x373554: 0x24a50600  addiu       $a1, $a1, 0x600
    ctx->pc = 0x373554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1536));
    // 0x373558: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37355c: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x37355cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x373560: 0xc040070  jal         func_1001C0
    ctx->pc = 0x373560u;
    SET_GPR_U32(ctx, 31, 0x373568u);
    ctx->pc = 0x373564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373560u;
            // 0x373564: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373568u; }
        if (ctx->pc != 0x373568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373568u; }
        if (ctx->pc != 0x373568u) { return; }
    }
    ctx->pc = 0x373568u;
label_373568:
    // 0x373568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37356c: 0x3e00008  jr          $ra
    ctx->pc = 0x37356Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37356Cu;
            // 0x373570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x373574u;
}
