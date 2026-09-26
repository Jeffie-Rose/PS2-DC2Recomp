#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditControlInit__FP6CScene
// Address: 0x1a4170 - 0x1a422c
void EditControlInit__FP6CScene_0x1a4170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditControlInit__FP6CScene_0x1a4170");
#endif

    switch (ctx->pc) {
        case 0x1a4170u: goto label_1a4170;
        case 0x1a4174u: goto label_1a4174;
        case 0x1a4178u: goto label_1a4178;
        case 0x1a417cu: goto label_1a417c;
        case 0x1a4180u: goto label_1a4180;
        case 0x1a4184u: goto label_1a4184;
        case 0x1a4188u: goto label_1a4188;
        case 0x1a418cu: goto label_1a418c;
        case 0x1a4190u: goto label_1a4190;
        case 0x1a4194u: goto label_1a4194;
        case 0x1a4198u: goto label_1a4198;
        case 0x1a419cu: goto label_1a419c;
        case 0x1a41a0u: goto label_1a41a0;
        case 0x1a41a4u: goto label_1a41a4;
        case 0x1a41a8u: goto label_1a41a8;
        case 0x1a41acu: goto label_1a41ac;
        case 0x1a41b0u: goto label_1a41b0;
        case 0x1a41b4u: goto label_1a41b4;
        case 0x1a41b8u: goto label_1a41b8;
        case 0x1a41bcu: goto label_1a41bc;
        case 0x1a41c0u: goto label_1a41c0;
        case 0x1a41c4u: goto label_1a41c4;
        case 0x1a41c8u: goto label_1a41c8;
        case 0x1a41ccu: goto label_1a41cc;
        case 0x1a41d0u: goto label_1a41d0;
        case 0x1a41d4u: goto label_1a41d4;
        case 0x1a41d8u: goto label_1a41d8;
        case 0x1a41dcu: goto label_1a41dc;
        case 0x1a41e0u: goto label_1a41e0;
        case 0x1a41e4u: goto label_1a41e4;
        case 0x1a41e8u: goto label_1a41e8;
        case 0x1a41ecu: goto label_1a41ec;
        case 0x1a41f0u: goto label_1a41f0;
        case 0x1a41f4u: goto label_1a41f4;
        case 0x1a41f8u: goto label_1a41f8;
        case 0x1a41fcu: goto label_1a41fc;
        case 0x1a4200u: goto label_1a4200;
        case 0x1a4204u: goto label_1a4204;
        case 0x1a4208u: goto label_1a4208;
        case 0x1a420cu: goto label_1a420c;
        case 0x1a4210u: goto label_1a4210;
        case 0x1a4214u: goto label_1a4214;
        case 0x1a4218u: goto label_1a4218;
        case 0x1a421cu: goto label_1a421c;
        case 0x1a4220u: goto label_1a4220;
        case 0x1a4224u: goto label_1a4224;
        case 0x1a4228u: goto label_1a4228;
        default: break;
    }

    ctx->pc = 0x1a4170u;

label_1a4170:
    // 0x1a4170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a4174:
    // 0x1a4174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4178:
    // 0x1a4178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a417c:
    // 0x1a417c: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1a417cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1a4180:
    // 0x1a4180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a4184:
    // 0x1a4184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4188:
    // 0x1a4188: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a4188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1a418c:
    // 0x1a418c: 0xc049c86  jal         func_127218
label_1a4190:
    if (ctx->pc == 0x1A4190u) {
        ctx->pc = 0x1A4190u;
            // 0x1a4190: 0x2484b1c0  addiu       $a0, $a0, -0x4E40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947264));
        ctx->pc = 0x1A4194u;
        goto label_1a4194;
    }
    ctx->pc = 0x1A418Cu;
    SET_GPR_U32(ctx, 31, 0x1A4194u);
    ctx->pc = 0x1A4190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A418Cu;
            // 0x1a4190: 0x2484b1c0  addiu       $a0, $a0, -0x4E40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4194u; }
        if (ctx->pc != 0x1A4194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4194u; }
        if (ctx->pc != 0x1A4194u) { return; }
    }
    ctx->pc = 0x1A4194u;
label_1a4194:
    // 0x1a4194: 0xaf808bbc  sw          $zero, -0x7444($gp)
    ctx->pc = 0x1a4194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937532), GPR_U32(ctx, 0));
label_1a4198:
    // 0x1a4198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a419c:
    // 0x1a419c: 0xaf808bc0  sw          $zero, -0x7440($gp)
    ctx->pc = 0x1a419cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937536), GPR_U32(ctx, 0));
label_1a41a0:
    // 0x1a41a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a41a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a41a4:
    // 0x1a41a4: 0xaf808bd4  sw          $zero, -0x742C($gp)
    ctx->pc = 0x1a41a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937556), GPR_U32(ctx, 0));
label_1a41a8:
    // 0x1a41a8: 0xaf808bc4  sw          $zero, -0x743C($gp)
    ctx->pc = 0x1a41a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), GPR_U32(ctx, 0));
label_1a41ac:
    // 0x1a41ac: 0xaf808bc8  sw          $zero, -0x7438($gp)
    ctx->pc = 0x1a41acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937544), GPR_U32(ctx, 0));
label_1a41b0:
    // 0x1a41b0: 0xaf808bcc  sw          $zero, -0x7434($gp)
    ctx->pc = 0x1a41b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937548), GPR_U32(ctx, 0));
label_1a41b4:
    // 0x1a41b4: 0xaf808bd0  sw          $zero, -0x7430($gp)
    ctx->pc = 0x1a41b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937552), GPR_U32(ctx, 0));
label_1a41b8:
    // 0x1a41b8: 0xaf808bd8  sw          $zero, -0x7428($gp)
    ctx->pc = 0x1a41b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937560), GPR_U32(ctx, 0));
label_1a41bc:
    // 0x1a41bc: 0x8e062e50  lw          $a2, 0x2E50($s0)
    ctx->pc = 0x1a41bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11856)));
label_1a41c0:
    // 0x1a41c0: 0xc0a11e0  jal         func_284780
label_1a41c4:
    if (ctx->pc == 0x1A41C4u) {
        ctx->pc = 0x1A41C4u;
            // 0x1a41c4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1A41C8u;
        goto label_1a41c8;
    }
    ctx->pc = 0x1A41C0u;
    SET_GPR_U32(ctx, 31, 0x1A41C8u);
    ctx->pc = 0x1A41C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41C0u;
            // 0x1a41c4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284780u;
    if (runtime->hasFunction(0x284780u)) {
        auto targetFn = runtime->lookupFunction(0x284780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41C8u; }
        if (ctx->pc != 0x1A41C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetStatus__6CSceneFiii_0x284780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41C8u; }
        if (ctx->pc != 0x1A41C8u) { return; }
    }
    ctx->pc = 0x1A41C8u;
label_1a41c8:
    // 0x1a41c8: 0xaf808bb0  sw          $zero, -0x7450($gp)
    ctx->pc = 0x1a41c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937520), GPR_U32(ctx, 0));
label_1a41cc:
    // 0x1a41cc: 0xaf808bac  sw          $zero, -0x7454($gp)
    ctx->pc = 0x1a41ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937516), GPR_U32(ctx, 0));
label_1a41d0:
    // 0x1a41d0: 0xc0c3958  jal         func_30E560
label_1a41d4:
    if (ctx->pc == 0x1A41D4u) {
        ctx->pc = 0x1A41D4u;
            // 0x1a41d4: 0xaf808bb4  sw          $zero, -0x744C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937524), GPR_U32(ctx, 0));
        ctx->pc = 0x1A41D8u;
        goto label_1a41d8;
    }
    ctx->pc = 0x1A41D0u;
    SET_GPR_U32(ctx, 31, 0x1A41D8u);
    ctx->pc = 0x1A41D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41D0u;
            // 0x1a41d4: 0xaf808bb4  sw          $zero, -0x744C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E560u;
    if (runtime->hasFunction(0x30E560u)) {
        auto targetFn = runtime->lookupFunction(0x30E560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41D8u; }
        if (ctx->pc != 0x1A41D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitTakePhoto__Fv_0x30e560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41D8u; }
        if (ctx->pc != 0x1A41D8u) { return; }
    }
    ctx->pc = 0x1A41D8u;
label_1a41d8:
    // 0x1a41d8: 0xc06908c  jal         func_1A4230
label_1a41dc:
    if (ctx->pc == 0x1A41DCu) {
        ctx->pc = 0x1A41DCu;
            // 0x1a41dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A41E0u;
        goto label_1a41e0;
    }
    ctx->pc = 0x1A41D8u;
    SET_GPR_U32(ctx, 31, 0x1A41E0u);
    ctx->pc = 0x1A41DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41D8u;
            // 0x1a41dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4230u;
    if (runtime->hasFunction(0x1A4230u)) {
        auto targetFn = runtime->lookupFunction(0x1A4230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41E0u; }
        if (ctx->pc != 0x1A41E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditControlStatusInit__FP6CScene_0x1a4230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41E0u; }
        if (ctx->pc != 0x1A41E0u) { return; }
    }
    ctx->pc = 0x1A41E0u;
label_1a41e0:
    // 0x1a41e0: 0x8e052e54  lw          $a1, 0x2E54($s0)
    ctx->pc = 0x1a41e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11860)));
label_1a41e4:
    // 0x1a41e4: 0xc0a0e30  jal         func_2838C0
label_1a41e8:
    if (ctx->pc == 0x1A41E8u) {
        ctx->pc = 0x1A41E8u;
            // 0x1a41e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A41ECu;
        goto label_1a41ec;
    }
    ctx->pc = 0x1A41E4u;
    SET_GPR_U32(ctx, 31, 0x1A41ECu);
    ctx->pc = 0x1A41E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41E4u;
            // 0x1a41e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41ECu; }
        if (ctx->pc != 0x1A41ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41ECu; }
        if (ctx->pc != 0x1A41ECu) { return; }
    }
    ctx->pc = 0x1A41ECu;
label_1a41ec:
    // 0x1a41ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a41ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a41f0:
    // 0x1a41f0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_1a41f4:
    if (ctx->pc == 0x1A41F4u) {
        ctx->pc = 0x1A41F8u;
        goto label_1a41f8;
    }
    ctx->pc = 0x1A41F0u;
    {
        const bool branch_taken_0x1a41f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a41f0) {
            ctx->pc = 0x1A421Cu;
            goto label_1a421c;
        }
    }
    ctx->pc = 0x1A41F8u;
label_1a41f8:
    // 0x1a41f8: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x1a41f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1a41fc:
    // 0x1a41fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a41fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a4200:
    // 0x1a4200: 0x320f809  jalr        $t9
label_1a4204:
    if (ctx->pc == 0x1A4204u) {
        ctx->pc = 0x1A4204u;
            // 0x1a4204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4208u;
        goto label_1a4208;
    }
    ctx->pc = 0x1A4200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4208u);
        ctx->pc = 0x1A4204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4200u;
            // 0x1a4204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4208u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4208u; }
            if (ctx->pc != 0x1A4208u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4208u;
label_1a4208:
    // 0x1a4208: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1a4208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1a420c:
    // 0x1a420c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1a4210:
    if (ctx->pc == 0x1A4210u) {
        ctx->pc = 0x1A4210u;
            // 0x1a4210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4214u;
        goto label_1a4214;
    }
    ctx->pc = 0x1A420Cu;
    {
        const bool branch_taken_0x1a420c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A4210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A420Cu;
            // 0x1a4210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a420c) {
            ctx->pc = 0x1A421Cu;
            goto label_1a421c;
        }
    }
    ctx->pc = 0x1A4214u;
label_1a4214:
    // 0x1a4214: 0xc0bb228  jal         func_2EC8A0
label_1a4218:
    if (ctx->pc == 0x1A4218u) {
        ctx->pc = 0x1A421Cu;
        goto label_1a421c;
    }
    ctx->pc = 0x1A4214u;
    SET_GPR_U32(ctx, 31, 0x1A421Cu);
    ctx->pc = 0x2EC8A0u;
    if (runtime->hasFunction(0x2EC8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A421Cu; }
        if (ctx->pc != 0x1A421Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelRotBack__14CCameraControlFv_0x2ec8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A421Cu; }
        if (ctx->pc != 0x1A421Cu) { return; }
    }
    ctx->pc = 0x1A421Cu;
label_1a421c:
    // 0x1a421c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a421cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4220:
    // 0x1a4220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4224:
    // 0x1a4224: 0x3e00008  jr          $ra
label_1a4228:
    if (ctx->pc == 0x1A4228u) {
        ctx->pc = 0x1A4228u;
            // 0x1a4228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A422Cu;
        goto label_fallthrough_0x1a4224;
    }
    ctx->pc = 0x1A4224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4224u;
            // 0x1a4228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a4224:
    ctx->pc = 0x1A422Cu;
}
