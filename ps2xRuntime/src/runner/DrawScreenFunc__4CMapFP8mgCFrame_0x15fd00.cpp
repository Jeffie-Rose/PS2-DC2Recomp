#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawScreenFunc__4CMapFP8mgCFrame
// Address: 0x15fd00 - 0x15fd94
void DrawScreenFunc__4CMapFP8mgCFrame_0x15fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawScreenFunc__4CMapFP8mgCFrame_0x15fd00");
#endif

    switch (ctx->pc) {
        case 0x15fd00u: goto label_15fd00;
        case 0x15fd04u: goto label_15fd04;
        case 0x15fd08u: goto label_15fd08;
        case 0x15fd0cu: goto label_15fd0c;
        case 0x15fd10u: goto label_15fd10;
        case 0x15fd14u: goto label_15fd14;
        case 0x15fd18u: goto label_15fd18;
        case 0x15fd1cu: goto label_15fd1c;
        case 0x15fd20u: goto label_15fd20;
        case 0x15fd24u: goto label_15fd24;
        case 0x15fd28u: goto label_15fd28;
        case 0x15fd2cu: goto label_15fd2c;
        case 0x15fd30u: goto label_15fd30;
        case 0x15fd34u: goto label_15fd34;
        case 0x15fd38u: goto label_15fd38;
        case 0x15fd3cu: goto label_15fd3c;
        case 0x15fd40u: goto label_15fd40;
        case 0x15fd44u: goto label_15fd44;
        case 0x15fd48u: goto label_15fd48;
        case 0x15fd4cu: goto label_15fd4c;
        case 0x15fd50u: goto label_15fd50;
        case 0x15fd54u: goto label_15fd54;
        case 0x15fd58u: goto label_15fd58;
        case 0x15fd5cu: goto label_15fd5c;
        case 0x15fd60u: goto label_15fd60;
        case 0x15fd64u: goto label_15fd64;
        case 0x15fd68u: goto label_15fd68;
        case 0x15fd6cu: goto label_15fd6c;
        case 0x15fd70u: goto label_15fd70;
        case 0x15fd74u: goto label_15fd74;
        case 0x15fd78u: goto label_15fd78;
        case 0x15fd7cu: goto label_15fd7c;
        case 0x15fd80u: goto label_15fd80;
        case 0x15fd84u: goto label_15fd84;
        case 0x15fd88u: goto label_15fd88;
        case 0x15fd8cu: goto label_15fd8c;
        case 0x15fd90u: goto label_15fd90;
        default: break;
    }

    ctx->pc = 0x15fd00u;

label_15fd00:
    // 0x15fd00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15fd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15fd04:
    // 0x15fd04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15fd08:
    // 0x15fd08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15fd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15fd0c:
    // 0x15fd0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15fd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15fd10:
    // 0x15fd10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15fd10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15fd14:
    // 0x15fd14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15fd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15fd18:
    // 0x15fd18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15fd18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15fd1c:
    // 0x15fd1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15fd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15fd20:
    // 0x15fd20: 0x8c90032c  lw          $s0, 0x32C($a0)
    ctx->pc = 0x15fd20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
label_15fd24:
    // 0x15fd24: 0x10000010  b           . + 4 + (0x10 << 2)
label_15fd28:
    if (ctx->pc == 0x15FD28u) {
        ctx->pc = 0x15FD28u;
            // 0x15fd28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FD2Cu;
        goto label_15fd2c;
    }
    ctx->pc = 0x15FD24u;
    {
        const bool branch_taken_0x15fd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD24u;
            // 0x15fd28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd24) {
            ctx->pc = 0x15FD68u;
            goto label_15fd68;
        }
    }
    ctx->pc = 0x15FD2Cu;
label_15fd2c:
    // 0x15fd2c: 0x82030070  lb          $v1, 0x70($s0)
    ctx->pc = 0x15fd2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_15fd30:
    // 0x15fd30: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x15fd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_15fd34:
    // 0x15fd34: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x15fd34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15fd38:
    // 0x15fd38: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_15fd3c:
    if (ctx->pc == 0x15FD3Cu) {
        ctx->pc = 0x15FD40u;
        goto label_15fd40;
    }
    ctx->pc = 0x15FD38u;
    {
        const bool branch_taken_0x15fd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fd38) {
            ctx->pc = 0x15FD60u;
            goto label_15fd60;
        }
    }
    ctx->pc = 0x15FD40u;
label_15fd40:
    // 0x15fd40: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x15fd40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15fd44:
    // 0x15fd44: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x15fd44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_15fd48:
    // 0x15fd48: 0x320f809  jalr        $t9
label_15fd4c:
    if (ctx->pc == 0x15FD4Cu) {
        ctx->pc = 0x15FD4Cu;
            // 0x15fd4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FD50u;
        goto label_15fd50;
    }
    ctx->pc = 0x15FD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15FD50u);
        ctx->pc = 0x15FD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD48u;
            // 0x15fd4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15FD50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15FD50u; }
            if (ctx->pc != 0x15FD50u) { return; }
        }
        }
    }
    ctx->pc = 0x15FD50u;
label_15fd50:
    // 0x15fd50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15fd54:
    if (ctx->pc == 0x15FD54u) {
        ctx->pc = 0x15FD54u;
            // 0x15fd54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FD58u;
        goto label_15fd58;
    }
    ctx->pc = 0x15FD50u;
    {
        const bool branch_taken_0x15fd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD50u;
            // 0x15fd54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd50) {
            ctx->pc = 0x15FD60u;
            goto label_15fd60;
        }
    }
    ctx->pc = 0x15FD58u;
label_15fd58:
    // 0x15fd58: 0xc059dcc  jal         func_167730
label_15fd5c:
    if (ctx->pc == 0x15FD5Cu) {
        ctx->pc = 0x15FD5Cu;
            // 0x15fd5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FD60u;
        goto label_15fd60;
    }
    ctx->pc = 0x15FD58u;
    SET_GPR_U32(ctx, 31, 0x15FD60u);
    ctx->pc = 0x15FD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD58u;
            // 0x15fd5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167730u;
    if (runtime->hasFunction(0x167730u)) {
        auto targetFn = runtime->lookupFunction(0x167730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD60u; }
        if (ctx->pc != 0x15FD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawScreenFunc__9CMapPartsFP8mgCFrame_0x167730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD60u; }
        if (ctx->pc != 0x15FD60u) { return; }
    }
    ctx->pc = 0x15FD60u;
label_15fd60:
    // 0x15fd60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15fd60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15fd64:
    // 0x15fd64: 0x26100310  addiu       $s0, $s0, 0x310
    ctx->pc = 0x15fd64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_15fd68:
    // 0x15fd68: 0x8e630328  lw          $v1, 0x328($s3)
    ctx->pc = 0x15fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 808)));
label_15fd6c:
    // 0x15fd6c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15fd6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15fd70:
    // 0x15fd70: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_15fd74:
    if (ctx->pc == 0x15FD74u) {
        ctx->pc = 0x15FD78u;
        goto label_15fd78;
    }
    ctx->pc = 0x15FD70u;
    {
        const bool branch_taken_0x15fd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fd70) {
            ctx->pc = 0x15FD2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fd2c;
        }
    }
    ctx->pc = 0x15FD78u;
label_15fd78:
    // 0x15fd78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15fd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15fd7c:
    // 0x15fd7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15fd7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15fd80:
    // 0x15fd80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15fd80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15fd84:
    // 0x15fd84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15fd88:
    // 0x15fd88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15fd88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15fd8c:
    // 0x15fd8c: 0x3e00008  jr          $ra
label_15fd90:
    if (ctx->pc == 0x15FD90u) {
        ctx->pc = 0x15FD90u;
            // 0x15fd90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x15FD94u;
        goto label_fallthrough_0x15fd8c;
    }
    ctx->pc = 0x15FD8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD8Cu;
            // 0x15fd90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15fd8c:
    ctx->pc = 0x15FD94u;
}
