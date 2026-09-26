#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_GET_SHOW__FP12RS_STACKDATAi
// Address: 0x2e41d0 - 0x2e4274
void ps2__CHR_GET_SHOW__FP12RS_STACKDATAi_0x2e41d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_GET_SHOW__FP12RS_STACKDATAi_0x2e41d0");
#endif

    switch (ctx->pc) {
        case 0x2e41d0u: goto label_2e41d0;
        case 0x2e41d4u: goto label_2e41d4;
        case 0x2e41d8u: goto label_2e41d8;
        case 0x2e41dcu: goto label_2e41dc;
        case 0x2e41e0u: goto label_2e41e0;
        case 0x2e41e4u: goto label_2e41e4;
        case 0x2e41e8u: goto label_2e41e8;
        case 0x2e41ecu: goto label_2e41ec;
        case 0x2e41f0u: goto label_2e41f0;
        case 0x2e41f4u: goto label_2e41f4;
        case 0x2e41f8u: goto label_2e41f8;
        case 0x2e41fcu: goto label_2e41fc;
        case 0x2e4200u: goto label_2e4200;
        case 0x2e4204u: goto label_2e4204;
        case 0x2e4208u: goto label_2e4208;
        case 0x2e420cu: goto label_2e420c;
        case 0x2e4210u: goto label_2e4210;
        case 0x2e4214u: goto label_2e4214;
        case 0x2e4218u: goto label_2e4218;
        case 0x2e421cu: goto label_2e421c;
        case 0x2e4220u: goto label_2e4220;
        case 0x2e4224u: goto label_2e4224;
        case 0x2e4228u: goto label_2e4228;
        case 0x2e422cu: goto label_2e422c;
        case 0x2e4230u: goto label_2e4230;
        case 0x2e4234u: goto label_2e4234;
        case 0x2e4238u: goto label_2e4238;
        case 0x2e423cu: goto label_2e423c;
        case 0x2e4240u: goto label_2e4240;
        case 0x2e4244u: goto label_2e4244;
        case 0x2e4248u: goto label_2e4248;
        case 0x2e424cu: goto label_2e424c;
        case 0x2e4250u: goto label_2e4250;
        case 0x2e4254u: goto label_2e4254;
        case 0x2e4258u: goto label_2e4258;
        case 0x2e425cu: goto label_2e425c;
        case 0x2e4260u: goto label_2e4260;
        case 0x2e4264u: goto label_2e4264;
        case 0x2e4268u: goto label_2e4268;
        case 0x2e426cu: goto label_2e426c;
        case 0x2e4270u: goto label_2e4270;
        default: break;
    }

    ctx->pc = 0x2e41d0u;

label_2e41d0:
    // 0x2e41d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e41d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e41d4:
    // 0x2e41d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e41d8:
    // 0x2e41d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e41d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e41dc:
    // 0x2e41dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e41dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e41e0:
    // 0x2e41e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e41e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e41e4:
    // 0x2e41e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e41e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e41e8:
    // 0x2e41e8: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_2e41ec:
    if (ctx->pc == 0x2E41ECu) {
        ctx->pc = 0x2E41ECu;
            // 0x2e41ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E41F0u;
        goto label_2e41f0;
    }
    ctx->pc = 0x2E41E8u;
    {
        const bool branch_taken_0x2e41e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E41ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E41E8u;
            // 0x2e41ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41e8) {
            ctx->pc = 0x2E4204u;
            goto label_2e4204;
        }
    }
    ctx->pc = 0x2E41F0u;
label_2e41f0:
    // 0x2e41f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e41f4:
    // 0x2e41f4: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2e41f8:
    if (ctx->pc == 0x2E41F8u) {
        ctx->pc = 0x2E41F8u;
            // 0x2e41f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E41FCu;
        goto label_2e41fc;
    }
    ctx->pc = 0x2E41F4u;
    {
        const bool branch_taken_0x2e41f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E41F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E41F4u;
            // 0x2e41f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41f4) {
            ctx->pc = 0x2E4204u;
            goto label_2e4204;
        }
    }
    ctx->pc = 0x2E41FCu;
label_2e41fc:
    // 0x2e41fc: 0x10000019  b           . + 4 + (0x19 << 2)
label_2e4200:
    if (ctx->pc == 0x2E4200u) {
        ctx->pc = 0x2E4200u;
            // 0x2e4200: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2E4204u;
        goto label_2e4204;
    }
    ctx->pc = 0x2E41FCu;
    {
        const bool branch_taken_0x2e41fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E41FCu;
            // 0x2e4200: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41fc) {
            ctx->pc = 0x2E4264u;
            goto label_2e4264;
        }
    }
    ctx->pc = 0x2E4204u;
label_2e4204:
    // 0x2e4204: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4208:
    // 0x2e4208: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e4208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e420c:
    // 0x2e420c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2e4210:
    if (ctx->pc == 0x2E4210u) {
        ctx->pc = 0x2E4210u;
            // 0x2e4210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4214u;
        goto label_2e4214;
    }
    ctx->pc = 0x2E420Cu;
    {
        const bool branch_taken_0x2e420c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E420Cu;
            // 0x2e4210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e420c) {
            ctx->pc = 0x2E421Cu;
            goto label_2e421c;
        }
    }
    ctx->pc = 0x2E4214u;
label_2e4214:
    // 0x2e4214: 0x10000012  b           . + 4 + (0x12 << 2)
label_2e4218:
    if (ctx->pc == 0x2E4218u) {
        ctx->pc = 0x2E421Cu;
        goto label_2e421c;
    }
    ctx->pc = 0x2E4214u;
    {
        const bool branch_taken_0x2e4214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4214) {
            ctx->pc = 0x2E4260u;
            goto label_2e4260;
        }
    }
    ctx->pc = 0x2E421Cu;
label_2e421c:
    // 0x2e421c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e421cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4220:
    // 0x2e4220: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x2e4220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_2e4224:
    // 0x2e4224: 0x320f809  jalr        $t9
label_2e4228:
    if (ctx->pc == 0x2E4228u) {
        ctx->pc = 0x2E422Cu;
        goto label_2e422c;
    }
    ctx->pc = 0x2E4224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E422Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E422Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E422Cu; }
            if (ctx->pc != 0x2E422Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E422Cu;
label_2e422c:
    // 0x2e422c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e422cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e4230:
    // 0x2e4230: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e4230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4234:
    // 0x2e4234: 0xc0b8cd4  jal         func_2E3350
label_2e4238:
    if (ctx->pc == 0x2E4238u) {
        ctx->pc = 0x2E4238u;
            // 0x2e4238: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E423Cu;
        goto label_2e423c;
    }
    ctx->pc = 0x2E4234u;
    SET_GPR_U32(ctx, 31, 0x2E423Cu);
    ctx->pc = 0x2E4238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4234u;
            // 0x2e4238: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E423Cu; }
        if (ctx->pc != 0x2E423Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E423Cu; }
        if (ctx->pc != 0x2E423Cu) { return; }
    }
    ctx->pc = 0x2E423Cu;
label_2e423c:
    // 0x2e423c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e423cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e4240:
    // 0x2e4240: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_2e4244:
    if (ctx->pc == 0x2E4244u) {
        ctx->pc = 0x2E4244u;
            // 0x2e4244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2E4248u;
        goto label_2e4248;
    }
    ctx->pc = 0x2E4240u;
    {
        const bool branch_taken_0x2e4240 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E4244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4240u;
            // 0x2e4244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4240) {
            ctx->pc = 0x2E4260u;
            goto label_2e4260;
        }
    }
    ctx->pc = 0x2E4248u;
label_2e4248:
    // 0x2e4248: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e424c:
    // 0x2e424c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4250:
    // 0x2e4250: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x2e4250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2e4254:
    // 0x2e4254: 0xc0b8cd4  jal         func_2E3350
label_2e4258:
    if (ctx->pc == 0x2E4258u) {
        ctx->pc = 0x2E4258u;
            // 0x2e4258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E425Cu;
        goto label_2e425c;
    }
    ctx->pc = 0x2E4254u;
    SET_GPR_U32(ctx, 31, 0x2E425Cu);
    ctx->pc = 0x2E4258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4254u;
            // 0x2e4258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E425Cu; }
        if (ctx->pc != 0x2E425Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E425Cu; }
        if (ctx->pc != 0x2E425Cu) { return; }
    }
    ctx->pc = 0x2E425Cu;
label_2e425c:
    // 0x2e425c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4260:
    // 0x2e4260: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e4260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e4264:
    // 0x2e4264: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4268:
    // 0x2e4268: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e426c:
    // 0x2e426c: 0x3e00008  jr          $ra
label_2e4270:
    if (ctx->pc == 0x2E4270u) {
        ctx->pc = 0x2E4270u;
            // 0x2e4270: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E4274u;
        goto label_fallthrough_0x2e426c;
    }
    ctx->pc = 0x2E426Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E426Cu;
            // 0x2e4270: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e426c:
    ctx->pc = 0x2E4274u;
}
