#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_SET_SHOW__FP12RS_STACKDATAi
// Address: 0x2e40c0 - 0x2e41d0
void ps2__CHR_SET_SHOW__FP12RS_STACKDATAi_0x2e40c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_SET_SHOW__FP12RS_STACKDATAi_0x2e40c0");
#endif

    switch (ctx->pc) {
        case 0x2e40c0u: goto label_2e40c0;
        case 0x2e40c4u: goto label_2e40c4;
        case 0x2e40c8u: goto label_2e40c8;
        case 0x2e40ccu: goto label_2e40cc;
        case 0x2e40d0u: goto label_2e40d0;
        case 0x2e40d4u: goto label_2e40d4;
        case 0x2e40d8u: goto label_2e40d8;
        case 0x2e40dcu: goto label_2e40dc;
        case 0x2e40e0u: goto label_2e40e0;
        case 0x2e40e4u: goto label_2e40e4;
        case 0x2e40e8u: goto label_2e40e8;
        case 0x2e40ecu: goto label_2e40ec;
        case 0x2e40f0u: goto label_2e40f0;
        case 0x2e40f4u: goto label_2e40f4;
        case 0x2e40f8u: goto label_2e40f8;
        case 0x2e40fcu: goto label_2e40fc;
        case 0x2e4100u: goto label_2e4100;
        case 0x2e4104u: goto label_2e4104;
        case 0x2e4108u: goto label_2e4108;
        case 0x2e410cu: goto label_2e410c;
        case 0x2e4110u: goto label_2e4110;
        case 0x2e4114u: goto label_2e4114;
        case 0x2e4118u: goto label_2e4118;
        case 0x2e411cu: goto label_2e411c;
        case 0x2e4120u: goto label_2e4120;
        case 0x2e4124u: goto label_2e4124;
        case 0x2e4128u: goto label_2e4128;
        case 0x2e412cu: goto label_2e412c;
        case 0x2e4130u: goto label_2e4130;
        case 0x2e4134u: goto label_2e4134;
        case 0x2e4138u: goto label_2e4138;
        case 0x2e413cu: goto label_2e413c;
        case 0x2e4140u: goto label_2e4140;
        case 0x2e4144u: goto label_2e4144;
        case 0x2e4148u: goto label_2e4148;
        case 0x2e414cu: goto label_2e414c;
        case 0x2e4150u: goto label_2e4150;
        case 0x2e4154u: goto label_2e4154;
        case 0x2e4158u: goto label_2e4158;
        case 0x2e415cu: goto label_2e415c;
        case 0x2e4160u: goto label_2e4160;
        case 0x2e4164u: goto label_2e4164;
        case 0x2e4168u: goto label_2e4168;
        case 0x2e416cu: goto label_2e416c;
        case 0x2e4170u: goto label_2e4170;
        case 0x2e4174u: goto label_2e4174;
        case 0x2e4178u: goto label_2e4178;
        case 0x2e417cu: goto label_2e417c;
        case 0x2e4180u: goto label_2e4180;
        case 0x2e4184u: goto label_2e4184;
        case 0x2e4188u: goto label_2e4188;
        case 0x2e418cu: goto label_2e418c;
        case 0x2e4190u: goto label_2e4190;
        case 0x2e4194u: goto label_2e4194;
        case 0x2e4198u: goto label_2e4198;
        case 0x2e419cu: goto label_2e419c;
        case 0x2e41a0u: goto label_2e41a0;
        case 0x2e41a4u: goto label_2e41a4;
        case 0x2e41a8u: goto label_2e41a8;
        case 0x2e41acu: goto label_2e41ac;
        case 0x2e41b0u: goto label_2e41b0;
        case 0x2e41b4u: goto label_2e41b4;
        case 0x2e41b8u: goto label_2e41b8;
        case 0x2e41bcu: goto label_2e41bc;
        case 0x2e41c0u: goto label_2e41c0;
        case 0x2e41c4u: goto label_2e41c4;
        case 0x2e41c8u: goto label_2e41c8;
        case 0x2e41ccu: goto label_2e41cc;
        default: break;
    }

    ctx->pc = 0x2e40c0u;

label_2e40c0:
    // 0x2e40c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e40c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e40c4:
    // 0x2e40c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e40c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e40c8:
    // 0x2e40c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e40c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e40cc:
    // 0x2e40cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e40ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e40d0:
    // 0x2e40d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e40d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e40d4:
    // 0x2e40d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e40d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e40d8:
    // 0x2e40d8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e40dc:
    // 0x2e40dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e40e0:
    // 0x2e40e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e40e4:
    if (ctx->pc == 0x2E40E4u) {
        ctx->pc = 0x2E40E4u;
            // 0x2e40e4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E40E8u;
        goto label_2e40e8;
    }
    ctx->pc = 0x2E40E0u;
    {
        const bool branch_taken_0x2e40e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E40E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E40E0u;
            // 0x2e40e4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e40e0) {
            ctx->pc = 0x2E40F0u;
            goto label_2e40f0;
        }
    }
    ctx->pc = 0x2E40E8u;
label_2e40e8:
    // 0x2e40e8: 0x10000032  b           . + 4 + (0x32 << 2)
label_2e40ec:
    if (ctx->pc == 0x2E40ECu) {
        ctx->pc = 0x2E40ECu;
            // 0x2e40ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E40F0u;
        goto label_2e40f0;
    }
    ctx->pc = 0x2E40E8u;
    {
        const bool branch_taken_0x2e40e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E40ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E40E8u;
            // 0x2e40ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e40e8) {
            ctx->pc = 0x2E41B4u;
            goto label_2e41b4;
        }
    }
    ctx->pc = 0x2E40F0u;
label_2e40f0:
    // 0x2e40f0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e40f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2e40f4:
    // 0x2e40f4: 0xc0b8ca0  jal         func_2E3280
label_2e40f8:
    if (ctx->pc == 0x2E40F8u) {
        ctx->pc = 0x2E40F8u;
            // 0x2e40f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E40FCu;
        goto label_2e40fc;
    }
    ctx->pc = 0x2E40F4u;
    SET_GPR_U32(ctx, 31, 0x2E40FCu);
    ctx->pc = 0x2E40F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E40F4u;
            // 0x2e40f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E40FCu; }
        if (ctx->pc != 0x2E40FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E40FCu; }
        if (ctx->pc != 0x2E40FCu) { return; }
    }
    ctx->pc = 0x2E40FCu;
label_2e40fc:
    // 0x2e40fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e40fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4100:
    // 0x2e4100: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2e4100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_2e4104:
    // 0x2e4104: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2e4108:
    if (ctx->pc == 0x2E4108u) {
        ctx->pc = 0x2E4108u;
            // 0x2e4108: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E410Cu;
        goto label_2e410c;
    }
    ctx->pc = 0x2E4104u;
    {
        const bool branch_taken_0x2e4104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4104u;
            // 0x2e4108: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4104) {
            ctx->pc = 0x2E412Cu;
            goto label_2e412c;
        }
    }
    ctx->pc = 0x2E410Cu;
label_2e410c:
    // 0x2e410c: 0xc0b8ca0  jal         func_2E3280
label_2e4110:
    if (ctx->pc == 0x2E4110u) {
        ctx->pc = 0x2E4110u;
            // 0x2e4110: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E4114u;
        goto label_2e4114;
    }
    ctx->pc = 0x2E410Cu;
    SET_GPR_U32(ctx, 31, 0x2E4114u);
    ctx->pc = 0x2E4110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E410Cu;
            // 0x2e4110: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4114u; }
        if (ctx->pc != 0x2E4114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4114u; }
        if (ctx->pc != 0x2E4114u) { return; }
    }
    ctx->pc = 0x2E4114u;
label_2e4114:
    // 0x2e4114: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e4114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4118:
    // 0x2e4118: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e4118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e411c:
    // 0x2e411c: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_2e4120:
    if (ctx->pc == 0x2E4120u) {
        ctx->pc = 0x2E4120u;
            // 0x2e4120: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4124u;
        goto label_2e4124;
    }
    ctx->pc = 0x2E411Cu;
    {
        const bool branch_taken_0x2e411c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E4120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E411Cu;
            // 0x2e4120: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e411c) {
            ctx->pc = 0x2E412Cu;
            goto label_2e412c;
        }
    }
    ctx->pc = 0x2E4124u;
label_2e4124:
    // 0x2e4124: 0xc0b8cb0  jal         func_2E32C0
label_2e4128:
    if (ctx->pc == 0x2E4128u) {
        ctx->pc = 0x2E412Cu;
        goto label_2e412c;
    }
    ctx->pc = 0x2E4124u;
    SET_GPR_U32(ctx, 31, 0x2E412Cu);
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E412Cu; }
        if (ctx->pc != 0x2E412Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E412Cu; }
        if (ctx->pc != 0x2E412Cu) { return; }
    }
    ctx->pc = 0x2E412Cu;
label_2e412c:
    // 0x2e412c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4130:
    // 0x2e4130: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e4130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4134:
    // 0x2e4134: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4138:
    // 0x2e4138: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2e4138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2e413c:
    // 0x2e413c: 0x320f809  jalr        $t9
label_2e4140:
    if (ctx->pc == 0x2E4140u) {
        ctx->pc = 0x2E4140u;
            // 0x2e4140: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4144u;
        goto label_2e4144;
    }
    ctx->pc = 0x2E413Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4144u);
        ctx->pc = 0x2E4140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E413Cu;
            // 0x2e4140: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4144u; }
            if (ctx->pc != 0x2E4144u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4144u;
label_2e4144:
    // 0x2e4144: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e4144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4148:
    // 0x2e4148: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e4148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_2e414c:
    // 0x2e414c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2e414cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2e4150:
    // 0x2e4150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e4150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4154:
    // 0x2e4154: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2e4154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2e4158:
    // 0x2e4158: 0xac450054  sw          $a1, 0x54($v0)
    ctx->pc = 0x2e4158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 5));
label_2e415c:
    // 0x2e415c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4160:
    // 0x2e4160: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e4160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4164:
    // 0x2e4164: 0x16250009  bne         $s1, $a1, . + 4 + (0x9 << 2)
label_2e4168:
    if (ctx->pc == 0x2E4168u) {
        ctx->pc = 0x2E4168u;
            // 0x2e4168: 0xac43005c  sw          $v1, 0x5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
        ctx->pc = 0x2E416Cu;
        goto label_2e416c;
    }
    ctx->pc = 0x2E4164u;
    {
        const bool branch_taken_0x2e4164 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x2E4168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4164u;
            // 0x2e4168: 0xac43005c  sw          $v1, 0x5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4164) {
            ctx->pc = 0x2E418Cu;
            goto label_2e418c;
        }
    }
    ctx->pc = 0x2E416Cu;
label_2e416c:
    // 0x2e416c: 0x16050008  bne         $s0, $a1, . + 4 + (0x8 << 2)
label_2e4170:
    if (ctx->pc == 0x2E4170u) {
        ctx->pc = 0x2E4170u;
            // 0x2e4170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2E4174u;
        goto label_2e4174;
    }
    ctx->pc = 0x2E416Cu;
    {
        const bool branch_taken_0x2e416c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x2E4170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E416Cu;
            // 0x2e4170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e416c) {
            ctx->pc = 0x2E4190u;
            goto label_2e4190;
        }
    }
    ctx->pc = 0x2E4174u;
label_2e4174:
    // 0x2e4174: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4178:
    // 0x2e4178: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x2e4178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_2e417c:
    // 0x2e417c: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x2e417cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_2e4180:
    // 0x2e4180: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e4180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4184:
    // 0x2e4184: 0x1000000a  b           . + 4 + (0xA << 2)
label_2e4188:
    if (ctx->pc == 0x2E4188u) {
        ctx->pc = 0x2E4188u;
            // 0x2e4188: 0xac430058  sw          $v1, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
        ctx->pc = 0x2E418Cu;
        goto label_2e418c;
    }
    ctx->pc = 0x2E4184u;
    {
        const bool branch_taken_0x2e4184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4184u;
            // 0x2e4188: 0xac430058  sw          $v1, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4184) {
            ctx->pc = 0x2E41B0u;
            goto label_2e41b0;
        }
    }
    ctx->pc = 0x2E418Cu;
label_2e418c:
    // 0x2e418c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4190:
    // 0x2e4190: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
label_2e4194:
    if (ctx->pc == 0x2E4194u) {
        ctx->pc = 0x2E4194u;
            // 0x2e4194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2E4198u;
        goto label_2e4198;
    }
    ctx->pc = 0x2E4190u;
    {
        const bool branch_taken_0x2e4190 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E4194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4190u;
            // 0x2e4194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4190) {
            ctx->pc = 0x2E41B4u;
            goto label_2e41b4;
        }
    }
    ctx->pc = 0x2E4198u;
label_2e4198:
    // 0x2e4198: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_2e419c:
    if (ctx->pc == 0x2E419Cu) {
        ctx->pc = 0x2E41A0u;
        goto label_2e41a0;
    }
    ctx->pc = 0x2E4198u;
    {
        const bool branch_taken_0x2e4198 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4198) {
            ctx->pc = 0x2E41B0u;
            goto label_2e41b0;
        }
    }
    ctx->pc = 0x2E41A0u;
label_2e41a0:
    // 0x2e41a0: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e41a4:
    // 0x2e41a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e41a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2e41a8:
    // 0x2e41a8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e41ac:
    // 0x2e41ac: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x2e41acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_2e41b0:
    // 0x2e41b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e41b4:
    // 0x2e41b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e41b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e41b8:
    // 0x2e41b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e41b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e41bc:
    // 0x2e41bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e41bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e41c0:
    // 0x2e41c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e41c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e41c4:
    // 0x2e41c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e41c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e41c8:
    // 0x2e41c8: 0x3e00008  jr          $ra
label_2e41cc:
    if (ctx->pc == 0x2E41CCu) {
        ctx->pc = 0x2E41CCu;
            // 0x2e41cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2E41D0u;
        goto label_fallthrough_0x2e41c8;
    }
    ctx->pc = 0x2E41C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E41CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E41C8u;
            // 0x2e41cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e41c8:
    ctx->pc = 0x2E41D0u;
}
