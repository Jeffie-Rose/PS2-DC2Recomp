#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SW_EFFECT__FP12RS_STACKDATAi
// Address: 0x2cf1b0 - 0x2cf378
void ps2__SW_EFFECT__FP12RS_STACKDATAi_0x2cf1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SW_EFFECT__FP12RS_STACKDATAi_0x2cf1b0");
#endif

    switch (ctx->pc) {
        case 0x2cf210u: goto label_2cf210;
        case 0x2cf22cu: goto label_2cf22c;
        case 0x2cf274u: goto label_2cf274;
        case 0x2cf284u: goto label_2cf284;
        case 0x2cf294u: goto label_2cf294;
        case 0x2cf2a4u: goto label_2cf2a4;
        case 0x2cf2b4u: goto label_2cf2b4;
        case 0x2cf2c4u: goto label_2cf2c4;
        case 0x2cf2d4u: goto label_2cf2d4;
        case 0x2cf2e4u: goto label_2cf2e4;
        case 0x2cf2fcu: goto label_2cf2fc;
        default: break;
    }

    ctx->pc = 0x2cf1b0u;

    // 0x2cf1b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2cf1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2cf1b4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2cf1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2cf1b8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2cf1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2cf1bc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2cf1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2cf1c0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2cf1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2cf1c4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2cf1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2cf1c8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2cf1c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf1cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2cf1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2cf1d0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2cf1d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf1d4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2cf1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2cf1d8: 0x2aa20009  slti        $v0, $s5, 0x9
    ctx->pc = 0x2cf1d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2cf1dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cf1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2cf1e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cf1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cf1e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cf1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cf1e8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2cf1e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cf1ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF1ECu;
    {
        const bool branch_taken_0x2cf1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF1ECu;
            // 0x2cf1f0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf1ec) {
            ctx->pc = 0x2CF200u;
            goto label_2cf200;
        }
    }
    ctx->pc = 0x2CF1F4u;
    // 0x2cf1f4: 0x2aa1000b  slti        $at, $s5, 0xB
    ctx->pc = 0x2cf1f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2cf1f8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF1F8u;
    {
        const bool branch_taken_0x2cf1f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF1F8u;
            // 0x2cf1fc: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf1f8) {
            ctx->pc = 0x2CF208u;
            goto label_2cf208;
        }
    }
    ctx->pc = 0x2CF200u;
label_2cf200:
    // 0x2cf200: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2CF200u;
    {
        const bool branch_taken_0x2cf200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF200u;
            // 0x2cf204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf200) {
            ctx->pc = 0x2CF340u;
            goto label_2cf340;
        }
    }
    ctx->pc = 0x2CF208u;
label_2cf208:
    // 0x2cf208: 0xc05aa8c  jal         func_16AA30
    ctx->pc = 0x2CF208u;
    SET_GPR_U32(ctx, 31, 0x2CF210u);
    ctx->pc = 0x2CF20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF208u;
            // 0x2cf20c: 0x8c24d430  lw          $a0, -0x2BD0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AA30u;
    if (runtime->hasFunction(0x16AA30u)) {
        auto targetFn = runtime->lookupFunction(0x16AA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF210u; }
        if (ctx->pc != 0x2CF210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSwEffectPtr__12CActionCharaFv_0x16aa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF210u; }
        if (ctx->pc != 0x2CF210u) { return; }
    }
    ctx->pc = 0x2CF210u;
label_2cf210:
    // 0x2cf210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf214: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF214u;
    {
        const bool branch_taken_0x2cf214 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF214u;
            // 0x2cf218: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf214) {
            ctx->pc = 0x2CF224u;
            goto label_2cf224;
        }
    }
    ctx->pc = 0x2CF21Cu;
    // 0x2cf21c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2CF21Cu;
    {
        const bool branch_taken_0x2cf21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF21Cu;
            // 0x2cf220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf21c) {
            ctx->pc = 0x2CF340u;
            goto label_2cf340;
        }
    }
    ctx->pc = 0x2CF224u;
label_2cf224:
    // 0x2cf224: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CF224u;
    SET_GPR_U32(ctx, 31, 0x2CF22Cu);
    ctx->pc = 0x2CF228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF224u;
            // 0x2cf228: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF22Cu; }
        if (ctx->pc != 0x2CF22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF22Cu; }
        if (ctx->pc != 0x2CF22Cu) { return; }
    }
    ctx->pc = 0x2CF22Cu;
label_2cf22c:
    // 0x2cf22c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cf22cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf230: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF230u;
    {
        const bool branch_taken_0x2cf230 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2CF234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF230u;
            // 0x2cf234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf230) {
            ctx->pc = 0x2CF244u;
            goto label_2cf244;
        }
    }
    ctx->pc = 0x2CF238u;
    // 0x2cf238: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x2cf238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2cf23c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF23Cu;
    {
        const bool branch_taken_0x2cf23c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF23Cu;
            // 0x2cf240: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf23c) {
            ctx->pc = 0x2CF24Cu;
            goto label_2cf24c;
        }
    }
    ctx->pc = 0x2CF244u;
label_2cf244:
    // 0x2cf244: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2CF244u;
    {
        const bool branch_taken_0x2cf244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF244u;
            // 0x2cf248: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf244) {
            ctx->pc = 0x2CF344u;
            goto label_2cf344;
        }
    }
    ctx->pc = 0x2CF24Cu;
label_2cf24c:
    // 0x2cf24c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2cf24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2cf250: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cf250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cf254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cf258: 0x8c420570  lw          $v0, 0x570($v0)
    ctx->pc = 0x2cf258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    // 0x2cf25c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF25Cu;
    {
        const bool branch_taken_0x2cf25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF25Cu;
            // 0x2cf260: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf25c) {
            ctx->pc = 0x2CF26Cu;
            goto label_2cf26c;
        }
    }
    ctx->pc = 0x2CF264u;
    // 0x2cf264: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2CF264u;
    {
        const bool branch_taken_0x2cf264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF264u;
            // 0x2cf268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf264) {
            ctx->pc = 0x2CF340u;
            goto label_2cf340;
        }
    }
    ctx->pc = 0x2CF26Cu;
label_2cf26c:
    // 0x2cf26c: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CF26Cu;
    SET_GPR_U32(ctx, 31, 0x2CF274u);
    ctx->pc = 0x2CF270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF26Cu;
            // 0x2cf270: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF274u; }
        if (ctx->pc != 0x2CF274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF274u; }
        if (ctx->pc != 0x2CF274u) { return; }
    }
    ctx->pc = 0x2CF274u;
label_2cf274:
    // 0x2cf274: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cf274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf278: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2cf278u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf27c: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2CF27Cu;
    SET_GPR_U32(ctx, 31, 0x2CF284u);
    ctx->pc = 0x2CF280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF27Cu;
            // 0x2cf280: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF284u; }
        if (ctx->pc != 0x2CF284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF284u; }
        if (ctx->pc != 0x2CF284u) { return; }
    }
    ctx->pc = 0x2CF284u;
label_2cf284:
    // 0x2cf284: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cf284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf288: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2cf288u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf28c: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2CF28Cu;
    SET_GPR_U32(ctx, 31, 0x2CF294u);
    ctx->pc = 0x2CF290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF28Cu;
            // 0x2cf290: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF294u; }
        if (ctx->pc != 0x2CF294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF294u; }
        if (ctx->pc != 0x2CF294u) { return; }
    }
    ctx->pc = 0x2CF294u;
label_2cf294:
    // 0x2cf294: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cf294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf298: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2cf298u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf29c: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CF29Cu;
    SET_GPR_U32(ctx, 31, 0x2CF2A4u);
    ctx->pc = 0x2CF2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF29Cu;
            // 0x2cf2a0: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2A4u; }
        if (ctx->pc != 0x2CF2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2A4u; }
        if (ctx->pc != 0x2CF2A4u) { return; }
    }
    ctx->pc = 0x2CF2A4u;
label_2cf2a4:
    // 0x2cf2a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cf2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2a8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2cf2a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2ac: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CF2ACu;
    SET_GPR_U32(ctx, 31, 0x2CF2B4u);
    ctx->pc = 0x2CF2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF2ACu;
            // 0x2cf2b0: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2B4u; }
        if (ctx->pc != 0x2CF2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2B4u; }
        if (ctx->pc != 0x2CF2B4u) { return; }
    }
    ctx->pc = 0x2CF2B4u;
label_2cf2b4:
    // 0x2cf2b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cf2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cf2b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2bc: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CF2BCu;
    SET_GPR_U32(ctx, 31, 0x2CF2C4u);
    ctx->pc = 0x2CF2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF2BCu;
            // 0x2cf2c0: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2C4u; }
        if (ctx->pc != 0x2CF2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2C4u; }
        if (ctx->pc != 0x2CF2C4u) { return; }
    }
    ctx->pc = 0x2CF2C4u;
label_2cf2c4:
    // 0x2cf2c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cf2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cf2c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2cc: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CF2CCu;
    SET_GPR_U32(ctx, 31, 0x2CF2D4u);
    ctx->pc = 0x2CF2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF2CCu;
            // 0x2cf2d0: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2D4u; }
        if (ctx->pc != 0x2CF2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2D4u; }
        if (ctx->pc != 0x2CF2D4u) { return; }
    }
    ctx->pc = 0x2CF2D4u;
label_2cf2d4:
    // 0x2cf2d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cf2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2cf2d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2dc: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CF2DCu;
    SET_GPR_U32(ctx, 31, 0x2CF2E4u);
    ctx->pc = 0x2CF2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF2DCu;
            // 0x2cf2e0: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2E4u; }
        if (ctx->pc != 0x2CF2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2E4u; }
        if (ctx->pc != 0x2CF2E4u) { return; }
    }
    ctx->pc = 0x2CF2E4u;
label_2cf2e4:
    // 0x2cf2e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cf2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2e8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2cf2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cf2ec: 0x16a30003  bne         $s5, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF2ECu;
    {
        const bool branch_taken_0x2cf2ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CF2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF2ECu;
            // 0x2cf2f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf2ec) {
            ctx->pc = 0x2CF2FCu;
            goto label_2cf2fc;
        }
    }
    ctx->pc = 0x2CF2F4u;
    // 0x2cf2f4: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CF2F4u;
    SET_GPR_U32(ctx, 31, 0x2CF2FCu);
    ctx->pc = 0x2CF2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF2F4u;
            // 0x2cf2f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2FCu; }
        if (ctx->pc != 0x2CF2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2FCu; }
        if (ctx->pc != 0x2CF2FCu) { return; }
    }
    ctx->pc = 0x2CF2FCu;
label_2cf2fc:
    // 0x2cf2fc: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x2cf2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x2cf300: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf304: 0xae1e0008  sw          $fp, 0x8($s0)
    ctx->pc = 0x2cf304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 30));
    // 0x2cf308: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2cf308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2cf30c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x2cf30cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2cf310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf314: 0xe6150010  swc1        $f21, 0x10($s0)
    ctx->pc = 0x2cf314u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2cf318: 0xae170014  sw          $s7, 0x14($s0)
    ctx->pc = 0x2cf318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 23));
    // 0x2cf31c: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x2cf31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x2cf320: 0xa213001c  sb          $s3, 0x1C($s0)
    ctx->pc = 0x2cf320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 19));
    // 0x2cf324: 0xa214001d  sb          $s4, 0x1D($s0)
    ctx->pc = 0x2cf324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 20));
    // 0x2cf328: 0xa205001e  sb          $a1, 0x1E($s0)
    ctx->pc = 0x2cf328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cf32c: 0xa200001f  sb          $zero, 0x1F($s0)
    ctx->pc = 0x2cf32cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf330: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cf330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf334: 0x80830904  lb          $v1, 0x904($a0)
    ctx->pc = 0x2cf334u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2308)));
    // 0x2cf338: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cf338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cf33c: 0xa0830904  sb          $v1, 0x904($a0)
    ctx->pc = 0x2cf33cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2308), (uint8_t)GPR_U32(ctx, 3));
label_2cf340:
    // 0x2cf340: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2cf340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2cf344:
    // 0x2cf344: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2cf344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cf348: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2cf348u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cf34c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cf34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cf350: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2cf350u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cf354: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2cf354u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cf358: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2cf358u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cf35c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2cf35cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cf360: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cf360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cf364: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cf364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf368: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cf368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf36c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cf36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf370: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF370u;
            // 0x2cf374: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF378u;
}
