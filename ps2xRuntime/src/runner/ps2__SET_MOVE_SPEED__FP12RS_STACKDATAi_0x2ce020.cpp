#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MOVE_SPEED__FP12RS_STACKDATAi
// Address: 0x2ce020 - 0x2ce078
void ps2__SET_MOVE_SPEED__FP12RS_STACKDATAi_0x2ce020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MOVE_SPEED__FP12RS_STACKDATAi_0x2ce020");
#endif

    switch (ctx->pc) {
        case 0x2ce040u: goto label_2ce040;
        default: break;
    }

    ctx->pc = 0x2ce020u;

    // 0x2ce020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce028: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE028u;
    {
        const bool branch_taken_0x2ce028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE028u;
            // 0x2ce02c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce028) {
            ctx->pc = 0x2CE038u;
            goto label_2ce038;
        }
    }
    ctx->pc = 0x2CE030u;
    // 0x2ce030: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2CE030u;
    {
        const bool branch_taken_0x2ce030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE030u;
            // 0x2ce034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce030) {
            ctx->pc = 0x2CE06Cu;
            goto label_2ce06c;
        }
    }
    ctx->pc = 0x2CE038u;
label_2ce038:
    // 0x2ce038: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2CE038u;
    SET_GPR_U32(ctx, 31, 0x2CE040u);
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE040u; }
        if (ctx->pc != 0x2CE040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE040u; }
        if (ctx->pc != 0x2CE040u) { return; }
    }
    ctx->pc = 0x2CE040u;
label_2ce040:
    // 0x2ce040: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ce040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce044: 0x0  nop
    ctx->pc = 0x2ce044u;
    // NOP
    // 0x2ce048: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ce048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce04c: 0x0  nop
    ctx->pc = 0x2ce04cu;
    // NOP
    // 0x2ce050: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE050u;
    {
        const bool branch_taken_0x2ce050 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE050u;
            // 0x2ce054: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce050) {
            ctx->pc = 0x2CE060u;
            goto label_2ce060;
        }
    }
    ctx->pc = 0x2CE058u;
    // 0x2ce058: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2ce058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2ce05c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ce05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ce060:
    // 0x2ce060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce064: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2ce064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2ce068: 0xe4600794  swc1        $f0, 0x794($v1)
    ctx->pc = 0x2ce068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1940), bits); }
label_2ce06c:
    // 0x2ce06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce070: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE070u;
            // 0x2ce074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE078u;
}
