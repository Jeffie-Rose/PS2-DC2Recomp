#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchItemByName__FPc
// Address: 0x1965c0 - 0x196630
void SearchItemByName__FPc_0x1965c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchItemByName__FPc_0x1965c0");
#endif

    switch (ctx->pc) {
        case 0x1965d8u: goto label_1965d8;
        case 0x1965e0u: goto label_1965e0;
        case 0x1965fcu: goto label_1965fc;
        default: break;
    }

    ctx->pc = 0x1965c0u;

    // 0x1965c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1965c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1965c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1965c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1965c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1965c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1965cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1965ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1965d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1965d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1965d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1965d8:
    // 0x1965d8: 0xc065708  jal         func_195C20
    ctx->pc = 0x1965D8u;
    SET_GPR_U32(ctx, 31, 0x1965E0u);
    ctx->pc = 0x1965DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1965D8u;
            // 0x1965dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1965E0u; }
        if (ctx->pc != 0x1965E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1965E0u; }
        if (ctx->pc != 0x1965E0u) { return; }
    }
    ctx->pc = 0x1965E0u;
label_1965e0:
    // 0x1965e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1965E0u;
    {
        const bool branch_taken_0x1965e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1965e0) {
            ctx->pc = 0x19660Cu;
            goto label_19660c;
        }
    }
    ctx->pc = 0x1965E8u;
    // 0x1965e8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1965e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1965ec: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1965ECu;
    {
        const bool branch_taken_0x1965ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1965F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1965ECu;
            // 0x1965f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965ec) {
            ctx->pc = 0x19660Cu;
            goto label_19660c;
        }
    }
    ctx->pc = 0x1965F4u;
    // 0x1965f4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1965F4u;
    SET_GPR_U32(ctx, 31, 0x1965FCu);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1965FCu; }
        if (ctx->pc != 0x1965FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1965FCu; }
        if (ctx->pc != 0x1965FCu) { return; }
    }
    ctx->pc = 0x1965FCu;
label_1965fc:
    // 0x1965fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1965FCu;
    {
        const bool branch_taken_0x1965fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1965FCu;
            // 0x196600: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965fc) {
            ctx->pc = 0x19660Cu;
            goto label_19660c;
        }
    }
    ctx->pc = 0x196604u;
    // 0x196604: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x196604u;
    {
        const bool branch_taken_0x196604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196604u;
            // 0x196608: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196604) {
            ctx->pc = 0x196620u;
            goto label_196620;
        }
    }
    ctx->pc = 0x19660Cu;
label_19660c:
    // 0x19660c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19660cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x196610: 0x2a020200  slti        $v0, $s0, 0x200
    ctx->pc = 0x196610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x196614: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x196614u;
    {
        const bool branch_taken_0x196614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196614u;
            // 0x196618: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196614) {
            ctx->pc = 0x1965D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1965d8;
        }
    }
    ctx->pc = 0x19661Cu;
    // 0x19661c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19661cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_196620:
    // 0x196620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196628: 0x3e00008  jr          $ra
    ctx->pc = 0x196628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19662Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196628u;
            // 0x19662c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196630u;
}
