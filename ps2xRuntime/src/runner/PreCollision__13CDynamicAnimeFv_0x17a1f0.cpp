#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PreCollision__13CDynamicAnimeFv
// Address: 0x17a1f0 - 0x17a294
void PreCollision__13CDynamicAnimeFv_0x17a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PreCollision__13CDynamicAnimeFv_0x17a1f0");
#endif

    switch (ctx->pc) {
        case 0x17a218u: goto label_17a218;
        case 0x17a238u: goto label_17a238;
        case 0x17a250u: goto label_17a250;
        case 0x17a25cu: goto label_17a25c;
        default: break;
    }

    ctx->pc = 0x17a1f0u;

    // 0x17a1f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17a1f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17a1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17a1f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17a1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17a1fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a204: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17a204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a20c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a20cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a210: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17A210u;
    {
        const bool branch_taken_0x17a210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A210u;
            // 0x17a214: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a210) {
            ctx->pc = 0x17A268u;
            goto label_17a268;
        }
    }
    ctx->pc = 0x17A218u;
label_17a218:
    // 0x17a218: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x17a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x17a21c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17a220: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x17a220u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17a224: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x17A224u;
    {
        const bool branch_taken_0x17a224 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a224) {
            ctx->pc = 0x17A25Cu;
            goto label_17a25c;
        }
    }
    ctx->pc = 0x17A22Cu;
    // 0x17a22c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x17a22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17a230: 0xc05ea3c  jal         func_17A8F0
    ctx->pc = 0x17A230u;
    SET_GPR_U32(ctx, 31, 0x17A238u);
    ctx->pc = 0x17A234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A230u;
            // 0x17a234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A8F0u;
    if (runtime->hasFunction(0x17A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x17A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A238u; }
        if (ctx->pc != 0x17A238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__13CDynamicAnimeFi_0x17a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A238u; }
        if (ctx->pc != 0x17A238u) { return; }
    }
    ctx->pc = 0x17A238u;
label_17a238:
    // 0x17a238: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x17a238u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    // 0x17a23c: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x17a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x17a240: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A240u;
    {
        const bool branch_taken_0x17a240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A240u;
            // 0x17a244: 0x26650040  addiu       $a1, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a240) {
            ctx->pc = 0x17A25Cu;
            goto label_17a25c;
        }
    }
    ctx->pc = 0x17A248u;
    // 0x17a248: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x17A248u;
    SET_GPR_U32(ctx, 31, 0x17A250u);
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A250u; }
        if (ctx->pc != 0x17A250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A250u; }
        if (ctx->pc != 0x17A250u) { return; }
    }
    ctx->pc = 0x17A250u;
label_17a250:
    // 0x17a250: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x17a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x17a254: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x17A254u;
    SET_GPR_U32(ctx, 31, 0x17A25Cu);
    ctx->pc = 0x17A258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A254u;
            // 0x17a258: 0x26650040  addiu       $a1, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A25Cu; }
        if (ctx->pc != 0x17A25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A25Cu; }
        if (ctx->pc != 0x17A25Cu) { return; }
    }
    ctx->pc = 0x17A25Cu;
label_17a25c:
    // 0x17a25c: 0x0  nop
    ctx->pc = 0x17a25cu;
    // NOP
    // 0x17a260: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17a260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17a264: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17a264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17a268:
    // 0x17a268: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x17a268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x17a26c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x17a26cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17a270: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x17A270u;
    {
        const bool branch_taken_0x17a270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a270) {
            ctx->pc = 0x17A218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a218;
        }
    }
    ctx->pc = 0x17A278u;
    // 0x17a278: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17a278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a27c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17a27cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a280: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a28c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A28Cu;
            // 0x17a290: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A294u;
}
