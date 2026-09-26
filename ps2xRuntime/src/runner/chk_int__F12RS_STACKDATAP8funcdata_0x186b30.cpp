#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: chk_int__F12RS_STACKDATAP8funcdata
// Address: 0x186b30 - 0x186b84
void chk_int__F12RS_STACKDATAP8funcdata_0x186b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chk_int__F12RS_STACKDATAP8funcdata_0x186b30");
#endif

    switch (ctx->pc) {
        case 0x186b6cu: goto label_186b6c;
        case 0x186b74u: goto label_186b74;
        default: break;
    }

    ctx->pc = 0x186b30u;

    // 0x186b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186b38: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x186b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x186b3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x186b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x186b40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x186B40u;
    {
        const bool branch_taken_0x186b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186B40u;
            // 0x186b44: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b40) {
            ctx->pc = 0x186B50u;
            goto label_186b50;
        }
    }
    ctx->pc = 0x186B48u;
    // 0x186b48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x186B48u;
    {
        const bool branch_taken_0x186b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186B48u;
            // 0x186b4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b48) {
            ctx->pc = 0x186B7Cu;
            goto label_186b7c;
        }
    }
    ctx->pc = 0x186B50u;
label_186b50:
    // 0x186b50: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x186b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x186b54: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x186b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x186b58: 0x8c223b84  lw          $v0, 0x3B84($at)
    ctx->pc = 0x186b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15236)));
    // 0x186b5c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x186b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x186b60: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x186b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x186b64: 0xc049612  jal         func_125848
    ctx->pc = 0x186B64u;
    SET_GPR_U32(ctx, 31, 0x186B6Cu);
    ctx->pc = 0x186B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186B64u;
            // 0x186b68: 0x24a54040  addiu       $a1, $a1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125848u;
    if (runtime->hasFunction(0x125848u)) {
        auto targetFn = runtime->lookupFunction(0x125848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B6Cu; }
        if (ctx->pc != 0x186B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fprintf_0x125848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B6Cu; }
        if (ctx->pc != 0x186B6Cu) { return; }
    }
    ctx->pc = 0x186B6Cu;
label_186b6c:
    // 0x186b6c: 0xc04950e  jal         func_125438
    ctx->pc = 0x186B6Cu;
    SET_GPR_U32(ctx, 31, 0x186B74u);
    ctx->pc = 0x186B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186B6Cu;
            // 0x186b70: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B74u; }
        if (ctx->pc != 0x186B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B74u; }
        if (ctx->pc != 0x186B74u) { return; }
    }
    ctx->pc = 0x186B74u;
label_186b74:
    // 0x186b74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x186b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186b7c:
    // 0x186b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x186B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186B7Cu;
            // 0x186b80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186B84u;
}
