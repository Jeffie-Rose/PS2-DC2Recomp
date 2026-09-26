#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ChangeDir__FPc
// Address: 0x1487d0 - 0x14882c
void ChangeDir__FPc_0x1487d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeDir__FPc_0x1487d0");
#endif

    switch (ctx->pc) {
        case 0x1487f4u: goto label_1487f4;
        case 0x14881cu: goto label_14881c;
        default: break;
    }

    ctx->pc = 0x1487d0u;

    // 0x1487d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1487d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1487d4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1487d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1487d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1487d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1487dc: 0x24a54290  addiu       $a1, $a1, 0x4290
    ctx->pc = 0x1487dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17040));
    // 0x1487e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1487e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1487e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1487e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1487e8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1487e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1487ec: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1487ECu;
    SET_GPR_U32(ctx, 31, 0x1487F4u);
    ctx->pc = 0x1487F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1487ECu;
            // 0x1487f0: 0x24844390  addiu       $a0, $a0, 0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487F4u; }
        if (ctx->pc != 0x1487F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487F4u; }
        if (ctx->pc != 0x1487F4u) { return; }
    }
    ctx->pc = 0x1487F4u;
label_1487f4:
    // 0x1487f4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1487F4u;
    {
        const bool branch_taken_0x1487f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1487f4) {
            ctx->pc = 0x14881Cu;
            goto label_14881c;
        }
    }
    ctx->pc = 0x1487FCu;
    // 0x1487fc: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1487fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148800: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x148800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x148804: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x148804u;
    {
        const bool branch_taken_0x148804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x148808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148804u;
            // 0x148808: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148804) {
            ctx->pc = 0x148810u;
            goto label_148810;
        }
    }
    ctx->pc = 0x14880Cu;
    // 0x14880c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14880cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_148810:
    // 0x148810: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148814: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x148814u;
    SET_GPR_U32(ctx, 31, 0x14881Cu);
    ctx->pc = 0x148818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148814u;
            // 0x148818: 0x24844390  addiu       $a0, $a0, 0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14881Cu; }
        if (ctx->pc != 0x14881Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14881Cu; }
        if (ctx->pc != 0x14881Cu) { return; }
    }
    ctx->pc = 0x14881Cu;
label_14881c:
    // 0x14881c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14881cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148824: 0x3e00008  jr          $ra
    ctx->pc = 0x148824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148824u;
            // 0x148828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14882Cu;
}
