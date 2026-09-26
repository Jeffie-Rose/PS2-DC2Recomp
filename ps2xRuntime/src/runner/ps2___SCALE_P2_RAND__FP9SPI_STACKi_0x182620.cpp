#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __SCALE_P2_RAND__FP9SPI_STACKi
// Address: 0x182620 - 0x182688
void ps2___SCALE_P2_RAND__FP9SPI_STACKi_0x182620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___SCALE_P2_RAND__FP9SPI_STACKi_0x182620");
#endif

    switch (ctx->pc) {
        case 0x182634u: goto label_182634;
        case 0x182648u: goto label_182648;
        case 0x18265cu: goto label_18265c;
        case 0x18266cu: goto label_18266c;
        default: break;
    }

    ctx->pc = 0x182620u;

    // 0x182620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18262c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x18262Cu;
    SET_GPR_U32(ctx, 31, 0x182634u);
    ctx->pc = 0x182630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18262Cu;
            // 0x182630: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182634u; }
        if (ctx->pc != 0x182634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182634u; }
        if (ctx->pc != 0x182634u) { return; }
    }
    ctx->pc = 0x182634u;
label_182634:
    // 0x182634: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18263c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x18263cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182640: 0xc05190c  jal         func_146430
    ctx->pc = 0x182640u;
    SET_GPR_U32(ctx, 31, 0x182648u);
    ctx->pc = 0x182644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182640u;
            // 0x182644: 0xac6201cc  sw          $v0, 0x1CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182648u; }
        if (ctx->pc != 0x182648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182648u; }
        if (ctx->pc != 0x182648u) { return; }
    }
    ctx->pc = 0x182648u;
label_182648:
    // 0x182648: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18264c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18264cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182650: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x182650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182654: 0xc05190c  jal         func_146430
    ctx->pc = 0x182654u;
    SET_GPR_U32(ctx, 31, 0x18265Cu);
    ctx->pc = 0x182658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182654u;
            // 0x182658: 0xe4400200  swc1        $f0, 0x200($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 512), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18265Cu; }
        if (ctx->pc != 0x18265Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18265Cu; }
        if (ctx->pc != 0x18265Cu) { return; }
    }
    ctx->pc = 0x18265Cu;
label_18265c:
    // 0x18265c: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x18265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182664: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x182664u;
    SET_GPR_U32(ctx, 31, 0x18266Cu);
    ctx->pc = 0x182668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182664u;
            // 0x182668: 0xe4400204  swc1        $f0, 0x204($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 516), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18266Cu; }
        if (ctx->pc != 0x18266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18266Cu; }
        if (ctx->pc != 0x18266Cu) { return; }
    }
    ctx->pc = 0x18266Cu;
label_18266c:
    // 0x18266c: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x18266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182670: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x182670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
    // 0x182674: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18267c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18267cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182680: 0x3e00008  jr          $ra
    ctx->pc = 0x182680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182680u;
            // 0x182684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182688u;
}
