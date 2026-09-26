#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __MOVE_P2_RAND__FP9SPI_STACKi
// Address: 0x182310 - 0x18238c
void ps2___MOVE_P2_RAND__FP9SPI_STACKi_0x182310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___MOVE_P2_RAND__FP9SPI_STACKi_0x182310");
#endif

    switch (ctx->pc) {
        case 0x182324u: goto label_182324;
        case 0x182338u: goto label_182338;
        case 0x18234cu: goto label_18234c;
        case 0x182360u: goto label_182360;
        case 0x182370u: goto label_182370;
        default: break;
    }

    ctx->pc = 0x182310u;

    // 0x182310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182314: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18231c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x18231Cu;
    SET_GPR_U32(ctx, 31, 0x182324u);
    ctx->pc = 0x182320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18231Cu;
            // 0x182320: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182324u; }
        if (ctx->pc != 0x182324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182324u; }
        if (ctx->pc != 0x182324u) { return; }
    }
    ctx->pc = 0x182324u;
label_182324:
    // 0x182324: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18232c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x18232cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182330: 0xc05190c  jal         func_146430
    ctx->pc = 0x182330u;
    SET_GPR_U32(ctx, 31, 0x182338u);
    ctx->pc = 0x182334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182330u;
            // 0x182334: 0xac62011c  sw          $v0, 0x11C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182338u; }
        if (ctx->pc != 0x182338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182338u; }
        if (ctx->pc != 0x182338u) { return; }
    }
    ctx->pc = 0x182338u;
label_182338:
    // 0x182338: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18233c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18233cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182340: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x182340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182344: 0xc05190c  jal         func_146430
    ctx->pc = 0x182344u;
    SET_GPR_U32(ctx, 31, 0x18234Cu);
    ctx->pc = 0x182348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182344u;
            // 0x182348: 0xe4400150  swc1        $f0, 0x150($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18234Cu; }
        if (ctx->pc != 0x18234Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18234Cu; }
        if (ctx->pc != 0x18234Cu) { return; }
    }
    ctx->pc = 0x18234Cu;
label_18234c:
    // 0x18234c: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x18234cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182354: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x182354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182358: 0xc05190c  jal         func_146430
    ctx->pc = 0x182358u;
    SET_GPR_U32(ctx, 31, 0x182360u);
    ctx->pc = 0x18235Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182358u;
            // 0x18235c: 0xe4400154  swc1        $f0, 0x154($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182360u; }
        if (ctx->pc != 0x182360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182360u; }
        if (ctx->pc != 0x182360u) { return; }
    }
    ctx->pc = 0x182360u;
label_182360:
    // 0x182360: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182368: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x182368u;
    SET_GPR_U32(ctx, 31, 0x182370u);
    ctx->pc = 0x18236Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182368u;
            // 0x18236c: 0xe4400158  swc1        $f0, 0x158($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 344), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182370u; }
        if (ctx->pc != 0x182370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182370u; }
        if (ctx->pc != 0x182370u) { return; }
    }
    ctx->pc = 0x182370u;
label_182370:
    // 0x182370: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182374: 0xac62016c  sw          $v0, 0x16C($v1)
    ctx->pc = 0x182374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 364), GPR_U32(ctx, 2));
    // 0x182378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18237c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182384: 0x3e00008  jr          $ra
    ctx->pc = 0x182384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182384u;
            // 0x182388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18238Cu;
}
