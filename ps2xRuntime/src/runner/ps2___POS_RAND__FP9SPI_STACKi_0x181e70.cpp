#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __POS_RAND__FP9SPI_STACKi
// Address: 0x181e70 - 0x181eec
void ps2___POS_RAND__FP9SPI_STACKi_0x181e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___POS_RAND__FP9SPI_STACKi_0x181e70");
#endif

    switch (ctx->pc) {
        case 0x181e84u: goto label_181e84;
        case 0x181e98u: goto label_181e98;
        case 0x181eacu: goto label_181eac;
        case 0x181ec0u: goto label_181ec0;
        case 0x181ed0u: goto label_181ed0;
        default: break;
    }

    ctx->pc = 0x181e70u;

    // 0x181e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181e7c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181E7Cu;
    SET_GPR_U32(ctx, 31, 0x181E84u);
    ctx->pc = 0x181E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181E7Cu;
            // 0x181e80: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E84u; }
        if (ctx->pc != 0x181E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E84u; }
        if (ctx->pc != 0x181E84u) { return; }
    }
    ctx->pc = 0x181E84u;
label_181e84:
    // 0x181e84: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e8c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x181e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x181e90: 0xc05190c  jal         func_146430
    ctx->pc = 0x181E90u;
    SET_GPR_U32(ctx, 31, 0x181E98u);
    ctx->pc = 0x181E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181E90u;
            // 0x181e94: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E98u; }
        if (ctx->pc != 0x181E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E98u; }
        if (ctx->pc != 0x181E98u) { return; }
    }
    ctx->pc = 0x181E98u;
label_181e98:
    // 0x181e98: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ea0: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x181ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x181ea4: 0xc05190c  jal         func_146430
    ctx->pc = 0x181EA4u;
    SET_GPR_U32(ctx, 31, 0x181EACu);
    ctx->pc = 0x181EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181EA4u;
            // 0x181ea8: 0xe4400090  swc1        $f0, 0x90($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181EACu; }
        if (ctx->pc != 0x181EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181EACu; }
        if (ctx->pc != 0x181EACu) { return; }
    }
    ctx->pc = 0x181EACu;
label_181eac:
    // 0x181eac: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181eb4: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x181eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x181eb8: 0xc05190c  jal         func_146430
    ctx->pc = 0x181EB8u;
    SET_GPR_U32(ctx, 31, 0x181EC0u);
    ctx->pc = 0x181EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181EB8u;
            // 0x181ebc: 0xe4400094  swc1        $f0, 0x94($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181EC0u; }
        if (ctx->pc != 0x181EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181EC0u; }
        if (ctx->pc != 0x181EC0u) { return; }
    }
    ctx->pc = 0x181EC0u;
label_181ec0:
    // 0x181ec0: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ec8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181EC8u;
    SET_GPR_U32(ctx, 31, 0x181ED0u);
    ctx->pc = 0x181ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181EC8u;
            // 0x181ecc: 0xe4400098  swc1        $f0, 0x98($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181ED0u; }
        if (ctx->pc != 0x181ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181ED0u; }
        if (ctx->pc != 0x181ED0u) { return; }
    }
    ctx->pc = 0x181ED0u;
label_181ed0:
    // 0x181ed0: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181ed4: 0xac6200a0  sw          $v0, 0xA0($v1)
    ctx->pc = 0x181ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 2));
    // 0x181ed8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x181EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181EE4u;
            // 0x181ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181EECu;
}
