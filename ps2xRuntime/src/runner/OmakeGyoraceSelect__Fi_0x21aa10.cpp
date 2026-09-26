#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: OmakeGyoraceSelect__Fi
// Address: 0x21aa10 - 0x21aa58
void OmakeGyoraceSelect__Fi_0x21aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OmakeGyoraceSelect__Fi_0x21aa10");
#endif

    switch (ctx->pc) {
        case 0x21aa24u: goto label_21aa24;
        case 0x21aa30u: goto label_21aa30;
        default: break;
    }

    ctx->pc = 0x21aa10u;

    // 0x21aa10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21aa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21aa14: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x21aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21aa18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21aa1c: 0xc08edcc  jal         func_23B730
    ctx->pc = 0x21AA1Cu;
    SET_GPR_U32(ctx, 31, 0x21AA24u);
    ctx->pc = 0x21AA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA1Cu;
            // 0x21aa20: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B730u;
    if (runtime->hasFunction(0x23B730u)) {
        auto targetFn = runtime->lookupFunction(0x23B730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AA24u; }
        if (ctx->pc != 0x21AA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuListSelectKeyCheck__Fii_0x23b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AA24u; }
        if (ctx->pc != 0x21AA24u) { return; }
    }
    ctx->pc = 0x21AA24u;
label_21aa24:
    // 0x21aa24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21aa24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa28: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x21AA28u;
    SET_GPR_U32(ctx, 31, 0x21AA30u);
    ctx->pc = 0x21AA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA28u;
            // 0x21aa2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AA30u; }
        if (ctx->pc != 0x21AA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AA30u; }
        if (ctx->pc != 0x21AA30u) { return; }
    }
    ctx->pc = 0x21AA30u;
label_21aa30:
    // 0x21aa30: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x21aa30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21aa34: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AA34u;
    {
        const bool branch_taken_0x21aa34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA34u;
            // 0x21aa38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa34) {
            ctx->pc = 0x21AA48u;
            goto label_21aa48;
        }
    }
    ctx->pc = 0x21AA3Cu;
    // 0x21aa3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21aa40: 0xaf8292fc  sw          $v0, -0x6D04($gp)
    ctx->pc = 0x21aa40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939388), GPR_U32(ctx, 2));
    // 0x21aa44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21aa44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21aa48:
    // 0x21aa48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21aa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21aa4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21aa4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21aa50: 0x3e00008  jr          $ra
    ctx->pc = 0x21AA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA50u;
            // 0x21aa54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21AA58u;
}
