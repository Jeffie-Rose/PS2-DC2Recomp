#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetListID__8CMdsListFPc
// Address: 0x169190 - 0x169234
void GetListID__8CMdsListFPc_0x169190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetListID__8CMdsListFPc_0x169190");
#endif

    switch (ctx->pc) {
        case 0x1691d0u: goto label_1691d0;
        case 0x1691ecu: goto label_1691ec;
        default: break;
    }

    ctx->pc = 0x169190u;

    // 0x169190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x169190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x169194: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x169194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x169198: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x169198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16919c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1691a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1691a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1691a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1691a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1691a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1691a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1691ac: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1691ACu;
    {
        const bool branch_taken_0x1691ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1691B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691ACu;
            // 0x1691b0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691ac) {
            ctx->pc = 0x1691C0u;
            goto label_1691c0;
        }
    }
    ctx->pc = 0x1691B4u;
    // 0x1691b4: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1691b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1691b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1691B8u;
    {
        const bool branch_taken_0x1691b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1691BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691B8u;
            // 0x1691bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691b8) {
            ctx->pc = 0x1691C8u;
            goto label_1691c8;
        }
    }
    ctx->pc = 0x1691C0u;
label_1691c0:
    // 0x1691c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1691C0u;
    {
        const bool branch_taken_0x1691c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1691C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691C0u;
            // 0x1691c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691c0) {
            ctx->pc = 0x169218u;
            goto label_169218;
        }
    }
    ctx->pc = 0x1691C8u;
label_1691c8:
    // 0x1691c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1691C8u;
    {
        const bool branch_taken_0x1691c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1691CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691C8u;
            // 0x1691cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691c8) {
            ctx->pc = 0x169204u;
            goto label_169204;
        }
    }
    ctx->pc = 0x1691D0u;
label_1691d0:
    // 0x1691d0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1691d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1691d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1691d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1691d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1691d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1691dc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1691DCu;
    {
        const bool branch_taken_0x1691dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1691E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691DCu;
            // 0x1691e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691dc) {
            ctx->pc = 0x1691FCu;
            goto label_1691fc;
        }
    }
    ctx->pc = 0x1691E4u;
    // 0x1691e4: 0xc04a2ac  jal         func_128AB0
    ctx->pc = 0x1691E4u;
    SET_GPR_U32(ctx, 31, 0x1691ECu);
    ctx->pc = 0x128AB0u;
    if (runtime->hasFunction(0x128AB0u)) {
        auto targetFn = runtime->lookupFunction(0x128AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1691ECu; }
        if (ctx->pc != 0x1691ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x128ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1691ECu; }
        if (ctx->pc != 0x1691ECu) { return; }
    }
    ctx->pc = 0x1691ECu;
label_1691ec:
    // 0x1691ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1691ECu;
    {
        const bool branch_taken_0x1691ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1691F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691ECu;
            // 0x1691f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691ec) {
            ctx->pc = 0x1691FCu;
            goto label_1691fc;
        }
    }
    ctx->pc = 0x1691F4u;
    // 0x1691f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1691F4u;
    {
        const bool branch_taken_0x1691f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1691F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691F4u;
            // 0x1691f8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691f4) {
            ctx->pc = 0x16921Cu;
            goto label_16921c;
        }
    }
    ctx->pc = 0x1691FCu;
label_1691fc:
    // 0x1691fc: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1691fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x169200: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x169200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_169204:
    // 0x169204: 0x0  nop
    ctx->pc = 0x169204u;
    // NOP
    // 0x169208: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x169208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x16920c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x16920cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x169210: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x169210u;
    {
        const bool branch_taken_0x169210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169210u;
            // 0x169214: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169210) {
            ctx->pc = 0x1691D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1691d0;
        }
    }
    ctx->pc = 0x169218u;
label_169218:
    // 0x169218: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x169218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16921c:
    // 0x16921c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16921cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169220: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x169220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16922c: 0x3e00008  jr          $ra
    ctx->pc = 0x16922Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16922Cu;
            // 0x169230: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169234u;
}
