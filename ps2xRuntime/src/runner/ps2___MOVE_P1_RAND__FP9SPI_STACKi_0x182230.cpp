#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __MOVE_P1_RAND__FP9SPI_STACKi
// Address: 0x182230 - 0x1822ac
void ps2___MOVE_P1_RAND__FP9SPI_STACKi_0x182230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___MOVE_P1_RAND__FP9SPI_STACKi_0x182230");
#endif

    switch (ctx->pc) {
        case 0x182244u: goto label_182244;
        case 0x182258u: goto label_182258;
        case 0x18226cu: goto label_18226c;
        case 0x182280u: goto label_182280;
        case 0x182290u: goto label_182290;
        default: break;
    }

    ctx->pc = 0x182230u;

    // 0x182230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18223c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x18223Cu;
    SET_GPR_U32(ctx, 31, 0x182244u);
    ctx->pc = 0x182240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18223Cu;
            // 0x182240: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182244u; }
        if (ctx->pc != 0x182244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182244u; }
        if (ctx->pc != 0x182244u) { return; }
    }
    ctx->pc = 0x182244u;
label_182244:
    // 0x182244: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18224c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x18224cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182250: 0xc05190c  jal         func_146430
    ctx->pc = 0x182250u;
    SET_GPR_U32(ctx, 31, 0x182258u);
    ctx->pc = 0x182254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182250u;
            // 0x182254: 0xac620118  sw          $v0, 0x118($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182258u; }
        if (ctx->pc != 0x182258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182258u; }
        if (ctx->pc != 0x182258u) { return; }
    }
    ctx->pc = 0x182258u;
label_182258:
    // 0x182258: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18225c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18225cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182260: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x182260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182264: 0xc05190c  jal         func_146430
    ctx->pc = 0x182264u;
    SET_GPR_U32(ctx, 31, 0x18226Cu);
    ctx->pc = 0x182268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182264u;
            // 0x182268: 0xe4400140  swc1        $f0, 0x140($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18226Cu; }
        if (ctx->pc != 0x18226Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18226Cu; }
        if (ctx->pc != 0x18226Cu) { return; }
    }
    ctx->pc = 0x18226Cu;
label_18226c:
    // 0x18226c: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x18226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182274: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x182274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182278: 0xc05190c  jal         func_146430
    ctx->pc = 0x182278u;
    SET_GPR_U32(ctx, 31, 0x182280u);
    ctx->pc = 0x18227Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182278u;
            // 0x18227c: 0xe4400144  swc1        $f0, 0x144($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182280u; }
        if (ctx->pc != 0x182280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182280u; }
        if (ctx->pc != 0x182280u) { return; }
    }
    ctx->pc = 0x182280u;
label_182280:
    // 0x182280: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182288: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x182288u;
    SET_GPR_U32(ctx, 31, 0x182290u);
    ctx->pc = 0x18228Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182288u;
            // 0x18228c: 0xe4400148  swc1        $f0, 0x148($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182290u; }
        if (ctx->pc != 0x182290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182290u; }
        if (ctx->pc != 0x182290u) { return; }
    }
    ctx->pc = 0x182290u;
label_182290:
    // 0x182290: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182294: 0xac620168  sw          $v0, 0x168($v1)
    ctx->pc = 0x182294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 360), GPR_U32(ctx, 2));
    // 0x182298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18229c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1822a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1822a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1822a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1822A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1822A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1822A4u;
            // 0x1822a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1822ACu;
}
