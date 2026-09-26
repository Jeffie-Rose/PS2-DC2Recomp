#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_GET_DIR_VECTOR__FP12RS_STACKDATAi
// Address: 0x2e4790 - 0x2e4868
void ps2__CHR_GET_DIR_VECTOR__FP12RS_STACKDATAi_0x2e4790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_GET_DIR_VECTOR__FP12RS_STACKDATAi_0x2e4790");
#endif

    switch (ctx->pc) {
        case 0x2e4790u: goto label_2e4790;
        case 0x2e4794u: goto label_2e4794;
        case 0x2e4798u: goto label_2e4798;
        case 0x2e479cu: goto label_2e479c;
        case 0x2e47a0u: goto label_2e47a0;
        case 0x2e47a4u: goto label_2e47a4;
        case 0x2e47a8u: goto label_2e47a8;
        case 0x2e47acu: goto label_2e47ac;
        case 0x2e47b0u: goto label_2e47b0;
        case 0x2e47b4u: goto label_2e47b4;
        case 0x2e47b8u: goto label_2e47b8;
        case 0x2e47bcu: goto label_2e47bc;
        case 0x2e47c0u: goto label_2e47c0;
        case 0x2e47c4u: goto label_2e47c4;
        case 0x2e47c8u: goto label_2e47c8;
        case 0x2e47ccu: goto label_2e47cc;
        case 0x2e47d0u: goto label_2e47d0;
        case 0x2e47d4u: goto label_2e47d4;
        case 0x2e47d8u: goto label_2e47d8;
        case 0x2e47dcu: goto label_2e47dc;
        case 0x2e47e0u: goto label_2e47e0;
        case 0x2e47e4u: goto label_2e47e4;
        case 0x2e47e8u: goto label_2e47e8;
        case 0x2e47ecu: goto label_2e47ec;
        case 0x2e47f0u: goto label_2e47f0;
        case 0x2e47f4u: goto label_2e47f4;
        case 0x2e47f8u: goto label_2e47f8;
        case 0x2e47fcu: goto label_2e47fc;
        case 0x2e4800u: goto label_2e4800;
        case 0x2e4804u: goto label_2e4804;
        case 0x2e4808u: goto label_2e4808;
        case 0x2e480cu: goto label_2e480c;
        case 0x2e4810u: goto label_2e4810;
        case 0x2e4814u: goto label_2e4814;
        case 0x2e4818u: goto label_2e4818;
        case 0x2e481cu: goto label_2e481c;
        case 0x2e4820u: goto label_2e4820;
        case 0x2e4824u: goto label_2e4824;
        case 0x2e4828u: goto label_2e4828;
        case 0x2e482cu: goto label_2e482c;
        case 0x2e4830u: goto label_2e4830;
        case 0x2e4834u: goto label_2e4834;
        case 0x2e4838u: goto label_2e4838;
        case 0x2e483cu: goto label_2e483c;
        case 0x2e4840u: goto label_2e4840;
        case 0x2e4844u: goto label_2e4844;
        case 0x2e4848u: goto label_2e4848;
        case 0x2e484cu: goto label_2e484c;
        case 0x2e4850u: goto label_2e4850;
        case 0x2e4854u: goto label_2e4854;
        case 0x2e4858u: goto label_2e4858;
        case 0x2e485cu: goto label_2e485c;
        case 0x2e4860u: goto label_2e4860;
        case 0x2e4864u: goto label_2e4864;
        default: break;
    }

    ctx->pc = 0x2e4790u;

label_2e4790:
    // 0x2e4790: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e4790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2e4794:
    // 0x2e4794: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e4794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e4798:
    // 0x2e4798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e479c:
    // 0x2e479c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e479cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e47a0:
    // 0x2e47a0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2e47a4:
    if (ctx->pc == 0x2E47A4u) {
        ctx->pc = 0x2E47A4u;
            // 0x2e47a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E47A8u;
        goto label_2e47a8;
    }
    ctx->pc = 0x2E47A0u;
    {
        const bool branch_taken_0x2e47a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E47A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E47A0u;
            // 0x2e47a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e47a0) {
            ctx->pc = 0x2E47B0u;
            goto label_2e47b0;
        }
    }
    ctx->pc = 0x2E47A8u;
label_2e47a8:
    // 0x2e47a8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2e47ac:
    if (ctx->pc == 0x2E47ACu) {
        ctx->pc = 0x2E47ACu;
            // 0x2e47ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E47B0u;
        goto label_2e47b0;
    }
    ctx->pc = 0x2E47A8u;
    {
        const bool branch_taken_0x2e47a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E47ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E47A8u;
            // 0x2e47ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e47a8) {
            ctx->pc = 0x2E4858u;
            goto label_2e4858;
        }
    }
    ctx->pc = 0x2E47B0u;
label_2e47b0:
    // 0x2e47b0: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e47b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e47b4:
    // 0x2e47b4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e47b8:
    // 0x2e47b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e47bc:
    if (ctx->pc == 0x2E47BCu) {
        ctx->pc = 0x2E47BCu;
            // 0x2e47bc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x2E47C0u;
        goto label_2e47c0;
    }
    ctx->pc = 0x2E47B8u;
    {
        const bool branch_taken_0x2e47b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E47BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E47B8u;
            // 0x2e47bc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e47b8) {
            ctx->pc = 0x2E47C8u;
            goto label_2e47c8;
        }
    }
    ctx->pc = 0x2E47C0u;
label_2e47c0:
    // 0x2e47c0: 0x10000025  b           . + 4 + (0x25 << 2)
label_2e47c4:
    if (ctx->pc == 0x2E47C4u) {
        ctx->pc = 0x2E47C4u;
            // 0x2e47c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E47C8u;
        goto label_2e47c8;
    }
    ctx->pc = 0x2E47C0u;
    {
        const bool branch_taken_0x2e47c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E47C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E47C0u;
            // 0x2e47c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e47c0) {
            ctx->pc = 0x2E4858u;
            goto label_2e4858;
        }
    }
    ctx->pc = 0x2E47C8u;
label_2e47c8:
    // 0x2e47c8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2e47c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2e47cc:
    // 0x2e47cc: 0x2442c780  addiu       $v0, $v0, -0x3880
    ctx->pc = 0x2e47ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952832));
label_2e47d0:
    // 0x2e47d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e47d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e47d4:
    // 0x2e47d4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2e47d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e47d8:
    // 0x2e47d8: 0xc041c7a  jal         func_1071E8
label_2e47dc:
    if (ctx->pc == 0x2E47DCu) {
        ctx->pc = 0x2E47DCu;
            // 0x2e47dc: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x2E47E0u;
        goto label_2e47e0;
    }
    ctx->pc = 0x2E47D8u;
    SET_GPR_U32(ctx, 31, 0x2E47E0u);
    ctx->pc = 0x2E47DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E47D8u;
            // 0x2e47dc: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E47E0u; }
        if (ctx->pc != 0x2E47E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E47E0u; }
        if (ctx->pc != 0x2E47E0u) { return; }
    }
    ctx->pc = 0x2E47E0u;
label_2e47e0:
    // 0x2e47e0: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e47e4:
    // 0x2e47e4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e47e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e47e8:
    // 0x2e47e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e47e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e47ec:
    // 0x2e47ec: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2e47ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2e47f0:
    // 0x2e47f0: 0x320f809  jalr        $t9
label_2e47f4:
    if (ctx->pc == 0x2E47F4u) {
        ctx->pc = 0x2E47F4u;
            // 0x2e47f4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2E47F8u;
        goto label_2e47f8;
    }
    ctx->pc = 0x2E47F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E47F8u);
        ctx->pc = 0x2E47F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E47F0u;
            // 0x2e47f4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E47F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E47F8u; }
            if (ctx->pc != 0x2E47F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2E47F8u;
label_2e47f8:
    // 0x2e47f8: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x2e47f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e47fc:
    // 0x2e47fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e47fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e4800:
    // 0x2e4800: 0xc041ccc  jal         func_107330
label_2e4804:
    if (ctx->pc == 0x2E4804u) {
        ctx->pc = 0x2E4804u;
            // 0x2e4804: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4808u;
        goto label_2e4808;
    }
    ctx->pc = 0x2E4800u;
    SET_GPR_U32(ctx, 31, 0x2E4808u);
    ctx->pc = 0x2E4804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4800u;
            // 0x2e4804: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107330u;
    if (runtime->hasFunction(0x107330u)) {
        auto targetFn = runtime->lookupFunction(0x107330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4808u; }
        if (ctx->pc != 0x2E4808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x107330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4808u; }
        if (ctx->pc != 0x2E4808u) { return; }
    }
    ctx->pc = 0x2E4808u;
label_2e4808:
    // 0x2e4808: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x2e4808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e480c:
    // 0x2e480c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e4810:
    // 0x2e4810: 0xc041cf6  jal         func_1073D8
label_2e4814:
    if (ctx->pc == 0x2E4814u) {
        ctx->pc = 0x2E4814u;
            // 0x2e4814: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4818u;
        goto label_2e4818;
    }
    ctx->pc = 0x2E4810u;
    SET_GPR_U32(ctx, 31, 0x2E4818u);
    ctx->pc = 0x2E4814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4810u;
            // 0x2e4814: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4818u; }
        if (ctx->pc != 0x2E4818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4818u; }
        if (ctx->pc != 0x2E4818u) { return; }
    }
    ctx->pc = 0x2E4818u;
label_2e4818:
    // 0x2e4818: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e4818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2e481c:
    // 0x2e481c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e481cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e4820:
    // 0x2e4820: 0xc041bb0  jal         func_106EC0
label_2e4824:
    if (ctx->pc == 0x2E4824u) {
        ctx->pc = 0x2E4824u;
            // 0x2e4824: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4828u;
        goto label_2e4828;
    }
    ctx->pc = 0x2E4820u;
    SET_GPR_U32(ctx, 31, 0x2E4828u);
    ctx->pc = 0x2E4824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4820u;
            // 0x2e4824: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4828u; }
        if (ctx->pc != 0x2E4828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4828u; }
        if (ctx->pc != 0x2E4828u) { return; }
    }
    ctx->pc = 0x2E4828u;
label_2e4828:
    // 0x2e4828: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2e4828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e482c:
    // 0x2e482c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e482cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e4830:
    // 0x2e4830: 0xc0b8cdc  jal         func_2E3370
label_2e4834:
    if (ctx->pc == 0x2E4834u) {
        ctx->pc = 0x2E4834u;
            // 0x2e4834: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E4838u;
        goto label_2e4838;
    }
    ctx->pc = 0x2E4830u;
    SET_GPR_U32(ctx, 31, 0x2E4838u);
    ctx->pc = 0x2E4834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4830u;
            // 0x2e4834: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4838u; }
        if (ctx->pc != 0x2E4838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4838u; }
        if (ctx->pc != 0x2E4838u) { return; }
    }
    ctx->pc = 0x2E4838u;
label_2e4838:
    // 0x2e4838: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x2e4838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e483c:
    // 0x2e483c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e483cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e4840:
    // 0x2e4840: 0xc0b8cdc  jal         func_2E3370
label_2e4844:
    if (ctx->pc == 0x2E4844u) {
        ctx->pc = 0x2E4844u;
            // 0x2e4844: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E4848u;
        goto label_2e4848;
    }
    ctx->pc = 0x2E4840u;
    SET_GPR_U32(ctx, 31, 0x2E4848u);
    ctx->pc = 0x2E4844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4840u;
            // 0x2e4844: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4848u; }
        if (ctx->pc != 0x2E4848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4848u; }
        if (ctx->pc != 0x2E4848u) { return; }
    }
    ctx->pc = 0x2E4848u;
label_2e4848:
    // 0x2e4848: 0xc7ac0078  lwc1        $f12, 0x78($sp)
    ctx->pc = 0x2e4848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e484c:
    // 0x2e484c: 0xc0b8cdc  jal         func_2E3370
label_2e4850:
    if (ctx->pc == 0x2E4850u) {
        ctx->pc = 0x2E4850u;
            // 0x2e4850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4854u;
        goto label_2e4854;
    }
    ctx->pc = 0x2E484Cu;
    SET_GPR_U32(ctx, 31, 0x2E4854u);
    ctx->pc = 0x2E4850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E484Cu;
            // 0x2e4850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4854u; }
        if (ctx->pc != 0x2E4854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4854u; }
        if (ctx->pc != 0x2E4854u) { return; }
    }
    ctx->pc = 0x2E4854u;
label_2e4854:
    // 0x2e4854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4858:
    // 0x2e4858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e485c:
    // 0x2e485c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e485cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4860:
    // 0x2e4860: 0x3e00008  jr          $ra
label_2e4864:
    if (ctx->pc == 0x2E4864u) {
        ctx->pc = 0x2E4864u;
            // 0x2e4864: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2E4868u;
        goto label_fallthrough_0x2e4860;
    }
    ctx->pc = 0x2E4860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4860u;
            // 0x2e4864: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4860:
    ctx->pc = 0x2E4868u;
}
