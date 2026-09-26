#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _BODY_SIZE__FP9SPI_STACKi
// Address: 0x1757c0 - 0x175840
void ps2__BODY_SIZE__FP9SPI_STACKi_0x1757c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__BODY_SIZE__FP9SPI_STACKi_0x1757c0");
#endif

    switch (ctx->pc) {
        case 0x1757e8u: goto label_1757e8;
        case 0x175804u: goto label_175804;
        case 0x17581cu: goto label_17581c;
        default: break;
    }

    ctx->pc = 0x1757c0u;

    // 0x1757c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1757c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1757c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1757c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1757c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1757c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1757cc: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1757ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1757d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1757D0u;
    {
        const bool branch_taken_0x1757d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1757D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1757D0u;
            // 0x1757d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757d0) {
            ctx->pc = 0x1757E0u;
            goto label_1757e0;
        }
    }
    ctx->pc = 0x1757D8u;
    // 0x1757d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1757D8u;
    {
        const bool branch_taken_0x1757d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1757D8u;
            // 0x1757dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757d8) {
            ctx->pc = 0x175830u;
            goto label_175830;
        }
    }
    ctx->pc = 0x1757E0u;
label_1757e0:
    // 0x1757e0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1757E0u;
    SET_GPR_U32(ctx, 31, 0x1757E8u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1757E8u; }
        if (ctx->pc != 0x1757E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1757E8u; }
        if (ctx->pc != 0x1757E8u) { return; }
    }
    ctx->pc = 0x1757E8u;
label_1757e8:
    // 0x1757e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1757e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1757ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1757ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1757f0: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1757f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1757f4: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1757f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1757f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1757f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1757fc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1757FCu;
    SET_GPR_U32(ctx, 31, 0x175804u);
    ctx->pc = 0x175800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1757FCu;
            // 0x175800: 0xe4400110  swc1        $f0, 0x110($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175804u; }
        if (ctx->pc != 0x175804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175804u; }
        if (ctx->pc != 0x175804u) { return; }
    }
    ctx->pc = 0x175804u;
label_175804:
    // 0x175804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175808: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x175808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x17580c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17580cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175810: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x175810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x175814: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x175814u;
    SET_GPR_U32(ctx, 31, 0x17581Cu);
    ctx->pc = 0x175818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175814u;
            // 0x175818: 0xe460010c  swc1        $f0, 0x10C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17581Cu; }
        if (ctx->pc != 0x17581Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17581Cu; }
        if (ctx->pc != 0x17581Cu) { return; }
    }
    ctx->pc = 0x17581Cu;
label_17581c:
    // 0x17581c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17581cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175820: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x175820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175824: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x175824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x175828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17582c: 0xe4600114  swc1        $f0, 0x114($v1)
    ctx->pc = 0x17582cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 276), bits); }
label_175830:
    // 0x175830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175838: 0x3e00008  jr          $ra
    ctx->pc = 0x175838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17583Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175838u;
            // 0x17583c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175840u;
}
