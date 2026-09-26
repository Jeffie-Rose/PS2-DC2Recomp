#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCALE__FP9SPI_STACKi
// Address: 0x175840 - 0x1758f4
void ps2__SCALE__FP9SPI_STACKi_0x175840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCALE__FP9SPI_STACKi_0x175840");
#endif

    switch (ctx->pc) {
        case 0x175840u: goto label_175840;
        case 0x175844u: goto label_175844;
        case 0x175848u: goto label_175848;
        case 0x17584cu: goto label_17584c;
        case 0x175850u: goto label_175850;
        case 0x175854u: goto label_175854;
        case 0x175858u: goto label_175858;
        case 0x17585cu: goto label_17585c;
        case 0x175860u: goto label_175860;
        case 0x175864u: goto label_175864;
        case 0x175868u: goto label_175868;
        case 0x17586cu: goto label_17586c;
        case 0x175870u: goto label_175870;
        case 0x175874u: goto label_175874;
        case 0x175878u: goto label_175878;
        case 0x17587cu: goto label_17587c;
        case 0x175880u: goto label_175880;
        case 0x175884u: goto label_175884;
        case 0x175888u: goto label_175888;
        case 0x17588cu: goto label_17588c;
        case 0x175890u: goto label_175890;
        case 0x175894u: goto label_175894;
        case 0x175898u: goto label_175898;
        case 0x17589cu: goto label_17589c;
        case 0x1758a0u: goto label_1758a0;
        case 0x1758a4u: goto label_1758a4;
        case 0x1758a8u: goto label_1758a8;
        case 0x1758acu: goto label_1758ac;
        case 0x1758b0u: goto label_1758b0;
        case 0x1758b4u: goto label_1758b4;
        case 0x1758b8u: goto label_1758b8;
        case 0x1758bcu: goto label_1758bc;
        case 0x1758c0u: goto label_1758c0;
        case 0x1758c4u: goto label_1758c4;
        case 0x1758c8u: goto label_1758c8;
        case 0x1758ccu: goto label_1758cc;
        case 0x1758d0u: goto label_1758d0;
        case 0x1758d4u: goto label_1758d4;
        case 0x1758d8u: goto label_1758d8;
        case 0x1758dcu: goto label_1758dc;
        case 0x1758e0u: goto label_1758e0;
        case 0x1758e4u: goto label_1758e4;
        case 0x1758e8u: goto label_1758e8;
        case 0x1758ecu: goto label_1758ec;
        case 0x1758f0u: goto label_1758f0;
        default: break;
    }

    ctx->pc = 0x175840u;

label_175840:
    // 0x175840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_175844:
    // 0x175844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_175848:
    // 0x175848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17584c:
    // 0x17584c: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x17584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_175850:
    // 0x175850: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_175854:
    if (ctx->pc == 0x175854u) {
        ctx->pc = 0x175854u;
            // 0x175854: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x175858u;
        goto label_175858;
    }
    ctx->pc = 0x175850u;
    {
        const bool branch_taken_0x175850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175850u;
            // 0x175854: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175850) {
            ctx->pc = 0x175860u;
            goto label_175860;
        }
    }
    ctx->pc = 0x175858u;
label_175858:
    // 0x175858: 0x10000022  b           . + 4 + (0x22 << 2)
label_17585c:
    if (ctx->pc == 0x17585Cu) {
        ctx->pc = 0x17585Cu;
            // 0x17585c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175860u;
        goto label_175860;
    }
    ctx->pc = 0x175858u;
    {
        const bool branch_taken_0x175858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17585Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175858u;
            // 0x17585c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175858) {
            ctx->pc = 0x1758E4u;
            goto label_1758e4;
        }
    }
    ctx->pc = 0x175860u;
label_175860:
    // 0x175860: 0xc05190c  jal         func_146430
label_175864:
    if (ctx->pc == 0x175864u) {
        ctx->pc = 0x175868u;
        goto label_175868;
    }
    ctx->pc = 0x175860u;
    SET_GPR_U32(ctx, 31, 0x175868u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175868u; }
        if (ctx->pc != 0x175868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175868u; }
        if (ctx->pc != 0x175868u) { return; }
    }
    ctx->pc = 0x175868u;
label_175868:
    // 0x175868: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x175868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_17586c:
    // 0x17586c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17586cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_175870:
    // 0x175870: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x175870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_175874:
    // 0x175874: 0xc05190c  jal         func_146430
label_175878:
    if (ctx->pc == 0x175878u) {
        ctx->pc = 0x175878u;
            // 0x175878: 0xe4400090  swc1        $f0, 0x90($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
        ctx->pc = 0x17587Cu;
        goto label_17587c;
    }
    ctx->pc = 0x175874u;
    SET_GPR_U32(ctx, 31, 0x17587Cu);
    ctx->pc = 0x175878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175874u;
            // 0x175878: 0xe4400090  swc1        $f0, 0x90($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17587Cu; }
        if (ctx->pc != 0x17587Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17587Cu; }
        if (ctx->pc != 0x17587Cu) { return; }
    }
    ctx->pc = 0x17587Cu;
label_17587c:
    // 0x17587c: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x17587cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_175880:
    // 0x175880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_175884:
    // 0x175884: 0xc05190c  jal         func_146430
label_175888:
    if (ctx->pc == 0x175888u) {
        ctx->pc = 0x175888u;
            // 0x175888: 0xe4400094  swc1        $f0, 0x94($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
        ctx->pc = 0x17588Cu;
        goto label_17588c;
    }
    ctx->pc = 0x175884u;
    SET_GPR_U32(ctx, 31, 0x17588Cu);
    ctx->pc = 0x175888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175884u;
            // 0x175888: 0xe4400094  swc1        $f0, 0x94($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17588Cu; }
        if (ctx->pc != 0x17588Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17588Cu; }
        if (ctx->pc != 0x17588Cu) { return; }
    }
    ctx->pc = 0x17588Cu;
label_17588c:
    // 0x17588c: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x17588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_175890:
    // 0x175890: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x175890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_175894:
    // 0x175894: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x175894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
label_175898:
    // 0x175898: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x175898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_17589c:
    // 0x17589c: 0xac43009c  sw          $v1, 0x9C($v0)
    ctx->pc = 0x17589cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 3));
label_1758a0:
    // 0x1758a0: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x1758a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_1758a4:
    // 0x1758a4: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x1758a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_1758a8:
    // 0x1758a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1758ac:
    if (ctx->pc == 0x1758ACu) {
        ctx->pc = 0x1758B0u;
        goto label_1758b0;
    }
    ctx->pc = 0x1758A8u;
    {
        const bool branch_taken_0x1758a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1758a8) {
            ctx->pc = 0x1758C0u;
            goto label_1758c0;
        }
    }
    ctx->pc = 0x1758B0u;
label_1758b0:
    // 0x1758b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1758b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1758b4:
    // 0x1758b4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1758b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1758b8:
    // 0x1758b8: 0x320f809  jalr        $t9
label_1758bc:
    if (ctx->pc == 0x1758BCu) {
        ctx->pc = 0x1758BCu;
            // 0x1758bc: 0x24850090  addiu       $a1, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->pc = 0x1758C0u;
        goto label_1758c0;
    }
    ctx->pc = 0x1758B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1758C0u);
        ctx->pc = 0x1758BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1758B8u;
            // 0x1758bc: 0x24850090  addiu       $a1, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1758C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1758C0u; }
            if (ctx->pc != 0x1758C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1758C0u;
label_1758c0:
    // 0x1758c0: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1758c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_1758c4:
    // 0x1758c4: 0x8c4402c0  lw          $a0, 0x2C0($v0)
    ctx->pc = 0x1758c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
label_1758c8:
    // 0x1758c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1758cc:
    if (ctx->pc == 0x1758CCu) {
        ctx->pc = 0x1758D0u;
        goto label_1758d0;
    }
    ctx->pc = 0x1758C8u;
    {
        const bool branch_taken_0x1758c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1758c8) {
            ctx->pc = 0x1758E0u;
            goto label_1758e0;
        }
    }
    ctx->pc = 0x1758D0u;
label_1758d0:
    // 0x1758d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1758d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1758d4:
    // 0x1758d4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1758d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1758d8:
    // 0x1758d8: 0x320f809  jalr        $t9
label_1758dc:
    if (ctx->pc == 0x1758DCu) {
        ctx->pc = 0x1758DCu;
            // 0x1758dc: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x1758E0u;
        goto label_1758e0;
    }
    ctx->pc = 0x1758D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1758E0u);
        ctx->pc = 0x1758DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1758D8u;
            // 0x1758dc: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1758E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1758E0u; }
            if (ctx->pc != 0x1758E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1758E0u;
label_1758e0:
    // 0x1758e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1758e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1758e4:
    // 0x1758e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1758e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1758e8:
    // 0x1758e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1758e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1758ec:
    // 0x1758ec: 0x3e00008  jr          $ra
label_1758f0:
    if (ctx->pc == 0x1758F0u) {
        ctx->pc = 0x1758F0u;
            // 0x1758f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1758F4u;
        goto label_fallthrough_0x1758ec;
    }
    ctx->pc = 0x1758ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1758F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1758ECu;
            // 0x1758f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1758ec:
    ctx->pc = 0x1758F4u;
}
