#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_FORM_SWAP__FP9SPI_STACKi
// Address: 0x2544f0 - 0x254548
void ps2__MENU_EXE_FORM_SWAP__FP9SPI_STACKi_0x2544f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_FORM_SWAP__FP9SPI_STACKi_0x2544f0");
#endif

    switch (ctx->pc) {
        case 0x254518u: goto label_254518;
        case 0x254524u: goto label_254524;
        case 0x254534u: goto label_254534;
        default: break;
    }

    ctx->pc = 0x2544f0u;

    // 0x2544f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2544f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2544f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2544f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2544f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2544f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2544fc: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x2544fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254500: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254500u;
    {
        const bool branch_taken_0x254500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254500u;
            // 0x254504: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254500) {
            ctx->pc = 0x254510u;
            goto label_254510;
        }
    }
    ctx->pc = 0x254508u;
    // 0x254508: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x254508u;
    {
        const bool branch_taken_0x254508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25450Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254508u;
            // 0x25450c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254508) {
            ctx->pc = 0x254538u;
            goto label_254538;
        }
    }
    ctx->pc = 0x254510u;
label_254510:
    // 0x254510: 0xc05191c  jal         func_146470
    ctx->pc = 0x254510u;
    SET_GPR_U32(ctx, 31, 0x254518u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254518u; }
        if (ctx->pc != 0x254518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254518u; }
        if (ctx->pc != 0x254518u) { return; }
    }
    ctx->pc = 0x254518u;
label_254518:
    // 0x254518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25451c: 0xc05191c  jal         func_146470
    ctx->pc = 0x25451Cu;
    SET_GPR_U32(ctx, 31, 0x254524u);
    ctx->pc = 0x254520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25451Cu;
            // 0x254520: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254524u; }
        if (ctx->pc != 0x254524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254524u; }
        if (ctx->pc != 0x254524u) { return; }
    }
    ctx->pc = 0x254524u;
label_254524:
    // 0x254524: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x254524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x254528: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x254528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25452c: 0xc08ac48  jal         func_22B120
    ctx->pc = 0x25452Cu;
    SET_GPR_U32(ctx, 31, 0x254534u);
    ctx->pc = 0x254530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25452Cu;
            // 0x254530: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B120u;
    if (runtime->hasFunction(0x22B120u)) {
        auto targetFn = runtime->lookupFunction(0x22B120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254534u; }
        if (ctx->pc != 0x254534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormReLink__14CPosDataManageFPcPc_0x22b120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254534u; }
        if (ctx->pc != 0x254534u) { return; }
    }
    ctx->pc = 0x254534u;
label_254534:
    // 0x254534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254538:
    // 0x254538: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25453c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25453cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254540: 0x3e00008  jr          $ra
    ctx->pc = 0x254540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254540u;
            // 0x254544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254548u;
}
