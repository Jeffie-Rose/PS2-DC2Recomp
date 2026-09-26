#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditMapInitEvent__FiP8CEditMap
// Address: 0x318e30 - 0x318ee4
void EditMapInitEvent__FiP8CEditMap_0x318e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditMapInitEvent__FiP8CEditMap_0x318e30");
#endif

    switch (ctx->pc) {
        case 0x318e30u: goto label_318e30;
        case 0x318e34u: goto label_318e34;
        case 0x318e38u: goto label_318e38;
        case 0x318e3cu: goto label_318e3c;
        case 0x318e40u: goto label_318e40;
        case 0x318e44u: goto label_318e44;
        case 0x318e48u: goto label_318e48;
        case 0x318e4cu: goto label_318e4c;
        case 0x318e50u: goto label_318e50;
        case 0x318e54u: goto label_318e54;
        case 0x318e58u: goto label_318e58;
        case 0x318e5cu: goto label_318e5c;
        case 0x318e60u: goto label_318e60;
        case 0x318e64u: goto label_318e64;
        case 0x318e68u: goto label_318e68;
        case 0x318e6cu: goto label_318e6c;
        case 0x318e70u: goto label_318e70;
        case 0x318e74u: goto label_318e74;
        case 0x318e78u: goto label_318e78;
        case 0x318e7cu: goto label_318e7c;
        case 0x318e80u: goto label_318e80;
        case 0x318e84u: goto label_318e84;
        case 0x318e88u: goto label_318e88;
        case 0x318e8cu: goto label_318e8c;
        case 0x318e90u: goto label_318e90;
        case 0x318e94u: goto label_318e94;
        case 0x318e98u: goto label_318e98;
        case 0x318e9cu: goto label_318e9c;
        case 0x318ea0u: goto label_318ea0;
        case 0x318ea4u: goto label_318ea4;
        case 0x318ea8u: goto label_318ea8;
        case 0x318eacu: goto label_318eac;
        case 0x318eb0u: goto label_318eb0;
        case 0x318eb4u: goto label_318eb4;
        case 0x318eb8u: goto label_318eb8;
        case 0x318ebcu: goto label_318ebc;
        case 0x318ec0u: goto label_318ec0;
        case 0x318ec4u: goto label_318ec4;
        case 0x318ec8u: goto label_318ec8;
        case 0x318eccu: goto label_318ecc;
        case 0x318ed0u: goto label_318ed0;
        case 0x318ed4u: goto label_318ed4;
        case 0x318ed8u: goto label_318ed8;
        case 0x318edcu: goto label_318edc;
        case 0x318ee0u: goto label_318ee0;
        default: break;
    }

    ctx->pc = 0x318e30u;

label_318e30:
    // 0x318e30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x318e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_318e34:
    // 0x318e34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x318e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_318e38:
    // 0x318e38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x318e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_318e3c:
    // 0x318e3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x318e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_318e40:
    // 0x318e40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x318e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_318e44:
    // 0x318e44: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
label_318e48:
    if (ctx->pc == 0x318E48u) {
        ctx->pc = 0x318E48u;
            // 0x318e48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x318E4Cu;
        goto label_318e4c;
    }
    ctx->pc = 0x318E44u;
    {
        const bool branch_taken_0x318e44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318E44u;
            // 0x318e48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e44) {
            ctx->pc = 0x318ECCu;
            goto label_318ecc;
        }
    }
    ctx->pc = 0x318E4Cu;
label_318e4c:
    // 0x318e4c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_318e50:
    if (ctx->pc == 0x318E50u) {
        ctx->pc = 0x318E50u;
            // 0x318e50: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x318E54u;
        goto label_318e54;
    }
    ctx->pc = 0x318E4Cu;
    {
        const bool branch_taken_0x318e4c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x318E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318E4Cu;
            // 0x318e50: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e4c) {
            ctx->pc = 0x318E60u;
            goto label_318e60;
        }
    }
    ctx->pc = 0x318E54u;
label_318e54:
    // 0x318e54: 0x1000001e  b           . + 4 + (0x1E << 2)
label_318e58:
    if (ctx->pc == 0x318E58u) {
        ctx->pc = 0x318E58u;
            // 0x318e58: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x318E5Cu;
        goto label_318e5c;
    }
    ctx->pc = 0x318E54u;
    {
        const bool branch_taken_0x318e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318E54u;
            // 0x318e58: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e54) {
            ctx->pc = 0x318ED0u;
            goto label_318ed0;
        }
    }
    ctx->pc = 0x318E5Cu;
label_318e5c:
    // 0x318e5c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x318e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_318e60:
    // 0x318e60: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
label_318e64:
    if (ctx->pc == 0x318E64u) {
        ctx->pc = 0x318E68u;
        goto label_318e68;
    }
    ctx->pc = 0x318E60u;
    {
        const bool branch_taken_0x318e60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x318e60) {
            ctx->pc = 0x318ECCu;
            goto label_318ecc;
        }
    }
    ctx->pc = 0x318E68u;
label_318e68:
    // 0x318e68: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x318e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_318e6c:
    // 0x318e6c: 0x26440cb0  addiu       $a0, $s2, 0xCB0
    ctx->pc = 0x318e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3248));
label_318e70:
    // 0x318e70: 0xc0a763c  jal         func_29D8F0
label_318e74:
    if (ctx->pc == 0x318E74u) {
        ctx->pc = 0x318E74u;
            // 0x318e74: 0x24a52958  addiu       $a1, $a1, 0x2958 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10584));
        ctx->pc = 0x318E78u;
        goto label_318e78;
    }
    ctx->pc = 0x318E70u;
    SET_GPR_U32(ctx, 31, 0x318E78u);
    ctx->pc = 0x318E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318E70u;
            // 0x318e74: 0x24a52958  addiu       $a1, $a1, 0x2958 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318E78u; }
        if (ctx->pc != 0x318E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318E78u; }
        if (ctx->pc != 0x318E78u) { return; }
    }
    ctx->pc = 0x318E78u;
label_318e78:
    // 0x318e78: 0xc064220  jal         func_190880
label_318e7c:
    if (ctx->pc == 0x318E7Cu) {
        ctx->pc = 0x318E7Cu;
            // 0x318e7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318E80u;
        goto label_318e80;
    }
    ctx->pc = 0x318E78u;
    SET_GPR_U32(ctx, 31, 0x318E80u);
    ctx->pc = 0x318E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318E78u;
            // 0x318e7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318E80u; }
        if (ctx->pc != 0x318E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318E80u; }
        if (ctx->pc != 0x318E80u) { return; }
    }
    ctx->pc = 0x318E80u;
label_318e80:
    // 0x318e80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x318e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318e84:
    // 0x318e84: 0xc0bd920  jal         func_2F6480
label_318e88:
    if (ctx->pc == 0x318E88u) {
        ctx->pc = 0x318E88u;
            // 0x318e88: 0x24050320  addiu       $a1, $zero, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
        ctx->pc = 0x318E8Cu;
        goto label_318e8c;
    }
    ctx->pc = 0x318E84u;
    SET_GPR_U32(ctx, 31, 0x318E8Cu);
    ctx->pc = 0x318E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318E84u;
            // 0x318e88: 0x24050320  addiu       $a1, $zero, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318E8Cu; }
        if (ctx->pc != 0x318E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318E8Cu; }
        if (ctx->pc != 0x318E8Cu) { return; }
    }
    ctx->pc = 0x318E8Cu;
label_318e8c:
    // 0x318e8c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_318e90:
    if (ctx->pc == 0x318E90u) {
        ctx->pc = 0x318E90u;
            // 0x318e90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x318E94u;
        goto label_318e94;
    }
    ctx->pc = 0x318E8Cu;
    {
        const bool branch_taken_0x318e8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318E8Cu;
            // 0x318e90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e8c) {
            ctx->pc = 0x318E98u;
            goto label_318e98;
        }
    }
    ctx->pc = 0x318E94u;
label_318e94:
    // 0x318e94: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x318e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_318e98:
    // 0x318e98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x318e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_318e9c:
    // 0x318e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x318e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_318ea0:
    // 0x318ea0: 0xc057508  jal         func_15D420
label_318ea4:
    if (ctx->pc == 0x318EA4u) {
        ctx->pc = 0x318EA4u;
            // 0x318ea4: 0x24a52960  addiu       $a1, $a1, 0x2960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10592));
        ctx->pc = 0x318EA8u;
        goto label_318ea8;
    }
    ctx->pc = 0x318EA0u;
    SET_GPR_U32(ctx, 31, 0x318EA8u);
    ctx->pc = 0x318EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318EA0u;
            // 0x318ea4: 0x24a52960  addiu       $a1, $a1, 0x2960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318EA8u; }
        if (ctx->pc != 0x318EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318EA8u; }
        if (ctx->pc != 0x318EA8u) { return; }
    }
    ctx->pc = 0x318EA8u;
label_318ea8:
    // 0x318ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x318ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318eac:
    // 0x318eac: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_318eb0:
    if (ctx->pc == 0x318EB0u) {
        ctx->pc = 0x318EB4u;
        goto label_318eb4;
    }
    ctx->pc = 0x318EACu;
    {
        const bool branch_taken_0x318eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x318eac) {
            ctx->pc = 0x318ECCu;
            goto label_318ecc;
        }
    }
    ctx->pc = 0x318EB4u;
label_318eb4:
    // 0x318eb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x318eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_318eb8:
    // 0x318eb8: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x318eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_318ebc:
    // 0x318ebc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x318ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_318ec0:
    // 0x318ec0: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x318ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_318ec4:
    // 0x318ec4: 0x320f809  jalr        $t9
label_318ec8:
    if (ctx->pc == 0x318EC8u) {
        ctx->pc = 0x318EC8u;
            // 0x318ec8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x318ECCu;
        goto label_318ecc;
    }
    ctx->pc = 0x318EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x318ECCu);
        ctx->pc = 0x318EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318EC4u;
            // 0x318ec8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x318ECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x318ECCu; }
            if (ctx->pc != 0x318ECCu) { return; }
        }
        }
    }
    ctx->pc = 0x318ECCu;
label_318ecc:
    // 0x318ecc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x318eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_318ed0:
    // 0x318ed0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x318ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_318ed4:
    // 0x318ed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x318ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_318ed8:
    // 0x318ed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x318ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_318edc:
    // 0x318edc: 0x3e00008  jr          $ra
label_318ee0:
    if (ctx->pc == 0x318EE0u) {
        ctx->pc = 0x318EE0u;
            // 0x318ee0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x318EE4u;
        goto label_fallthrough_0x318edc;
    }
    ctx->pc = 0x318EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318EDCu;
            // 0x318ee0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x318edc:
    ctx->pc = 0x318EE4u;
}
