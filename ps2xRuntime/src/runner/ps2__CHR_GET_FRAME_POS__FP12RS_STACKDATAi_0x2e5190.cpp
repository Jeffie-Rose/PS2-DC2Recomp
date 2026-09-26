#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_GET_FRAME_POS__FP12RS_STACKDATAi
// Address: 0x2e5190 - 0x2e5248
void ps2__CHR_GET_FRAME_POS__FP12RS_STACKDATAi_0x2e5190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_GET_FRAME_POS__FP12RS_STACKDATAi_0x2e5190");
#endif

    switch (ctx->pc) {
        case 0x2e51ccu: goto label_2e51cc;
        case 0x2e51f0u: goto label_2e51f0;
        case 0x2e5208u: goto label_2e5208;
        case 0x2e5218u: goto label_2e5218;
        case 0x2e5228u: goto label_2e5228;
        case 0x2e5234u: goto label_2e5234;
        default: break;
    }

    ctx->pc = 0x2e5190u;

    // 0x2e5190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e5194: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e5194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e5198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e519c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E519Cu;
    {
        const bool branch_taken_0x2e519c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E51A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E519Cu;
            // 0x2e51a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e519c) {
            ctx->pc = 0x2E51ACu;
            goto label_2e51ac;
        }
    }
    ctx->pc = 0x2E51A4u;
    // 0x2e51a4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2E51A4u;
    {
        const bool branch_taken_0x2e51a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E51A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E51A4u;
            // 0x2e51a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51a4) {
            ctx->pc = 0x2E5238u;
            goto label_2e5238;
        }
    }
    ctx->pc = 0x2E51ACu;
label_2e51ac:
    // 0x2e51ac: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e51acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e51b0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e51b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E51B4u;
    {
        const bool branch_taken_0x2e51b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E51B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E51B4u;
            // 0x2e51b8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51b4) {
            ctx->pc = 0x2E51C4u;
            goto label_2e51c4;
        }
    }
    ctx->pc = 0x2E51BCu;
    // 0x2e51bc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2E51BCu;
    {
        const bool branch_taken_0x2e51bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E51C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E51BCu;
            // 0x2e51c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51bc) {
            ctx->pc = 0x2E5238u;
            goto label_2e5238;
        }
    }
    ctx->pc = 0x2E51C4u;
label_2e51c4:
    // 0x2e51c4: 0xc0b8cd0  jal         func_2E3340
    ctx->pc = 0x2E51C4u;
    SET_GPR_U32(ctx, 31, 0x2E51CCu);
    ctx->pc = 0x2E3340u;
    if (runtime->hasFunction(0x2E3340u)) {
        auto targetFn = runtime->lookupFunction(0x2E3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E51CCu; }
        if (ctx->pc != 0x2E51CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2e3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E51CCu; }
        if (ctx->pc != 0x2E51CCu) { return; }
    }
    ctx->pc = 0x2E51CCu;
label_2e51cc:
    // 0x2e51cc: 0x8f839ed0  lw          $v1, -0x6130($gp)
    ctx->pc = 0x2e51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e51d0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2e51d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e51d4: 0x8c640070  lw          $a0, 0x70($v1)
    ctx->pc = 0x2e51d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2e51d8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E51D8u;
    {
        const bool branch_taken_0x2e51d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E51DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E51D8u;
            // 0x2e51dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51d8) {
            ctx->pc = 0x2E51E8u;
            goto label_2e51e8;
        }
    }
    ctx->pc = 0x2E51E0u;
    // 0x2e51e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E51E0u;
    {
        const bool branch_taken_0x2e51e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E51E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E51E0u;
            // 0x2e51e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51e0) {
            ctx->pc = 0x2E5238u;
            goto label_2e5238;
        }
    }
    ctx->pc = 0x2E51E8u;
label_2e51e8:
    // 0x2e51e8: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2E51E8u;
    SET_GPR_U32(ctx, 31, 0x2E51F0u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E51F0u; }
        if (ctx->pc != 0x2E51F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E51F0u; }
        if (ctx->pc != 0x2E51F0u) { return; }
    }
    ctx->pc = 0x2E51F0u;
label_2e51f0:
    // 0x2e51f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E51F0u;
    {
        const bool branch_taken_0x2e51f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E51F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E51F0u;
            // 0x2e51f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51f0) {
            ctx->pc = 0x2E5200u;
            goto label_2e5200;
        }
    }
    ctx->pc = 0x2E51F8u;
    // 0x2e51f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E51F8u;
    {
        const bool branch_taken_0x2e51f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E51FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E51F8u;
            // 0x2e51fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51f8) {
            ctx->pc = 0x2E5238u;
            goto label_2e5238;
        }
    }
    ctx->pc = 0x2E5200u;
label_2e5200:
    // 0x2e5200: 0xc04de0c  jal         func_137830
    ctx->pc = 0x2E5200u;
    SET_GPR_U32(ctx, 31, 0x2E5208u);
    ctx->pc = 0x2E5204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5200u;
            // 0x2e5204: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5208u; }
        if (ctx->pc != 0x2E5208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5208u; }
        if (ctx->pc != 0x2E5208u) { return; }
    }
    ctx->pc = 0x2E5208u;
label_2e5208:
    // 0x2e5208: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2e5208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e520c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e520cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5210: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E5210u;
    SET_GPR_U32(ctx, 31, 0x2E5218u);
    ctx->pc = 0x2E5214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5210u;
            // 0x2e5214: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5218u; }
        if (ctx->pc != 0x2E5218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5218u; }
        if (ctx->pc != 0x2E5218u) { return; }
    }
    ctx->pc = 0x2E5218u;
label_2e5218:
    // 0x2e5218: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2e5218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e521c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e521cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5220: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E5220u;
    SET_GPR_U32(ctx, 31, 0x2E5228u);
    ctx->pc = 0x2E5224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5220u;
            // 0x2e5224: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5228u; }
        if (ctx->pc != 0x2E5228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5228u; }
        if (ctx->pc != 0x2E5228u) { return; }
    }
    ctx->pc = 0x2E5228u;
label_2e5228:
    // 0x2e5228: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2e5228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e522c: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E522Cu;
    SET_GPR_U32(ctx, 31, 0x2E5234u);
    ctx->pc = 0x2E5230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E522Cu;
            // 0x2e5230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5234u; }
        if (ctx->pc != 0x2E5234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5234u; }
        if (ctx->pc != 0x2E5234u) { return; }
    }
    ctx->pc = 0x2E5234u;
label_2e5234:
    // 0x2e5234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5238:
    // 0x2e5238: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e523c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e523cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5240: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5240u;
            // 0x2e5244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5248u;
}
