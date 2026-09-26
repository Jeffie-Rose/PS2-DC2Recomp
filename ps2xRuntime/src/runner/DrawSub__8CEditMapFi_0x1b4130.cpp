#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSub__8CEditMapFi
// Address: 0x1b4130 - 0x1b43b4
void DrawSub__8CEditMapFi_0x1b4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSub__8CEditMapFi_0x1b4130");
#endif

    switch (ctx->pc) {
        case 0x1b4130u: goto label_1b4130;
        case 0x1b4134u: goto label_1b4134;
        case 0x1b4138u: goto label_1b4138;
        case 0x1b413cu: goto label_1b413c;
        case 0x1b4140u: goto label_1b4140;
        case 0x1b4144u: goto label_1b4144;
        case 0x1b4148u: goto label_1b4148;
        case 0x1b414cu: goto label_1b414c;
        case 0x1b4150u: goto label_1b4150;
        case 0x1b4154u: goto label_1b4154;
        case 0x1b4158u: goto label_1b4158;
        case 0x1b415cu: goto label_1b415c;
        case 0x1b4160u: goto label_1b4160;
        case 0x1b4164u: goto label_1b4164;
        case 0x1b4168u: goto label_1b4168;
        case 0x1b416cu: goto label_1b416c;
        case 0x1b4170u: goto label_1b4170;
        case 0x1b4174u: goto label_1b4174;
        case 0x1b4178u: goto label_1b4178;
        case 0x1b417cu: goto label_1b417c;
        case 0x1b4180u: goto label_1b4180;
        case 0x1b4184u: goto label_1b4184;
        case 0x1b4188u: goto label_1b4188;
        case 0x1b418cu: goto label_1b418c;
        case 0x1b4190u: goto label_1b4190;
        case 0x1b4194u: goto label_1b4194;
        case 0x1b4198u: goto label_1b4198;
        case 0x1b419cu: goto label_1b419c;
        case 0x1b41a0u: goto label_1b41a0;
        case 0x1b41a4u: goto label_1b41a4;
        case 0x1b41a8u: goto label_1b41a8;
        case 0x1b41acu: goto label_1b41ac;
        case 0x1b41b0u: goto label_1b41b0;
        case 0x1b41b4u: goto label_1b41b4;
        case 0x1b41b8u: goto label_1b41b8;
        case 0x1b41bcu: goto label_1b41bc;
        case 0x1b41c0u: goto label_1b41c0;
        case 0x1b41c4u: goto label_1b41c4;
        case 0x1b41c8u: goto label_1b41c8;
        case 0x1b41ccu: goto label_1b41cc;
        case 0x1b41d0u: goto label_1b41d0;
        case 0x1b41d4u: goto label_1b41d4;
        case 0x1b41d8u: goto label_1b41d8;
        case 0x1b41dcu: goto label_1b41dc;
        case 0x1b41e0u: goto label_1b41e0;
        case 0x1b41e4u: goto label_1b41e4;
        case 0x1b41e8u: goto label_1b41e8;
        case 0x1b41ecu: goto label_1b41ec;
        case 0x1b41f0u: goto label_1b41f0;
        case 0x1b41f4u: goto label_1b41f4;
        case 0x1b41f8u: goto label_1b41f8;
        case 0x1b41fcu: goto label_1b41fc;
        case 0x1b4200u: goto label_1b4200;
        case 0x1b4204u: goto label_1b4204;
        case 0x1b4208u: goto label_1b4208;
        case 0x1b420cu: goto label_1b420c;
        case 0x1b4210u: goto label_1b4210;
        case 0x1b4214u: goto label_1b4214;
        case 0x1b4218u: goto label_1b4218;
        case 0x1b421cu: goto label_1b421c;
        case 0x1b4220u: goto label_1b4220;
        case 0x1b4224u: goto label_1b4224;
        case 0x1b4228u: goto label_1b4228;
        case 0x1b422cu: goto label_1b422c;
        case 0x1b4230u: goto label_1b4230;
        case 0x1b4234u: goto label_1b4234;
        case 0x1b4238u: goto label_1b4238;
        case 0x1b423cu: goto label_1b423c;
        case 0x1b4240u: goto label_1b4240;
        case 0x1b4244u: goto label_1b4244;
        case 0x1b4248u: goto label_1b4248;
        case 0x1b424cu: goto label_1b424c;
        case 0x1b4250u: goto label_1b4250;
        case 0x1b4254u: goto label_1b4254;
        case 0x1b4258u: goto label_1b4258;
        case 0x1b425cu: goto label_1b425c;
        case 0x1b4260u: goto label_1b4260;
        case 0x1b4264u: goto label_1b4264;
        case 0x1b4268u: goto label_1b4268;
        case 0x1b426cu: goto label_1b426c;
        case 0x1b4270u: goto label_1b4270;
        case 0x1b4274u: goto label_1b4274;
        case 0x1b4278u: goto label_1b4278;
        case 0x1b427cu: goto label_1b427c;
        case 0x1b4280u: goto label_1b4280;
        case 0x1b4284u: goto label_1b4284;
        case 0x1b4288u: goto label_1b4288;
        case 0x1b428cu: goto label_1b428c;
        case 0x1b4290u: goto label_1b4290;
        case 0x1b4294u: goto label_1b4294;
        case 0x1b4298u: goto label_1b4298;
        case 0x1b429cu: goto label_1b429c;
        case 0x1b42a0u: goto label_1b42a0;
        case 0x1b42a4u: goto label_1b42a4;
        case 0x1b42a8u: goto label_1b42a8;
        case 0x1b42acu: goto label_1b42ac;
        case 0x1b42b0u: goto label_1b42b0;
        case 0x1b42b4u: goto label_1b42b4;
        case 0x1b42b8u: goto label_1b42b8;
        case 0x1b42bcu: goto label_1b42bc;
        case 0x1b42c0u: goto label_1b42c0;
        case 0x1b42c4u: goto label_1b42c4;
        case 0x1b42c8u: goto label_1b42c8;
        case 0x1b42ccu: goto label_1b42cc;
        case 0x1b42d0u: goto label_1b42d0;
        case 0x1b42d4u: goto label_1b42d4;
        case 0x1b42d8u: goto label_1b42d8;
        case 0x1b42dcu: goto label_1b42dc;
        case 0x1b42e0u: goto label_1b42e0;
        case 0x1b42e4u: goto label_1b42e4;
        case 0x1b42e8u: goto label_1b42e8;
        case 0x1b42ecu: goto label_1b42ec;
        case 0x1b42f0u: goto label_1b42f0;
        case 0x1b42f4u: goto label_1b42f4;
        case 0x1b42f8u: goto label_1b42f8;
        case 0x1b42fcu: goto label_1b42fc;
        case 0x1b4300u: goto label_1b4300;
        case 0x1b4304u: goto label_1b4304;
        case 0x1b4308u: goto label_1b4308;
        case 0x1b430cu: goto label_1b430c;
        case 0x1b4310u: goto label_1b4310;
        case 0x1b4314u: goto label_1b4314;
        case 0x1b4318u: goto label_1b4318;
        case 0x1b431cu: goto label_1b431c;
        case 0x1b4320u: goto label_1b4320;
        case 0x1b4324u: goto label_1b4324;
        case 0x1b4328u: goto label_1b4328;
        case 0x1b432cu: goto label_1b432c;
        case 0x1b4330u: goto label_1b4330;
        case 0x1b4334u: goto label_1b4334;
        case 0x1b4338u: goto label_1b4338;
        case 0x1b433cu: goto label_1b433c;
        case 0x1b4340u: goto label_1b4340;
        case 0x1b4344u: goto label_1b4344;
        case 0x1b4348u: goto label_1b4348;
        case 0x1b434cu: goto label_1b434c;
        case 0x1b4350u: goto label_1b4350;
        case 0x1b4354u: goto label_1b4354;
        case 0x1b4358u: goto label_1b4358;
        case 0x1b435cu: goto label_1b435c;
        case 0x1b4360u: goto label_1b4360;
        case 0x1b4364u: goto label_1b4364;
        case 0x1b4368u: goto label_1b4368;
        case 0x1b436cu: goto label_1b436c;
        case 0x1b4370u: goto label_1b4370;
        case 0x1b4374u: goto label_1b4374;
        case 0x1b4378u: goto label_1b4378;
        case 0x1b437cu: goto label_1b437c;
        case 0x1b4380u: goto label_1b4380;
        case 0x1b4384u: goto label_1b4384;
        case 0x1b4388u: goto label_1b4388;
        case 0x1b438cu: goto label_1b438c;
        case 0x1b4390u: goto label_1b4390;
        case 0x1b4394u: goto label_1b4394;
        case 0x1b4398u: goto label_1b4398;
        case 0x1b439cu: goto label_1b439c;
        case 0x1b43a0u: goto label_1b43a0;
        case 0x1b43a4u: goto label_1b43a4;
        case 0x1b43a8u: goto label_1b43a8;
        case 0x1b43acu: goto label_1b43ac;
        case 0x1b43b0u: goto label_1b43b0;
        default: break;
    }

    ctx->pc = 0x1b4130u;

label_1b4130:
    // 0x1b4130: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1b4134:
    // 0x1b4134: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b4134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b4138:
    // 0x1b4138: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b4138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b413c:
    // 0x1b413c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b413cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b4140:
    // 0x1b4140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b4140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b4144:
    // 0x1b4144: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b4148:
    // 0x1b4148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b414c:
    // 0x1b414c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b414cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4150:
    // 0x1b4150: 0x8c821050  lw          $v0, 0x1050($a0)
    ctx->pc = 0x1b4150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4176)));
label_1b4154:
    // 0x1b4154: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1b4158:
    if (ctx->pc == 0x1B4158u) {
        ctx->pc = 0x1B4158u;
            // 0x1b4158: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B415Cu;
        goto label_1b415c;
    }
    ctx->pc = 0x1B4154u;
    {
        const bool branch_taken_0x1b4154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4154u;
            // 0x1b4158: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4154) {
            ctx->pc = 0x1B41A4u;
            goto label_1b41a4;
        }
    }
    ctx->pc = 0x1B415Cu;
label_1b415c:
    // 0x1b415c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b415cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4160:
    // 0x1b4160: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b4160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4164:
    // 0x1b4164: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b4164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4168:
    // 0x1b4168: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1b4168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1b416c:
    // 0x1b416c: 0x8c441054  lw          $a0, 0x1054($v0)
    ctx->pc = 0x1b416cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4180)));
label_1b4170:
    // 0x1b4170: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1b4174:
    if (ctx->pc == 0x1B4174u) {
        ctx->pc = 0x1B4178u;
        goto label_1b4178;
    }
    ctx->pc = 0x1B4170u;
    {
        const bool branch_taken_0x1b4170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4170) {
            ctx->pc = 0x1B418Cu;
            goto label_1b418c;
        }
    }
    ctx->pc = 0x1B4178u;
label_1b4178:
    // 0x1b4178: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b4178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b417c:
    // 0x1b417c: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x1b417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_1b4180:
    // 0x1b4180: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1b4180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1b4184:
    // 0x1b4184: 0x320f809  jalr        $t9
label_1b4188:
    if (ctx->pc == 0x1B4188u) {
        ctx->pc = 0x1B4188u;
            // 0x1b4188: 0x244510b0  addiu       $a1, $v0, 0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
        ctx->pc = 0x1B418Cu;
        goto label_1b418c;
    }
    ctx->pc = 0x1B4184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B418Cu);
        ctx->pc = 0x1B4188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4184u;
            // 0x1b4188: 0x244510b0  addiu       $a1, $v0, 0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B418Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B418Cu; }
            if (ctx->pc != 0x1B418Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B418Cu;
label_1b418c:
    // 0x1b418c: 0x0  nop
    ctx->pc = 0x1b418cu;
    // NOP
label_1b4190:
    // 0x1b4190: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b4190u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b4194:
    // 0x1b4194: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1b4194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_1b4198:
    // 0x1b4198: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1b4198u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1b419c:
    // 0x1b419c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1b41a0:
    if (ctx->pc == 0x1B41A0u) {
        ctx->pc = 0x1B41A0u;
            // 0x1b41a0: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x1B41A4u;
        goto label_1b41a4;
    }
    ctx->pc = 0x1B419Cu;
    {
        const bool branch_taken_0x1b419c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B41A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B419Cu;
            // 0x1b41a0: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b419c) {
            ctx->pc = 0x1B4168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b4168;
        }
    }
    ctx->pc = 0x1B41A4u;
label_1b41a4:
    // 0x1b41a4: 0x0  nop
    ctx->pc = 0x1b41a4u;
    // NOP
label_1b41a8:
    // 0x1b41a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b41a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b41ac:
    // 0x1b41ac: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x1b41acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1b41b0:
    // 0x1b41b0: 0xc0575cc  jal         func_15D730
label_1b41b4:
    if (ctx->pc == 0x1B41B4u) {
        ctx->pc = 0x1B41B4u;
            // 0x1b41b4: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x1B41B8u;
        goto label_1b41b8;
    }
    ctx->pc = 0x1B41B0u;
    SET_GPR_U32(ctx, 31, 0x1B41B8u);
    ctx->pc = 0x1B41B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41B0u;
            // 0x1b41b4: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41B8u; }
        if (ctx->pc != 0x1B41B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41B8u; }
        if (ctx->pc != 0x1B41B8u) { return; }
    }
    ctx->pc = 0x1B41B8u;
label_1b41b8:
    // 0x1b41b8: 0x8e320d44  lw          $s2, 0xD44($s1)
    ctx->pc = 0x1b41b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3396)));
label_1b41bc:
    // 0x1b41bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b41bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b41c0:
    // 0x1b41c0: 0x10000059  b           . + 4 + (0x59 << 2)
label_1b41c4:
    if (ctx->pc == 0x1B41C4u) {
        ctx->pc = 0x1B41C4u;
            // 0x1b41c4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B41C8u;
        goto label_1b41c8;
    }
    ctx->pc = 0x1B41C0u;
    {
        const bool branch_taken_0x1b41c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41C0u;
            // 0x1b41c4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41c0) {
            ctx->pc = 0x1B4328u;
            goto label_1b4328;
        }
    }
    ctx->pc = 0x1B41C8u;
label_1b41c8:
    // 0x1b41c8: 0x82420070  lb          $v0, 0x70($s2)
    ctx->pc = 0x1b41c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
label_1b41cc:
    // 0x1b41cc: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1b41ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1b41d0:
    // 0x1b41d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b41d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b41d4:
    // 0x1b41d4: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
label_1b41d8:
    if (ctx->pc == 0x1B41D8u) {
        ctx->pc = 0x1B41DCu;
        goto label_1b41dc;
    }
    ctx->pc = 0x1B41D4u;
    {
        const bool branch_taken_0x1b41d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b41d4) {
            ctx->pc = 0x1B431Cu;
            goto label_1b431c;
        }
    }
    ctx->pc = 0x1B41DCu;
label_1b41dc:
    // 0x1b41dc: 0x8e430310  lw          $v1, 0x310($s2)
    ctx->pc = 0x1b41dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 784)));
label_1b41e0:
    // 0x1b41e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b41e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b41e4:
    // 0x1b41e4: 0x1462004d  bne         $v1, $v0, . + 4 + (0x4D << 2)
label_1b41e8:
    if (ctx->pc == 0x1B41E8u) {
        ctx->pc = 0x1B41E8u;
            // 0x1b41e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B41ECu;
        goto label_1b41ec;
    }
    ctx->pc = 0x1B41E4u;
    {
        const bool branch_taken_0x1b41e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B41E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41E4u;
            // 0x1b41e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41e4) {
            ctx->pc = 0x1B431Cu;
            goto label_1b431c;
        }
    }
    ctx->pc = 0x1B41ECu;
label_1b41ec:
    // 0x1b41ec: 0xc059e98  jal         func_167A60
label_1b41f0:
    if (ctx->pc == 0x1B41F0u) {
        ctx->pc = 0x1B41F0u;
            // 0x1b41f0: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->pc = 0x1B41F4u;
        goto label_1b41f4;
    }
    ctx->pc = 0x1B41ECu;
    SET_GPR_U32(ctx, 31, 0x1B41F4u);
    ctx->pc = 0x1B41F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41ECu;
            // 0x1b41f0: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41F4u; }
        if (ctx->pc != 0x1B41F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyFuncPointCheck__9CMapPartsFR15CFuncPointCheck_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41F4u; }
        if (ctx->pc != 0x1B41F4u) { return; }
    }
    ctx->pc = 0x1B41F4u;
label_1b41f4:
    // 0x1b41f4: 0x8e220f64  lw          $v0, 0xF64($s1)
    ctx->pc = 0x1b41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3940)));
label_1b41f8:
    // 0x1b41f8: 0x16820035  bne         $s4, $v0, . + 4 + (0x35 << 2)
label_1b41fc:
    if (ctx->pc == 0x1B41FCu) {
        ctx->pc = 0x1B41FCu;
            // 0x1b41fc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1B4200u;
        goto label_1b4200;
    }
    ctx->pc = 0x1B41F8u;
    {
        const bool branch_taken_0x1b41f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B41FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41F8u;
            // 0x1b41fc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41f8) {
            ctx->pc = 0x1B42D0u;
            goto label_1b42d0;
        }
    }
    ctx->pc = 0x1B4200u;
label_1b4200:
    // 0x1b4200: 0xc050df4  jal         func_1437D0
label_1b4204:
    if (ctx->pc == 0x1B4204u) {
        ctx->pc = 0x1B4208u;
        goto label_1b4208;
    }
    ctx->pc = 0x1B4200u;
    SET_GPR_U32(ctx, 31, 0x1B4208u);
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4208u; }
        if (ctx->pc != 0x1B4208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4208u; }
        if (ctx->pc != 0x1B4208u) { return; }
    }
    ctx->pc = 0x1B4208u;
label_1b4208:
    // 0x1b4208: 0x8e250f68  lw          $a1, 0xF68($s1)
    ctx->pc = 0x1b4208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3944)));
label_1b420c:
    // 0x1b420c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b420cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b4210:
    // 0x1b4210: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1b4210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1b4214:
    // 0x1b4214: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1b4214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_1b4218:
    // 0x1b4218: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b4218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1b421c:
    // 0x1b421c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b421cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4220:
    // 0x1b4220: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b4220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4224:
    // 0x1b4224: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1b4224u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b4228:
    // 0x1b4228: 0x0  nop
    ctx->pc = 0x1b4228u;
    // NOP
label_1b422c:
    // 0x1b422c: 0x0  nop
    ctx->pc = 0x1b422cu;
    // NOP
label_1b4230:
    // 0x1b4230: 0x1010  mfhi        $v0
    ctx->pc = 0x1b4230u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b4234:
    // 0x1b4234: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b4234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4238:
    // 0x1b4238: 0x0  nop
    ctx->pc = 0x1b4238u;
    // NOP
label_1b423c:
    // 0x1b423c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b423cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b4240:
    // 0x1b4240: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b4240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1b4244:
    // 0x1b4244: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1b4244u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1b4248:
    // 0x1b4248: 0x0  nop
    ctx->pc = 0x1b4248u;
    // NOP
label_1b424c:
    // 0x1b424c: 0x0  nop
    ctx->pc = 0x1b424cu;
    // NOP
label_1b4250:
    // 0x1b4250: 0xc047a42  jal         func_11E908
label_1b4254:
    if (ctx->pc == 0x1B4254u) {
        ctx->pc = 0x1B4258u;
        goto label_1b4258;
    }
    ctx->pc = 0x1B4250u;
    SET_GPR_U32(ctx, 31, 0x1B4258u);
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4258u; }
        if (ctx->pc != 0x1B4258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4258u; }
        if (ctx->pc != 0x1B4258u) { return; }
    }
    ctx->pc = 0x1B4258u;
label_1b4258:
    // 0x1b4258: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b4258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b425c:
    // 0x1b425c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b425cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1b4260:
    // 0x1b4260: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b4260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4264:
    // 0x1b4264: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4268:
    // 0x1b4268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b4268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b426c:
    // 0x1b426c: 0x0  nop
    ctx->pc = 0x1b426cu;
    // NOP
label_1b4270:
    // 0x1b4270: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b4270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b4274:
    // 0x1b4274: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b4274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4278:
    // 0x1b4278: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b4278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b427c:
    // 0x1b427c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1b427cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1b4280:
    // 0x1b4280: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b4280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4284:
    // 0x1b4284: 0x0  nop
    ctx->pc = 0x1b4284u;
    // NOP
label_1b4288:
    // 0x1b4288: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x1b4288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_1b428c:
    // 0x1b428c: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x1b428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4290:
    // 0x1b4290: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b4290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b4294:
    // 0x1b4294: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1b4294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1b4298:
    // 0x1b4298: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1b4298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b429c:
    // 0x1b429c: 0x0  nop
    ctx->pc = 0x1b429cu;
    // NOP
label_1b42a0:
    // 0x1b42a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1b42a4:
    if (ctx->pc == 0x1B42A4u) {
        ctx->pc = 0x1B42A4u;
            // 0x1b42a4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x1B42A8u;
        goto label_1b42a8;
    }
    ctx->pc = 0x1B42A0u;
    {
        const bool branch_taken_0x1b42a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B42A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42A0u;
            // 0x1b42a4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42a0) {
            ctx->pc = 0x1B42ACu;
            goto label_1b42ac;
        }
    }
    ctx->pc = 0x1B42A8u;
label_1b42a8:
    // 0x1b42a8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1b42a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b42ac:
    // 0x1b42ac: 0x0  nop
    ctx->pc = 0x1b42acu;
    // NOP
label_1b42b0:
    // 0x1b42b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b42b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b42b4:
    // 0x1b42b4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1b42b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b42b8:
    // 0x1b42b8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1b42bc:
    if (ctx->pc == 0x1B42BCu) {
        ctx->pc = 0x1B42BCu;
            // 0x1b42bc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x1B42C0u;
        goto label_1b42c0;
    }
    ctx->pc = 0x1B42B8u;
    {
        const bool branch_taken_0x1b42b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B42BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42B8u;
            // 0x1b42bc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42b8) {
            ctx->pc = 0x1B4284u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b4284;
        }
    }
    ctx->pc = 0x1B42C0u;
label_1b42c0:
    // 0x1b42c0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1b42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1b42c4:
    // 0x1b42c4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b42c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b42c8:
    // 0x1b42c8: 0xc050dec  jal         func_1437B0
label_1b42cc:
    if (ctx->pc == 0x1B42CCu) {
        ctx->pc = 0x1B42CCu;
            // 0x1b42cc: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->pc = 0x1B42D0u;
        goto label_1b42d0;
    }
    ctx->pc = 0x1B42C8u;
    SET_GPR_U32(ctx, 31, 0x1B42D0u);
    ctx->pc = 0x1B42CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42C8u;
            // 0x1b42cc: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42D0u; }
        if (ctx->pc != 0x1B42D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42D0u; }
        if (ctx->pc != 0x1B42D0u) { return; }
    }
    ctx->pc = 0x1B42D0u;
label_1b42d0:
    // 0x1b42d0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1b42d4:
    if (ctx->pc == 0x1B42D4u) {
        ctx->pc = 0x1B42D8u;
        goto label_1b42d8;
    }
    ctx->pc = 0x1B42D0u;
    {
        const bool branch_taken_0x1b42d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b42d0) {
            ctx->pc = 0x1B42F0u;
            goto label_1b42f0;
        }
    }
    ctx->pc = 0x1B42D8u;
label_1b42d8:
    // 0x1b42d8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b42d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b42dc:
    // 0x1b42dc: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1b42dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1b42e0:
    // 0x1b42e0: 0x320f809  jalr        $t9
label_1b42e4:
    if (ctx->pc == 0x1B42E4u) {
        ctx->pc = 0x1B42E4u;
            // 0x1b42e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B42E8u;
        goto label_1b42e8;
    }
    ctx->pc = 0x1B42E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B42E8u);
        ctx->pc = 0x1B42E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42E0u;
            // 0x1b42e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B42E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B42E8u; }
            if (ctx->pc != 0x1B42E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B42E8u;
label_1b42e8:
    // 0x1b42e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b42ec:
    if (ctx->pc == 0x1B42ECu) {
        ctx->pc = 0x1B42ECu;
            // 0x1b42ec: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B42F0u;
        goto label_1b42f0;
    }
    ctx->pc = 0x1B42E8u;
    {
        const bool branch_taken_0x1b42e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42E8u;
            // 0x1b42ec: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42e8) {
            ctx->pc = 0x1B4304u;
            goto label_1b4304;
        }
    }
    ctx->pc = 0x1B42F0u;
label_1b42f0:
    // 0x1b42f0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b42f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b42f4:
    // 0x1b42f4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1b42f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1b42f8:
    // 0x1b42f8: 0x320f809  jalr        $t9
label_1b42fc:
    if (ctx->pc == 0x1B42FCu) {
        ctx->pc = 0x1B42FCu;
            // 0x1b42fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4300u;
        goto label_1b4300;
    }
    ctx->pc = 0x1B42F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B4300u);
        ctx->pc = 0x1B42FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42F8u;
            // 0x1b42fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4300u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4300u; }
            if (ctx->pc != 0x1B4300u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4300u;
label_1b4300:
    // 0x1b4300: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1b4300u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1b4304:
    // 0x1b4304: 0x0  nop
    ctx->pc = 0x1b4304u;
    // NOP
label_1b4308:
    // 0x1b4308: 0x8e220f64  lw          $v0, 0xF64($s1)
    ctx->pc = 0x1b4308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3940)));
label_1b430c:
    // 0x1b430c: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
label_1b4310:
    if (ctx->pc == 0x1B4310u) {
        ctx->pc = 0x1B4310u;
            // 0x1b4310: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1B4314u;
        goto label_1b4314;
    }
    ctx->pc = 0x1B430Cu;
    {
        const bool branch_taken_0x1b430c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B430Cu;
            // 0x1b4310: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b430c) {
            ctx->pc = 0x1B431Cu;
            goto label_1b431c;
        }
    }
    ctx->pc = 0x1B4314u;
label_1b4314:
    // 0x1b4314: 0xc050dec  jal         func_1437B0
label_1b4318:
    if (ctx->pc == 0x1B4318u) {
        ctx->pc = 0x1B431Cu;
        goto label_1b431c;
    }
    ctx->pc = 0x1B4314u;
    SET_GPR_U32(ctx, 31, 0x1B431Cu);
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B431Cu; }
        if (ctx->pc != 0x1B431Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B431Cu; }
        if (ctx->pc != 0x1B431Cu) { return; }
    }
    ctx->pc = 0x1B431Cu;
label_1b431c:
    // 0x1b431c: 0x0  nop
    ctx->pc = 0x1b431cu;
    // NOP
label_1b4320:
    // 0x1b4320: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b4320u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b4324:
    // 0x1b4324: 0x26520330  addiu       $s2, $s2, 0x330
    ctx->pc = 0x1b4324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_1b4328:
    // 0x1b4328: 0x8e220d40  lw          $v0, 0xD40($s1)
    ctx->pc = 0x1b4328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
label_1b432c:
    // 0x1b432c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1b432cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b4330:
    // 0x1b4330: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
label_1b4334:
    if (ctx->pc == 0x1B4334u) {
        ctx->pc = 0x1B4334u;
            // 0x1b4334: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4338u;
        goto label_1b4338;
    }
    ctx->pc = 0x1B4330u;
    {
        const bool branch_taken_0x1b4330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4330u;
            // 0x1b4334: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4330) {
            ctx->pc = 0x1B41C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b41c8;
        }
    }
    ctx->pc = 0x1B4338u;
label_1b4338:
    // 0x1b4338: 0xc057894  jal         func_15E250
label_1b433c:
    if (ctx->pc == 0x1B433Cu) {
        ctx->pc = 0x1B433Cu;
            // 0x1b433c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4340u;
        goto label_1b4340;
    }
    ctx->pc = 0x1B4338u;
    SET_GPR_U32(ctx, 31, 0x1B4340u);
    ctx->pc = 0x1B433Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4338u;
            // 0x1b433c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E250u;
    if (runtime->hasFunction(0x15E250u)) {
        auto targetFn = runtime->lookupFunction(0x15E250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4340u; }
        if (ctx->pc != 0x1B4340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSub__4CMapFi_0x15e250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4340u; }
        if (ctx->pc != 0x1B4340u) { return; }
    }
    ctx->pc = 0x1B4340u;
label_1b4340:
    // 0x1b4340: 0x8e221050  lw          $v0, 0x1050($s1)
    ctx->pc = 0x1b4340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
label_1b4344:
    // 0x1b4344: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1b4348:
    if (ctx->pc == 0x1B4348u) {
        ctx->pc = 0x1B4348u;
            // 0x1b4348: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B434Cu;
        goto label_1b434c;
    }
    ctx->pc = 0x1B4344u;
    {
        const bool branch_taken_0x1b4344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4344u;
            // 0x1b4348: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4344) {
            ctx->pc = 0x1B438Cu;
            goto label_1b438c;
        }
    }
    ctx->pc = 0x1B434Cu;
label_1b434c:
    // 0x1b434c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b434cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4350:
    // 0x1b4350: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b4350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4354:
    // 0x1b4354: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1b4354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1b4358:
    // 0x1b4358: 0x8c441054  lw          $a0, 0x1054($v0)
    ctx->pc = 0x1b4358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4180)));
label_1b435c:
    // 0x1b435c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1b4360:
    if (ctx->pc == 0x1B4360u) {
        ctx->pc = 0x1B4364u;
        goto label_1b4364;
    }
    ctx->pc = 0x1B435Cu;
    {
        const bool branch_taken_0x1b435c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b435c) {
            ctx->pc = 0x1B4378u;
            goto label_1b4378;
        }
    }
    ctx->pc = 0x1B4364u;
label_1b4364:
    // 0x1b4364: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b4364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b4368:
    // 0x1b4368: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x1b4368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_1b436c:
    // 0x1b436c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1b436cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1b4370:
    // 0x1b4370: 0x320f809  jalr        $t9
label_1b4374:
    if (ctx->pc == 0x1B4374u) {
        ctx->pc = 0x1B4374u;
            // 0x1b4374: 0x24451070  addiu       $a1, $v0, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4208));
        ctx->pc = 0x1B4378u;
        goto label_1b4378;
    }
    ctx->pc = 0x1B4370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B4378u);
        ctx->pc = 0x1B4374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4370u;
            // 0x1b4374: 0x24451070  addiu       $a1, $v0, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4378u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4378u; }
            if (ctx->pc != 0x1B4378u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4378u;
label_1b4378:
    // 0x1b4378: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b4378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b437c:
    // 0x1b437c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1b437cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1b4380:
    // 0x1b4380: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1b4380u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1b4384:
    // 0x1b4384: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1b4388:
    if (ctx->pc == 0x1B4388u) {
        ctx->pc = 0x1B4388u;
            // 0x1b4388: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x1B438Cu;
        goto label_1b438c;
    }
    ctx->pc = 0x1B4384u;
    {
        const bool branch_taken_0x1b4384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4384u;
            // 0x1b4388: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4384) {
            ctx->pc = 0x1B4354u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b4354;
        }
    }
    ctx->pc = 0x1B438Cu;
label_1b438c:
    // 0x1b438c: 0x0  nop
    ctx->pc = 0x1b438cu;
    // NOP
label_1b4390:
    // 0x1b4390: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1b4390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b4394:
    // 0x1b4394: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b4394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b4398:
    // 0x1b4398: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b4398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b439c:
    // 0x1b439c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b439cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b43a0:
    // 0x1b43a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b43a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b43a4:
    // 0x1b43a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b43a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b43a8:
    // 0x1b43a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b43a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b43ac:
    // 0x1b43ac: 0x3e00008  jr          $ra
label_1b43b0:
    if (ctx->pc == 0x1B43B0u) {
        ctx->pc = 0x1B43B0u;
            // 0x1b43b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1B43B4u;
        goto label_fallthrough_0x1b43ac;
    }
    ctx->pc = 0x1B43ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B43B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43ACu;
            // 0x1b43b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b43ac:
    ctx->pc = 0x1B43B4u;
}
