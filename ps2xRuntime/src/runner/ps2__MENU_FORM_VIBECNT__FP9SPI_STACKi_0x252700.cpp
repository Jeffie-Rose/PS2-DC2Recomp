#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FORM_VIBECNT__FP9SPI_STACKi
// Address: 0x252700 - 0x252754
void ps2__MENU_FORM_VIBECNT__FP9SPI_STACKi_0x252700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FORM_VIBECNT__FP9SPI_STACKi_0x252700");
#endif

    switch (ctx->pc) {
        case 0x252728u: goto label_252728;
        case 0x252738u: goto label_252738;
        default: break;
    }

    ctx->pc = 0x252700u;

    // 0x252700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25270c: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x25270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252710u;
    {
        const bool branch_taken_0x252710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252710u;
            // 0x252714: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252710) {
            ctx->pc = 0x252720u;
            goto label_252720;
        }
    }
    ctx->pc = 0x252718u;
    // 0x252718: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x252718u;
    {
        const bool branch_taken_0x252718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25271Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252718u;
            // 0x25271c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252718) {
            ctx->pc = 0x252744u;
            goto label_252744;
        }
    }
    ctx->pc = 0x252720u;
label_252720:
    // 0x252720: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252720u;
    SET_GPR_U32(ctx, 31, 0x252728u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252728u; }
        if (ctx->pc != 0x252728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252728u; }
        if (ctx->pc != 0x252728u) { return; }
    }
    ctx->pc = 0x252728u;
label_252728:
    // 0x252728: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x252728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x25272c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25272cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252730: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252730u;
    SET_GPR_U32(ctx, 31, 0x252738u);
    ctx->pc = 0x252734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252730u;
            // 0x252734: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252738u; }
        if (ctx->pc != 0x252738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252738u; }
        if (ctx->pc != 0x252738u) { return; }
    }
    ctx->pc = 0x252738u;
label_252738:
    // 0x252738: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x252738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x25273c: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x25273cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x252740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_252744:
    // 0x252744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25274c: 0x3e00008  jr          $ra
    ctx->pc = 0x25274Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25274Cu;
            // 0x252750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252754u;
}
