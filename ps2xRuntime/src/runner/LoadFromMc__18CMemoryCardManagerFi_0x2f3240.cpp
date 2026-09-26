#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFromMc__18CMemoryCardManagerFi
// Address: 0x2f3240 - 0x2f368c
void LoadFromMc__18CMemoryCardManagerFi_0x2f3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFromMc__18CMemoryCardManagerFi_0x2f3240");
#endif

    switch (ctx->pc) {
        case 0x2f32c0u: goto label_2f32c0;
        case 0x2f32f8u: goto label_2f32f8;
        case 0x2f3314u: goto label_2f3314;
        case 0x2f3334u: goto label_2f3334;
        case 0x2f3348u: goto label_2f3348;
        case 0x2f3378u: goto label_2f3378;
        case 0x2f3394u: goto label_2f3394;
        case 0x2f33b0u: goto label_2f33b0;
        case 0x2f33e0u: goto label_2f33e0;
        case 0x2f33fcu: goto label_2f33fc;
        case 0x2f3450u: goto label_2f3450;
        case 0x2f3488u: goto label_2f3488;
        case 0x2f349cu: goto label_2f349c;
        case 0x2f34b8u: goto label_2f34b8;
        case 0x2f34e8u: goto label_2f34e8;
        case 0x2f34f4u: goto label_2f34f4;
        case 0x2f3518u: goto label_2f3518;
        case 0x2f3548u: goto label_2f3548;
        case 0x2f3578u: goto label_2f3578;
        case 0x2f3598u: goto label_2f3598;
        case 0x2f35b4u: goto label_2f35b4;
        case 0x2f361cu: goto label_2f361c;
        case 0x2f3644u: goto label_2f3644;
        default: break;
    }

    ctx->pc = 0x2f3240u;

    // 0x2f3240: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2f3240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2f3244: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f3244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f3248: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f3248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f324c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f3250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f3254: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f3254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f3258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f325c: 0x8c8304c8  lw          $v1, 0x4C8($a0)
    ctx->pc = 0x2f325cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1224)));
    // 0x2f3260: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3260u;
    {
        const bool branch_taken_0x2f3260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3260u;
            // 0x2f3264: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3260) {
            ctx->pc = 0x2F3274u;
            goto label_2f3274;
        }
    }
    ctx->pc = 0x2F3268u;
    // 0x2f3268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f326c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F326Cu;
    {
        const bool branch_taken_0x2f326c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F326Cu;
            // 0x2f3270: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f326c) {
            ctx->pc = 0x2F3280u;
            goto label_2f3280;
        }
    }
    ctx->pc = 0x2F3274u;
label_2f3274:
    // 0x2f3274: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2f3274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2f3278: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2f3278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2f327c: 0x24500d5c  addiu       $s0, $v0, 0xD5C
    ctx->pc = 0x2f327cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2f3280:
    // 0x2f3280: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2f3280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f3284: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f3284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f3288: 0x10620081  beq         $v1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2F3288u;
    {
        const bool branch_taken_0x2f3288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F328Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3288u;
            // 0x2f328c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3288) {
            ctx->pc = 0x2F3490u;
            goto label_2f3490;
        }
    }
    ctx->pc = 0x2F3290u;
    // 0x2f3290: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f3290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f3294: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2F3294u;
    {
        const bool branch_taken_0x2f3294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3294u;
            // 0x2f3298: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3294) {
            ctx->pc = 0x2F33D4u;
            goto label_2f33d4;
        }
    }
    ctx->pc = 0x2F329Cu;
    // 0x2f329c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f329cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f32a0: 0x10640033  beq         $v1, $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2F32A0u;
    {
        const bool branch_taken_0x2f32a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F32A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F32A0u;
            // 0x2f32a4: 0x27a500dc  addiu       $a1, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32a0) {
            ctx->pc = 0x2F3370u;
            goto label_2f3370;
        }
    }
    ctx->pc = 0x2F32A8u;
    // 0x2f32a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F32A8u;
    {
        const bool branch_taken_0x2f32a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F32A8u;
            // 0x2f32ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32a8) {
            ctx->pc = 0x2F32B8u;
            goto label_2f32b8;
        }
    }
    ctx->pc = 0x2F32B0u;
    // 0x2f32b0: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x2F32B0u;
    {
        const bool branch_taken_0x2f32b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F32B0u;
            // 0x2f32b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32b0) {
            ctx->pc = 0x2F3670u;
            goto label_2f3670;
        }
    }
    ctx->pc = 0x2F32B8u;
label_2f32b8:
    // 0x2f32b8: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F32B8u;
    SET_GPR_U32(ctx, 31, 0x2F32C0u);
    ctx->pc = 0x2F32BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F32B8u;
            // 0x2f32bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F32C0u; }
        if (ctx->pc != 0x2F32C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F32C0u; }
        if (ctx->pc != 0x2F32C0u) { return; }
    }
    ctx->pc = 0x2F32C0u;
label_2f32c0:
    // 0x2f32c0: 0x104000ea  beqz        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x2F32C0u;
    {
        const bool branch_taken_0x2f32c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f32c0) {
            ctx->pc = 0x2F366Cu;
            goto label_2f366c;
        }
    }
    ctx->pc = 0x2F32C8u;
    // 0x2f32c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f32c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f32cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F32CCu;
    {
        const bool branch_taken_0x2f32cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F32CCu;
            // 0x2f32d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32cc) {
            ctx->pc = 0x2F32E8u;
            goto label_2f32e8;
        }
    }
    ctx->pc = 0x2F32D4u;
    // 0x2f32d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2f32d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f32d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f32dc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F32DCu;
    {
        const bool branch_taken_0x2f32dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F32E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F32DCu;
            // 0x2f32e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32dc) {
            ctx->pc = 0x2F32F0u;
            goto label_2f32f0;
        }
    }
    ctx->pc = 0x2F32E4u;
    // 0x2f32e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f32e8:
    // 0x2f32e8: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x2F32E8u;
    {
        const bool branch_taken_0x2f32e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F32E8u;
            // 0x2f32ec: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32e8) {
            ctx->pc = 0x2F3674u;
            goto label_2f3674;
        }
    }
    ctx->pc = 0x2F32F0u;
label_2f32f0:
    // 0x2f32f0: 0xc0bc64c  jal         func_2F1930
    ctx->pc = 0x2F32F0u;
    SET_GPR_U32(ctx, 31, 0x2F32F8u);
    ctx->pc = 0x2F1930u;
    if (runtime->hasFunction(0x2F1930u)) {
        auto targetFn = runtime->lookupFunction(0x2F1930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F32F8u; }
        if (ctx->pc != 0x2F32F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitError__18CMemoryCardManagerFv_0x2f1930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F32F8u; }
        if (ctx->pc != 0x2F32F8u) { return; }
    }
    ctx->pc = 0x2F32F8u;
label_2f32f8:
    // 0x2f32f8: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2f32f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x2f32fc: 0x344259c0  ori         $v0, $v0, 0x59C0
    ctx->pc = 0x2f32fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22976);
    // 0x2f3300: 0xae420918  sw          $v0, 0x918($s2)
    ctx->pc = 0x2f3300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2328), GPR_U32(ctx, 2));
    // 0x2f3304: 0x8e4408ec  lw          $a0, 0x8EC($s2)
    ctx->pc = 0x2f3304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2284)));
    // 0x2f3308: 0x8e460918  lw          $a2, 0x918($s2)
    ctx->pc = 0x2f3308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2328)));
    // 0x2f330c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F330Cu;
    SET_GPR_U32(ctx, 31, 0x2F3314u);
    ctx->pc = 0x2F3310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F330Cu;
            // 0x2f3310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3314u; }
        if (ctx->pc != 0x2F3314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3314u; }
        if (ctx->pc != 0x2F3314u) { return; }
    }
    ctx->pc = 0x2F3314u;
label_2f3314:
    // 0x2f3314: 0xae40091c  sw          $zero, 0x91C($s2)
    ctx->pc = 0x2f3314u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2332), GPR_U32(ctx, 0));
    // 0x2f3318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f3318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f331c: 0xae400910  sw          $zero, 0x910($s2)
    ctx->pc = 0x2f331cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2320), GPR_U32(ctx, 0));
    // 0x2f3320: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2f3320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3324: 0xae400914  sw          $zero, 0x914($s2)
    ctx->pc = 0x2f3324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2324), GPR_U32(ctx, 0));
    // 0x2f3328: 0x8e4208ec  lw          $v0, 0x8EC($s2)
    ctx->pc = 0x2f3328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2284)));
    // 0x2f332c: 0xc0bc50c  jal         func_2F1430
    ctx->pc = 0x2F332Cu;
    SET_GPR_U32(ctx, 31, 0x2F3334u);
    ctx->pc = 0x2F3330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F332Cu;
            // 0x2f3330: 0xae4204e8  sw          $v0, 0x4E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1430u;
    if (runtime->hasFunction(0x2F1430u)) {
        auto targetFn = runtime->lookupFunction(0x2F1430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3334u; }
        if (ctx->pc != 0x2F3334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMemoryCardFileName__FiPc_0x2f1430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3334u; }
        if (ctx->pc != 0x2F3334u) { return; }
    }
    ctx->pc = 0x2F3334u;
label_2f3334:
    // 0x2f3334: 0x8e4404c8  lw          $a0, 0x4C8($s2)
    ctx->pc = 0x2f3334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1224)));
    // 0x2f3338: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f333c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f333cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3340: 0xc0489d2  jal         func_122748
    ctx->pc = 0x2F3340u;
    SET_GPR_U32(ctx, 31, 0x2F3348u);
    ctx->pc = 0x2F3344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3340u;
            // 0x2f3344: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3348u; }
        if (ctx->pc != 0x2F3348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3348u; }
        if (ctx->pc != 0x2F3348u) { return; }
    }
    ctx->pc = 0x2F3348u;
label_2f3348:
    // 0x2f3348: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2f3348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f334c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f3350: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x2F3350u;
    {
        const bool branch_taken_0x2f3350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3350u;
            // 0x2f3354: 0xae430058  sw          $v1, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3350) {
            ctx->pc = 0x2F366Cu;
            goto label_2f366c;
        }
    }
    ctx->pc = 0x2F3358u;
    // 0x2f3358: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x2f3358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x2f335c: 0x104300c3  beq         $v0, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2F335Cu;
    {
        const bool branch_taken_0x2f335c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F3360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F335Cu;
            // 0x2f3360: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f335c) {
            ctx->pc = 0x2F366Cu;
            goto label_2f366c;
        }
    }
    ctx->pc = 0x2F3364u;
    // 0x2f3364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3368: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x2F3368u;
    {
        const bool branch_taken_0x2f3368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F336Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3368u;
            // 0x2f336c: 0xae4304d0  sw          $v1, 0x4D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3368) {
            ctx->pc = 0x2F3670u;
            goto label_2f3670;
        }
    }
    ctx->pc = 0x2F3370u;
label_2f3370:
    // 0x2f3370: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3370u;
    SET_GPR_U32(ctx, 31, 0x2F3378u);
    ctx->pc = 0x2F3374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3370u;
            // 0x2f3374: 0x27a600d8  addiu       $a2, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3378u; }
        if (ctx->pc != 0x2F3378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3378u; }
        if (ctx->pc != 0x2F3378u) { return; }
    }
    ctx->pc = 0x2F3378u;
label_2f3378:
    // 0x2f3378: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x2F3378u;
    {
        const bool branch_taken_0x2f3378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3378) {
            ctx->pc = 0x2F366Cu;
            goto label_2f366c;
        }
    }
    ctx->pc = 0x2F3380u;
    // 0x2f3380: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x2f3380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2f3384: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3384u;
    {
        const bool branch_taken_0x2f3384 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F3388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3384u;
            // 0x2f3388: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3384) {
            ctx->pc = 0x2F339Cu;
            goto label_2f339c;
        }
    }
    ctx->pc = 0x2F338Cu;
    // 0x2f338c: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F338Cu;
    SET_GPR_U32(ctx, 31, 0x2F3394u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3394u; }
        if (ctx->pc != 0x2F3394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3394u; }
        if (ctx->pc != 0x2F3394u) { return; }
    }
    ctx->pc = 0x2F3394u;
label_2f3394:
    // 0x2f3394: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x2F3394u;
    {
        const bool branch_taken_0x2f3394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3394u;
            // 0x2f3398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3394) {
            ctx->pc = 0x2F3670u;
            goto label_2f3670;
        }
    }
    ctx->pc = 0x2F339Cu;
label_2f339c:
    // 0x2f339c: 0xae45005c  sw          $a1, 0x5C($s2)
    ctx->pc = 0x2f339cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 5));
    // 0x2f33a0: 0x8e4504e8  lw          $a1, 0x4E8($s2)
    ctx->pc = 0x2f33a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1256)));
    // 0x2f33a4: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x2f33a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2f33a8: 0xc048ab6  jal         func_122AD8
    ctx->pc = 0x2F33A8u;
    SET_GPR_U32(ctx, 31, 0x2F33B0u);
    ctx->pc = 0x2F33ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F33A8u;
            // 0x2f33ac: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122AD8u;
    if (runtime->hasFunction(0x122AD8u)) {
        auto targetFn = runtime->lookupFunction(0x122AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F33B0u; }
        if (ctx->pc != 0x2F33B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRead_0x122ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F33B0u; }
        if (ctx->pc != 0x2F33B0u) { return; }
    }
    ctx->pc = 0x2F33B0u;
label_2f33b0:
    // 0x2f33b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F33B0u;
    {
        const bool branch_taken_0x2f33b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F33B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F33B0u;
            // 0x2f33b4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33b0) {
            ctx->pc = 0x2F33C8u;
            goto label_2f33c8;
        }
    }
    ctx->pc = 0x2F33B8u;
    // 0x2f33b8: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2f33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f33bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f33c0: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2F33C0u;
    {
        const bool branch_taken_0x2f33c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F33C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F33C0u;
            // 0x2f33c4: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33c0) {
            ctx->pc = 0x2F366Cu;
            goto label_2f366c;
        }
    }
    ctx->pc = 0x2F33C8u;
label_2f33c8:
    // 0x2f33c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f33cc: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2F33CCu;
    {
        const bool branch_taken_0x2f33cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F33D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F33CCu;
            // 0x2f33d0: 0xae4304d0  sw          $v1, 0x4D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33cc) {
            ctx->pc = 0x2F3670u;
            goto label_2f3670;
        }
    }
    ctx->pc = 0x2F33D4u;
label_2f33d4:
    // 0x2f33d4: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x2f33d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x2f33d8: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F33D8u;
    SET_GPR_U32(ctx, 31, 0x2F33E0u);
    ctx->pc = 0x2F33DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F33D8u;
            // 0x2f33dc: 0x2646091c  addiu       $a2, $s2, 0x91C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F33E0u; }
        if (ctx->pc != 0x2F33E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F33E0u; }
        if (ctx->pc != 0x2F33E0u) { return; }
    }
    ctx->pc = 0x2F33E0u;
label_2f33e0:
    // 0x2f33e0: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2F33E0u;
    {
        const bool branch_taken_0x2f33e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f33e0) {
            ctx->pc = 0x2F366Cu;
            goto label_2f366c;
        }
    }
    ctx->pc = 0x2F33E8u;
    // 0x2f33e8: 0x8e45091c  lw          $a1, 0x91C($s2)
    ctx->pc = 0x2f33e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2332)));
    // 0x2f33ec: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F33ECu;
    {
        const bool branch_taken_0x2f33ec = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F33F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F33ECu;
            // 0x2f33f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33ec) {
            ctx->pc = 0x2F340Cu;
            goto label_2f340c;
        }
    }
    ctx->pc = 0x2F33F4u;
    // 0x2f33f4: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F33F4u;
    SET_GPR_U32(ctx, 31, 0x2F33FCu);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F33FCu; }
        if (ctx->pc != 0x2F33FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F33FCu; }
        if (ctx->pc != 0x2F33FCu) { return; }
    }
    ctx->pc = 0x2F33FCu;
label_2f33fc:
    // 0x2f33fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f33fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f3400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3404: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x2F3404u;
    {
        const bool branch_taken_0x2f3404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3404u;
            // 0x2f3408: 0xae4304d0  sw          $v1, 0x4D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3404) {
            ctx->pc = 0x2F3670u;
            goto label_2f3670;
        }
    }
    ctx->pc = 0x2F340Cu;
label_2f340c:
    // 0x2f340c: 0x8e420910  lw          $v0, 0x910($s2)
    ctx->pc = 0x2f340cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2320)));
    // 0x2f3410: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f3410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f3414: 0xae420910  sw          $v0, 0x910($s2)
    ctx->pc = 0x2f3414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2320), GPR_U32(ctx, 2));
    // 0x2f3418: 0x8e430914  lw          $v1, 0x914($s2)
    ctx->pc = 0x2f3418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2324)));
    // 0x2f341c: 0x8e42091c  lw          $v0, 0x91C($s2)
    ctx->pc = 0x2f341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2332)));
    // 0x2f3420: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f3420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f3424: 0xae420914  sw          $v0, 0x914($s2)
    ctx->pc = 0x2f3424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2324), GPR_U32(ctx, 2));
    // 0x2f3428: 0x8e430910  lw          $v1, 0x910($s2)
    ctx->pc = 0x2f3428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2320)));
    // 0x2f342c: 0x8e420918  lw          $v0, 0x918($s2)
    ctx->pc = 0x2f342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2328)));
    // 0x2f3430: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2f3430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f3434: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3434u;
    {
        const bool branch_taken_0x2f3434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3434) {
            ctx->pc = 0x2F3448u;
            goto label_2f3448;
        }
    }
    ctx->pc = 0x2F343Cu;
    // 0x2f343c: 0x8e42091c  lw          $v0, 0x91C($s2)
    ctx->pc = 0x2f343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2332)));
    // 0x2f3440: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F3440u;
    {
        const bool branch_taken_0x2f3440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3440) {
            ctx->pc = 0x2F3474u;
            goto label_2f3474;
        }
    }
    ctx->pc = 0x2F3448u;
label_2f3448:
    // 0x2f3448: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x2F3448u;
    SET_GPR_U32(ctx, 31, 0x2F3450u);
    ctx->pc = 0x2F344Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3448u;
            // 0x2f344c: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3450u; }
        if (ctx->pc != 0x2F3450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3450u; }
        if (ctx->pc != 0x2F3450u) { return; }
    }
    ctx->pc = 0x2F3450u;
label_2f3450:
    // 0x2f3450: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3450u;
    {
        const bool branch_taken_0x2f3450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3450u;
            // 0x2f3454: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3450) {
            ctx->pc = 0x2F3468u;
            goto label_2f3468;
        }
    }
    ctx->pc = 0x2F3458u;
    // 0x2f3458: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2f3458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f345c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f345cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f3460: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2F3460u;
    {
        const bool branch_taken_0x2f3460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3460u;
            // 0x2f3464: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3460) {
            ctx->pc = 0x2F366Cu;
            goto label_2f366c;
        }
    }
    ctx->pc = 0x2F3468u;
label_2f3468:
    // 0x2f3468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f346c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2F346Cu;
    {
        const bool branch_taken_0x2f346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F346Cu;
            // 0x2f3470: 0xae4304d0  sw          $v1, 0x4D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f346c) {
            ctx->pc = 0x2F3670u;
            goto label_2f3670;
        }
    }
    ctx->pc = 0x2F3474u;
label_2f3474:
    // 0x2f3474: 0x8e4204e8  lw          $v0, 0x4E8($s2)
    ctx->pc = 0x2f3474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1256)));
    // 0x2f3478: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x2f3478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2f347c: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x2f347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2f3480: 0xc048ab6  jal         func_122AD8
    ctx->pc = 0x2F3480u;
    SET_GPR_U32(ctx, 31, 0x2F3488u);
    ctx->pc = 0x2F3484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3480u;
            // 0x2f3484: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122AD8u;
    if (runtime->hasFunction(0x122AD8u)) {
        auto targetFn = runtime->lookupFunction(0x122AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3488u; }
        if (ctx->pc != 0x2F3488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRead_0x122ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3488u; }
        if (ctx->pc != 0x2F3488u) { return; }
    }
    ctx->pc = 0x2F3488u;
label_2f3488:
    // 0x2f3488: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2F3488u;
    {
        const bool branch_taken_0x2f3488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3488) {
            ctx->pc = 0x2F366Cu;
            goto label_2f366c;
        }
    }
    ctx->pc = 0x2F3490u;
label_2f3490:
    // 0x2f3490: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x2f3490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x2f3494: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3494u;
    SET_GPR_U32(ctx, 31, 0x2F349Cu);
    ctx->pc = 0x2F3498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3494u;
            // 0x2f3498: 0x27a600d8  addiu       $a2, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F349Cu; }
        if (ctx->pc != 0x2F349Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F349Cu; }
        if (ctx->pc != 0x2F349Cu) { return; }
    }
    ctx->pc = 0x2F349Cu;
label_2f349c:
    // 0x2f349c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2F349Cu;
    {
        const bool branch_taken_0x2f349c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f349c) {
            ctx->pc = 0x2F366Cu;
            goto label_2f366c;
        }
    }
    ctx->pc = 0x2F34A4u;
    // 0x2f34a4: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x2f34a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2f34a8: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F34A8u;
    {
        const bool branch_taken_0x2f34a8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F34ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F34A8u;
            // 0x2f34ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34a8) {
            ctx->pc = 0x2F34C0u;
            goto label_2f34c0;
        }
    }
    ctx->pc = 0x2F34B0u;
    // 0x2f34b0: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F34B0u;
    SET_GPR_U32(ctx, 31, 0x2F34B8u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F34B8u; }
        if (ctx->pc != 0x2F34B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F34B8u; }
        if (ctx->pc != 0x2F34B8u) { return; }
    }
    ctx->pc = 0x2F34B8u;
label_2f34b8:
    // 0x2f34b8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2F34B8u;
    {
        const bool branch_taken_0x2f34b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F34BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F34B8u;
            // 0x2f34bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34b8) {
            ctx->pc = 0x2F3670u;
            goto label_2f3670;
        }
    }
    ctx->pc = 0x2F34C0u;
label_2f34c0:
    // 0x2f34c0: 0x8e430910  lw          $v1, 0x910($s2)
    ctx->pc = 0x2f34c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2320)));
    // 0x2f34c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f34c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34c8: 0x8e420918  lw          $v0, 0x918($s2)
    ctx->pc = 0x2f34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2328)));
    // 0x2f34cc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F34CCu;
    {
        const bool branch_taken_0x2f34cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F34D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F34CCu;
            // 0x2f34d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34cc) {
            ctx->pc = 0x2F34DCu;
            goto label_2f34dc;
        }
    }
    ctx->pc = 0x2F34D4u;
    // 0x2f34d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f34d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f34d8: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x2f34d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f34dc:
    // 0x2f34dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f34dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34e0: 0xc0bc874  jal         func_2F21D0
    ctx->pc = 0x2F34E0u;
    SET_GPR_U32(ctx, 31, 0x2F34E8u);
    ctx->pc = 0x2F34E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F34E0u;
            // 0x2f34e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F21D0u;
    if (runtime->hasFunction(0x2F21D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F21D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F34E8u; }
        if (ctx->pc != 0x2F34E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVersion__18CMemoryCardManagerFv_0x2f21d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F34E8u; }
        if (ctx->pc != 0x2F34E8u) { return; }
    }
    ctx->pc = 0x2F34E8u;
label_2f34e8:
    // 0x2f34e8: 0x8e4408ec  lw          $a0, 0x8EC($s2)
    ctx->pc = 0x2f34e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2284)));
    // 0x2f34ec: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2F34ECu;
    SET_GPR_U32(ctx, 31, 0x2F34F4u);
    ctx->pc = 0x2F34F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F34ECu;
            // 0x2f34f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F34F4u; }
        if (ctx->pc != 0x2F34F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F34F4u; }
        if (ctx->pc != 0x2F34F4u) { return; }
    }
    ctx->pc = 0x2F34F4u;
label_2f34f4:
    // 0x2f34f4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2F34F4u;
    {
        const bool branch_taken_0x2f34f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f34f4) {
            ctx->pc = 0x2F3560u;
            goto label_2f3560;
        }
    }
    ctx->pc = 0x2F34FCu;
    // 0x2f34fc: 0x8e4308ec  lw          $v1, 0x8EC($s2)
    ctx->pc = 0x2f34fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2284)));
    // 0x2f3500: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2f3500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x2f3504: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f3504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3508: 0x34465930  ori         $a2, $v0, 0x5930
    ctx->pc = 0x2f3508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22832);
    // 0x2f350c: 0x8c73002c  lw          $s3, 0x2C($v1)
    ctx->pc = 0x2f350cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2f3510: 0xc0bc550  jal         func_2F1540
    ctx->pc = 0x2F3510u;
    SET_GPR_U32(ctx, 31, 0x2F3518u);
    ctx->pc = 0x2F3514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3510u;
            // 0x2f3514: 0x24650080  addiu       $a1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1540u;
    if (runtime->hasFunction(0x2F1540u)) {
        auto targetFn = runtime->lookupFunction(0x2F1540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3518u; }
        if (ctx->pc != 0x2F3518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeCheckDigit__FiPci_0x2f1540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3518u; }
        if (ctx->pc != 0x2F3518u) { return; }
    }
    ctx->pc = 0x2F3518u;
label_2f3518:
    // 0x2f3518: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3518u;
    {
        const bool branch_taken_0x2f3518 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3518) {
            ctx->pc = 0x2F352Cu;
            goto label_2f352c;
        }
    }
    ctx->pc = 0x2F3520u;
    // 0x2f3520: 0x10530002  beq         $v0, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3520u;
    {
        const bool branch_taken_0x2f3520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2f3520) {
            ctx->pc = 0x2F352Cu;
            goto label_2f352c;
        }
    }
    ctx->pc = 0x2F3528u;
    // 0x2f3528: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f3528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f352c:
    // 0x2f352c: 0x8e4308ec  lw          $v1, 0x8EC($s2)
    ctx->pc = 0x2f352cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2284)));
    // 0x2f3530: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2f3530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2f3534: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f3534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3538: 0x34462c98  ori         $a2, $v0, 0x2C98
    ctx->pc = 0x2f3538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11416);
    // 0x2f353c: 0x8c730028  lw          $s3, 0x28($v1)
    ctx->pc = 0x2f353cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2f3540: 0xc0bc550  jal         func_2F1540
    ctx->pc = 0x2F3540u;
    SET_GPR_U32(ctx, 31, 0x2F3548u);
    ctx->pc = 0x2F3544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3540u;
            // 0x2f3544: 0x24650080  addiu       $a1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1540u;
    if (runtime->hasFunction(0x2F1540u)) {
        auto targetFn = runtime->lookupFunction(0x2F1540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3548u; }
        if (ctx->pc != 0x2F3548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeCheckDigit__FiPci_0x2f1540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3548u; }
        if (ctx->pc != 0x2F3548u) { return; }
    }
    ctx->pc = 0x2F3548u;
label_2f3548:
    // 0x2f3548: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x2F3548u;
    {
        const bool branch_taken_0x2f3548 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3548) {
            ctx->pc = 0x2F3588u;
            goto label_2f3588;
        }
    }
    ctx->pc = 0x2F3550u;
    // 0x2f3550: 0x1053000d  beq         $v0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x2F3550u;
    {
        const bool branch_taken_0x2f3550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2f3550) {
            ctx->pc = 0x2F3588u;
            goto label_2f3588;
        }
    }
    ctx->pc = 0x2F3558u;
    // 0x2f3558: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F3558u;
    {
        const bool branch_taken_0x2f3558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F355Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3558u;
            // 0x2f355c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3558) {
            ctx->pc = 0x2F3588u;
            goto label_2f3588;
        }
    }
    ctx->pc = 0x2F3560u;
label_2f3560:
    // 0x2f3560: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3560u;
    {
        const bool branch_taken_0x2f3560 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3560u;
            // 0x2f3564: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3560) {
            ctx->pc = 0x2F3588u;
            goto label_2f3588;
        }
    }
    ctx->pc = 0x2F3568u;
    // 0x2f3568: 0x8e4408ec  lw          $a0, 0x8EC($s2)
    ctx->pc = 0x2f3568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2284)));
    // 0x2f356c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f356cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f3570: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2F3570u;
    SET_GPR_U32(ctx, 31, 0x2F3578u);
    ctx->pc = 0x2F3574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3570u;
            // 0x2f3574: 0x24a51928  addiu       $a1, $a1, 0x1928 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3578u; }
        if (ctx->pc != 0x2F3578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3578u; }
        if (ctx->pc != 0x2F3578u) { return; }
    }
    ctx->pc = 0x2F3578u;
label_2f3578:
    // 0x2f3578: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3578u;
    {
        const bool branch_taken_0x2f3578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3578) {
            ctx->pc = 0x2F3588u;
            goto label_2f3588;
        }
    }
    ctx->pc = 0x2F3580u;
    // 0x2f3580: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2f3580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3584: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f3584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3588:
    // 0x2f3588: 0x16200032  bnez        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2F3588u;
    {
        const bool branch_taken_0x2f3588 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F358Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3588u;
            // 0x2f358c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3588) {
            ctx->pc = 0x2F3654u;
            goto label_2f3654;
        }
    }
    ctx->pc = 0x2F3590u;
    // 0x2f3590: 0xc064220  jal         func_190880
    ctx->pc = 0x2F3590u;
    SET_GPR_U32(ctx, 31, 0x2F3598u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3598u; }
        if (ctx->pc != 0x2F3598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3598u; }
        if (ctx->pc != 0x2F3598u) { return; }
    }
    ctx->pc = 0x2F3598u;
label_2f3598:
    // 0x2f3598: 0x8e4308ec  lw          $v1, 0x8EC($s2)
    ctx->pc = 0x2f3598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2284)));
    // 0x2f359c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f359cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35a0: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2f35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x2f35a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f35a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35a8: 0x34465930  ori         $a2, $v0, 0x5930
    ctx->pc = 0x2f35a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22832);
    // 0x2f35ac: 0xc049c18  jal         func_127060
    ctx->pc = 0x2F35ACu;
    SET_GPR_U32(ctx, 31, 0x2F35B4u);
    ctx->pc = 0x2F35B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F35ACu;
            // 0x2f35b0: 0x24650080  addiu       $a1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F35B4u; }
        if (ctx->pc != 0x2F35B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F35B4u; }
        if (ctx->pc != 0x2F35B4u) { return; }
    }
    ctx->pc = 0x2F35B4u;
label_2f35b4:
    // 0x2f35b4: 0x8e4208ec  lw          $v0, 0x8EC($s2)
    ctx->pc = 0x2f35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2284)));
    // 0x2f35b8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2f35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2f35bc: 0xae4208fc  sw          $v0, 0x8FC($s2)
    ctx->pc = 0x2f35bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2300), GPR_U32(ctx, 2));
    // 0x2f35c0: 0x8e4208ec  lw          $v0, 0x8EC($s2)
    ctx->pc = 0x2f35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2284)));
    // 0x2f35c4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2f35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2f35c8: 0xae4208f8  sw          $v0, 0x8F8($s2)
    ctx->pc = 0x2f35c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2296), GPR_U32(ctx, 2));
    // 0x2f35cc: 0x8e4208ec  lw          $v0, 0x8EC($s2)
    ctx->pc = 0x2f35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2284)));
    // 0x2f35d0: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2f35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2f35d4: 0xae420900  sw          $v0, 0x900($s2)
    ctx->pc = 0x2f35d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2304), GPR_U32(ctx, 2));
    // 0x2f35d8: 0x8e4208ec  lw          $v0, 0x8EC($s2)
    ctx->pc = 0x2f35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2284)));
    // 0x2f35dc: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2f35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2f35e0: 0xae420904  sw          $v0, 0x904($s2)
    ctx->pc = 0x2f35e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2308), GPR_U32(ctx, 2));
    // 0x2f35e4: 0x8e4208ec  lw          $v0, 0x8EC($s2)
    ctx->pc = 0x2f35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2284)));
    // 0x2f35e8: 0x80420044  lb          $v0, 0x44($v0)
    ctx->pc = 0x2f35e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2f35ec: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F35ECu;
    {
        const bool branch_taken_0x2f35ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F35F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F35ECu;
            // 0x2f35f0: 0xae420908  sw          $v0, 0x908($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f35ec) {
            ctx->pc = 0x2F361Cu;
            goto label_2f361c;
        }
    }
    ctx->pc = 0x2F35F4u;
    // 0x2f35f4: 0x8e4208ec  lw          $v0, 0x8EC($s2)
    ctx->pc = 0x2f35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2284)));
    // 0x2f35f8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2f35f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2f35fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2f35fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2f3600: 0x3463d2a0  ori         $v1, $v1, 0xD2A0
    ctx->pc = 0x2f3600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53920);
    // 0x2f3604: 0x3421d320  ori         $at, $at, 0xD320
    ctx->pc = 0x2f3604u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54048);
    // 0x2f3608: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2f3608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2f360c: 0x24657f30  addiu       $a1, $v1, 0x7F30
    ctx->pc = 0x2f360cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32560));
    // 0x2f3610: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x2f3610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2f3614: 0xc07fc6c  jal         func_1FF1B0
    ctx->pc = 0x2F3614u;
    SET_GPR_U32(ctx, 31, 0x2F361Cu);
    ctx->pc = 0x2F3618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3614u;
            // 0x2f3618: 0x24447f30  addiu       $a0, $v0, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF1B0u;
    if (runtime->hasFunction(0x1FF1B0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F361Cu; }
        if (ctx->pc != 0x2F361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TranslateInventUserData__FP15CInventUserDataP15CInventUserData_0x1ff1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F361Cu; }
        if (ctx->pc != 0x2F361Cu) { return; }
    }
    ctx->pc = 0x2F361Cu;
label_2f361c:
    // 0x2f361c: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f361cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f3620: 0x342143d0  ori         $at, $at, 0x43D0
    ctx->pc = 0x2f3620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17360);
    // 0x2f3624: 0x2218021  addu        $s0, $s1, $at
    ctx->pc = 0x2f3624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x2f3628: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F3628u;
    {
        const bool branch_taken_0x2f3628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F362Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3628u;
            // 0x2f362c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3628) {
            ctx->pc = 0x2F3664u;
            goto label_2f3664;
        }
    }
    ctx->pc = 0x2F3630u;
    // 0x2f3630: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f3630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f3634: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F3634u;
    {
        const bool branch_taken_0x2f3634 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F3638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3634u;
            // 0x2f3638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3634) {
            ctx->pc = 0x2F3660u;
            goto label_2f3660;
        }
    }
    ctx->pc = 0x2F363Cu;
    // 0x2f363c: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x2F363Cu;
    SET_GPR_U32(ctx, 31, 0x2F3644u);
    ctx->pc = 0x2F3640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F363Cu;
            // 0x2f3640: 0x24050158  addiu       $a1, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3644u; }
        if (ctx->pc != 0x2F3644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3644u; }
        if (ctx->pc != 0x2F3644u) { return; }
    }
    ctx->pc = 0x2F3644u;
label_2f3644:
    // 0x2f3644: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3644u;
    {
        const bool branch_taken_0x2f3644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3644u;
            // 0x2f3648: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3644) {
            ctx->pc = 0x2F3660u;
            goto label_2f3660;
        }
    }
    ctx->pc = 0x2F364Cu;
    // 0x2f364c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F364Cu;
    {
        const bool branch_taken_0x2f364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F364Cu;
            // 0x2f3650: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f364c) {
            ctx->pc = 0x2F3660u;
            goto label_2f3660;
        }
    }
    ctx->pc = 0x2F3654u;
label_2f3654:
    // 0x2f3654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3658: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3658u;
    {
        const bool branch_taken_0x2f3658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F365Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3658u;
            // 0x2f365c: 0xae4304d0  sw          $v1, 0x4D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3658) {
            ctx->pc = 0x2F3670u;
            goto label_2f3670;
        }
    }
    ctx->pc = 0x2F3660u;
label_2f3660:
    // 0x2f3660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3664:
    // 0x2f3664: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3664u;
    {
        const bool branch_taken_0x2f3664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3664) {
            ctx->pc = 0x2F3670u;
            goto label_2f3670;
        }
    }
    ctx->pc = 0x2F366Cu;
label_2f366c:
    // 0x2f366c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f366cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3670:
    // 0x2f3670: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f3670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f3674:
    // 0x2f3674: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f3674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f3678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f367c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f367cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f3680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3684: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3684u;
            // 0x2f3688: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F368Cu;
}
