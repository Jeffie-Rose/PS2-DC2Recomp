#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FORM_PUTXY__FP9SPI_STACKi
// Address: 0x2527d0 - 0x252834
void ps2__MENU_FORM_PUTXY__FP9SPI_STACKi_0x2527d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FORM_PUTXY__FP9SPI_STACKi_0x2527d0");
#endif

    switch (ctx->pc) {
        case 0x2527f8u: goto label_2527f8;
        case 0x252810u: goto label_252810;
        default: break;
    }

    ctx->pc = 0x2527d0u;

    // 0x2527d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2527d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2527d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2527d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2527d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2527d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2527dc: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x2527dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2527e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2527E0u;
    {
        const bool branch_taken_0x2527e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2527E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2527E0u;
            // 0x2527e4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527e0) {
            ctx->pc = 0x2527F0u;
            goto label_2527f0;
        }
    }
    ctx->pc = 0x2527E8u;
    // 0x2527e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2527E8u;
    {
        const bool branch_taken_0x2527e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2527ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2527E8u;
            // 0x2527ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527e8) {
            ctx->pc = 0x252824u;
            goto label_252824;
        }
    }
    ctx->pc = 0x2527F0u;
label_2527f0:
    // 0x2527f0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2527F0u;
    SET_GPR_U32(ctx, 31, 0x2527F8u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2527F8u; }
        if (ctx->pc != 0x2527F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2527F8u; }
        if (ctx->pc != 0x2527F8u) { return; }
    }
    ctx->pc = 0x2527F8u;
label_2527f8:
    // 0x2527f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2527f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2527fc: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x2527fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252804: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x252804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x252808: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252808u;
    SET_GPR_U32(ctx, 31, 0x252810u);
    ctx->pc = 0x25280Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252808u;
            // 0x25280c: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252810u; }
        if (ctx->pc != 0x252810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252810u; }
        if (ctx->pc != 0x252810u) { return; }
    }
    ctx->pc = 0x252810u;
label_252810:
    // 0x252810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x252810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252814: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x252814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252818: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x252818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25281c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252820: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x252820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_252824:
    // 0x252824: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25282c: 0x3e00008  jr          $ra
    ctx->pc = 0x25282Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25282Cu;
            // 0x252830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252834u;
}
