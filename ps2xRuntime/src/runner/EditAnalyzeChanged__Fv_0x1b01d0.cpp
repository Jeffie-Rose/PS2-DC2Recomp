#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditAnalyzeChanged__Fv
// Address: 0x1b01d0 - 0x1b0280
void EditAnalyzeChanged__Fv_0x1b01d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditAnalyzeChanged__Fv_0x1b01d0");
#endif

    switch (ctx->pc) {
        case 0x1b01e8u: goto label_1b01e8;
        case 0x1b01f0u: goto label_1b01f0;
        case 0x1b020cu: goto label_1b020c;
        case 0x1b0218u: goto label_1b0218;
        case 0x1b0224u: goto label_1b0224;
        case 0x1b0234u: goto label_1b0234;
        default: break;
    }

    ctx->pc = 0x1b01d0u;

    // 0x1b01d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b01d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b01d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b01d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b01d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b01d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b01dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b01dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b01e0: 0xc064220  jal         func_190880
    ctx->pc = 0x1B01E0u;
    SET_GPR_U32(ctx, 31, 0x1B01E8u);
    ctx->pc = 0x1B01E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B01E0u;
            // 0x1b01e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B01E8u; }
        if (ctx->pc != 0x1B01E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B01E8u; }
        if (ctx->pc != 0x1B01E8u) { return; }
    }
    ctx->pc = 0x1B01E8u;
label_1b01e8:
    // 0x1b01e8: 0xc0c69d0  jal         func_31A740
    ctx->pc = 0x1B01E8u;
    SET_GPR_U32(ctx, 31, 0x1B01F0u);
    ctx->pc = 0x1B01ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B01E8u;
            // 0x1b01ec: 0x8c441a08  lw          $a0, 0x1A08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6664)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A740u;
    if (runtime->hasFunction(0x31A740u)) {
        auto targetFn = runtime->lookupFunction(0x31A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B01F0u; }
        if (ctx->pc != 0x1B01F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameChapter__Fi_0x31a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B01F0u; }
        if (ctx->pc != 0x1B01F0u) { return; }
    }
    ctx->pc = 0x1B01F0u;
label_1b01f0:
    // 0x1b01f0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1b01f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b01f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B01F4u;
    {
        const bool branch_taken_0x1b01f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B01F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B01F4u;
            // 0x1b01f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01f4) {
            ctx->pc = 0x1B0204u;
            goto label_1b0204;
        }
    }
    ctx->pc = 0x1B01FCu;
    // 0x1b01fc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1B01FCu;
    {
        const bool branch_taken_0x1b01fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B01FCu;
            // 0x1b0200: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01fc) {
            ctx->pc = 0x1B026Cu;
            goto label_1b026c;
        }
    }
    ctx->pc = 0x1B0204u;
label_1b0204:
    // 0x1b0204: 0xc064220  jal         func_190880
    ctx->pc = 0x1B0204u;
    SET_GPR_U32(ctx, 31, 0x1B020Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B020Cu; }
        if (ctx->pc != 0x1B020Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B020Cu; }
        if (ctx->pc != 0x1B020Cu) { return; }
    }
    ctx->pc = 0x1B020Cu;
label_1b020c:
    // 0x1b020c: 0x8f858c58  lw          $a1, -0x73A8($gp)
    ctx->pc = 0x1b020cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
    // 0x1b0210: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x1B0210u;
    SET_GPR_U32(ctx, 31, 0x1B0218u);
    ctx->pc = 0x1B0214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0210u;
            // 0x1b0214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0218u; }
        if (ctx->pc != 0x1B0218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0218u; }
        if (ctx->pc != 0x1B0218u) { return; }
    }
    ctx->pc = 0x1B0218u;
label_1b0218:
    // 0x1b0218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b0218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b021c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b021cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0220: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b0220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0224:
    // 0x1b0224: 0x8f858c58  lw          $a1, -0x73A8($gp)
    ctx->pc = 0x1b0224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
    // 0x1b0228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b022c: 0xc0aa894  jal         func_2AA250
    ctx->pc = 0x1B022Cu;
    SET_GPR_U32(ctx, 31, 0x1B0234u);
    ctx->pc = 0x1B0230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B022Cu;
            // 0x1b0230: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA250u;
    if (runtime->hasFunction(0x2AA250u)) {
        auto targetFn = runtime->lookupFunction(0x2AA250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0234u; }
        if (ctx->pc != 0x1B0234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeFlag__9CEditDataFii_0x2aa250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0234u; }
        if (ctx->pc != 0x1B0234u) { return; }
    }
    ctx->pc = 0x1B0234u;
label_1b0234:
    // 0x1b0234: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1b0234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
    // 0x1b0238: 0x2463f0f0  addiu       $v1, $v1, -0xF10
    ctx->pc = 0x1b0238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x1b023c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1b023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1b0240: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b0240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0244: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0244u;
    {
        const bool branch_taken_0x1b0244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B0248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0244u;
            // 0x1b0248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0244) {
            ctx->pc = 0x1B0254u;
            goto label_1b0254;
        }
    }
    ctx->pc = 0x1B024Cu;
    // 0x1b024c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B024Cu;
    {
        const bool branch_taken_0x1b024c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b024c) {
            ctx->pc = 0x1B0268u;
            goto label_1b0268;
        }
    }
    ctx->pc = 0x1B0254u;
label_1b0254:
    // 0x1b0254: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b0254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b0258: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x1b0258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b025c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1B025Cu;
    {
        const bool branch_taken_0x1b025c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B025Cu;
            // 0x1b0260: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b025c) {
            ctx->pc = 0x1B0224u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0224;
        }
    }
    ctx->pc = 0x1B0264u;
    // 0x1b0264: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b0264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0268:
    // 0x1b0268: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b0268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b026c:
    // 0x1b026c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b026cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0278: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B027Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0278u;
            // 0x1b027c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0280u;
}
