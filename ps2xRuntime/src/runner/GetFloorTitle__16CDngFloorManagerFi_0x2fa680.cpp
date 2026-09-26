#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFloorTitle__16CDngFloorManagerFi
// Address: 0x2fa680 - 0x2fa708
void GetFloorTitle__16CDngFloorManagerFi_0x2fa680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFloorTitle__16CDngFloorManagerFi_0x2fa680");
#endif

    switch (ctx->pc) {
        case 0x2fa69cu: goto label_2fa69c;
        default: break;
    }

    ctx->pc = 0x2fa680u;

    // 0x2fa680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fa680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fa684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fa684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fa688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fa688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fa68c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fa68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fa690: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fa690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa694: 0xc0be768  jal         func_2F9DA0
    ctx->pc = 0x2FA694u;
    SET_GPR_U32(ctx, 31, 0x2FA69Cu);
    ctx->pc = 0x2FA698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA694u;
            // 0x2fa698: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DA0u;
    if (runtime->hasFunction(0x2F9DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F9DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA69Cu; }
        if (ctx->pc != 0x2FA69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA69Cu; }
        if (ctx->pc != 0x2FA69Cu) { return; }
    }
    ctx->pc = 0x2FA69Cu;
label_2fa69c:
    // 0x2fa69c: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2fa69cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fa6a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fa6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa6a4: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FA6A4u;
    {
        const bool branch_taken_0x2fa6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FA6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA6A4u;
            // 0x2fa6a8: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa6a4) {
            ctx->pc = 0x2FA6DCu;
            goto label_2fa6dc;
        }
    }
    ctx->pc = 0x2FA6ACu;
    // 0x2fa6ac: 0x1603000b  bne         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FA6ACu;
    {
        const bool branch_taken_0x2fa6ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fa6ac) {
            ctx->pc = 0x2FA6DCu;
            goto label_2fa6dc;
        }
    }
    ctx->pc = 0x2FA6B4u;
    // 0x2fa6b4: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x2fa6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2fa6b8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2fa6b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fa6bc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA6BCu;
    {
        const bool branch_taken_0x2fa6bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA6BCu;
            // 0x2fa6c0: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa6bc) {
            ctx->pc = 0x2FA6CCu;
            goto label_2fa6cc;
        }
    }
    ctx->pc = 0x2FA6C4u;
    // 0x2fa6c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fa6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa6c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2fa6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2fa6cc:
    // 0x2fa6cc: 0x278285e0  addiu       $v0, $gp, -0x7A20
    ctx->pc = 0x2fa6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936032));
    // 0x2fa6d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fa6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fa6d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA6D4u;
    {
        const bool branch_taken_0x2fa6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA6D4u;
            // 0x2fa6d8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa6d4) {
            ctx->pc = 0x2FA6F4u;
            goto label_2fa6f4;
        }
    }
    ctx->pc = 0x2FA6DCu;
label_2fa6dc:
    // 0x2fa6dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA6DCu;
    {
        const bool branch_taken_0x2fa6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa6dc) {
            ctx->pc = 0x2FA6ECu;
            goto label_2fa6ec;
        }
    }
    ctx->pc = 0x2FA6E4u;
    // 0x2fa6e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA6E4u;
    {
        const bool branch_taken_0x2fa6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA6E4u;
            // 0x2fa6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa6e4) {
            ctx->pc = 0x2FA6F4u;
            goto label_2fa6f4;
        }
    }
    ctx->pc = 0x2FA6ECu;
label_2fa6ec:
    // 0x2fa6ec: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2fa6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fa6f0: 0x0  nop
    ctx->pc = 0x2fa6f0u;
    // NOP
label_2fa6f4:
    // 0x2fa6f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fa6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa6f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fa6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa6fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fa6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa700: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA700u;
            // 0x2fa704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FA708u;
}
