#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWorldBBox__9CColFrameFP9mgVu0FBOX
// Address: 0x147e70 - 0x147f68
void GetWorldBBox__9CColFrameFP9mgVu0FBOX_0x147e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWorldBBox__9CColFrameFP9mgVu0FBOX_0x147e70");
#endif

    switch (ctx->pc) {
        case 0x147e70u: goto label_147e70;
        case 0x147e74u: goto label_147e74;
        case 0x147e78u: goto label_147e78;
        case 0x147e7cu: goto label_147e7c;
        case 0x147e80u: goto label_147e80;
        case 0x147e84u: goto label_147e84;
        case 0x147e88u: goto label_147e88;
        case 0x147e8cu: goto label_147e8c;
        case 0x147e90u: goto label_147e90;
        case 0x147e94u: goto label_147e94;
        case 0x147e98u: goto label_147e98;
        case 0x147e9cu: goto label_147e9c;
        case 0x147ea0u: goto label_147ea0;
        case 0x147ea4u: goto label_147ea4;
        case 0x147ea8u: goto label_147ea8;
        case 0x147eacu: goto label_147eac;
        case 0x147eb0u: goto label_147eb0;
        case 0x147eb4u: goto label_147eb4;
        case 0x147eb8u: goto label_147eb8;
        case 0x147ebcu: goto label_147ebc;
        case 0x147ec0u: goto label_147ec0;
        case 0x147ec4u: goto label_147ec4;
        case 0x147ec8u: goto label_147ec8;
        case 0x147eccu: goto label_147ecc;
        case 0x147ed0u: goto label_147ed0;
        case 0x147ed4u: goto label_147ed4;
        case 0x147ed8u: goto label_147ed8;
        case 0x147edcu: goto label_147edc;
        case 0x147ee0u: goto label_147ee0;
        case 0x147ee4u: goto label_147ee4;
        case 0x147ee8u: goto label_147ee8;
        case 0x147eecu: goto label_147eec;
        case 0x147ef0u: goto label_147ef0;
        case 0x147ef4u: goto label_147ef4;
        case 0x147ef8u: goto label_147ef8;
        case 0x147efcu: goto label_147efc;
        case 0x147f00u: goto label_147f00;
        case 0x147f04u: goto label_147f04;
        case 0x147f08u: goto label_147f08;
        case 0x147f0cu: goto label_147f0c;
        case 0x147f10u: goto label_147f10;
        case 0x147f14u: goto label_147f14;
        case 0x147f18u: goto label_147f18;
        case 0x147f1cu: goto label_147f1c;
        case 0x147f20u: goto label_147f20;
        case 0x147f24u: goto label_147f24;
        case 0x147f28u: goto label_147f28;
        case 0x147f2cu: goto label_147f2c;
        case 0x147f30u: goto label_147f30;
        case 0x147f34u: goto label_147f34;
        case 0x147f38u: goto label_147f38;
        case 0x147f3cu: goto label_147f3c;
        case 0x147f40u: goto label_147f40;
        case 0x147f44u: goto label_147f44;
        case 0x147f48u: goto label_147f48;
        case 0x147f4cu: goto label_147f4c;
        case 0x147f50u: goto label_147f50;
        case 0x147f54u: goto label_147f54;
        case 0x147f58u: goto label_147f58;
        case 0x147f5cu: goto label_147f5c;
        case 0x147f60u: goto label_147f60;
        case 0x147f64u: goto label_147f64;
        default: break;
    }

    ctx->pc = 0x147e70u;

label_147e70:
    // 0x147e70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x147e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_147e74:
    // 0x147e74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x147e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_147e78:
    // 0x147e78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x147e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_147e7c:
    // 0x147e7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_147e80:
    // 0x147e80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x147e80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_147e84:
    // 0x147e84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_147e88:
    // 0x147e88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x147e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_147e8c:
    // 0x147e8c: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x147e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
label_147e90:
    // 0x147e90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_147e94:
    if (ctx->pc == 0x147E94u) {
        ctx->pc = 0x147E94u;
            // 0x147e94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147E98u;
        goto label_147e98;
    }
    ctx->pc = 0x147E90u;
    {
        const bool branch_taken_0x147e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E90u;
            // 0x147e94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e90) {
            ctx->pc = 0x147EC8u;
            goto label_147ec8;
        }
    }
    ctx->pc = 0x147E98u;
label_147e98:
    // 0x147e98: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x147e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_147e9c:
    // 0x147e9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_147ea0:
    if (ctx->pc == 0x147EA0u) {
        ctx->pc = 0x147EA0u;
            // 0x147ea0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x147EA4u;
        goto label_147ea4;
    }
    ctx->pc = 0x147E9Cu;
    {
        const bool branch_taken_0x147e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E9Cu;
            // 0x147ea0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e9c) {
            ctx->pc = 0x147EC8u;
            goto label_147ec8;
        }
    }
    ctx->pc = 0x147EA4u;
label_147ea4:
    // 0x147ea4: 0xc04dc0c  jal         func_137030
label_147ea8:
    if (ctx->pc == 0x147EA8u) {
        ctx->pc = 0x147EA8u;
            // 0x147ea8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x147EACu;
        goto label_147eac;
    }
    ctx->pc = 0x147EA4u;
    SET_GPR_U32(ctx, 31, 0x147EACu);
    ctx->pc = 0x147EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147EA4u;
            // 0x147ea8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147EACu; }
        if (ctx->pc != 0x147EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147EACu; }
        if (ctx->pc != 0x147EACu) { return; }
    }
    ctx->pc = 0x147EACu;
label_147eac:
    // 0x147eac: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x147eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_147eb0:
    // 0x147eb0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x147eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_147eb4:
    // 0x147eb4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x147eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_147eb8:
    // 0x147eb8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x147eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_147ebc:
    // 0x147ebc: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x147ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_147ec0:
    // 0x147ec0: 0xc04c278  jal         func_1309E0
label_147ec4:
    if (ctx->pc == 0x147EC4u) {
        ctx->pc = 0x147EC4u;
            // 0x147ec4: 0x24480090  addiu       $t0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x147EC8u;
        goto label_147ec8;
    }
    ctx->pc = 0x147EC0u;
    SET_GPR_U32(ctx, 31, 0x147EC8u);
    ctx->pc = 0x147EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147EC0u;
            // 0x147ec4: 0x24480090  addiu       $t0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1309E0u;
    if (runtime->hasFunction(0x1309E0u)) {
        auto targetFn = runtime->lookupFunction(0x1309E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147EC8u; }
        if (ctx->pc != 0x147EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrix__FPfPfPA4_fPfPf_0x1309e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147EC8u; }
        if (ctx->pc != 0x147EC8u) { return; }
    }
    ctx->pc = 0x147EC8u;
label_147ec8:
    // 0x147ec8: 0x8e310058  lw          $s1, 0x58($s1)
    ctx->pc = 0x147ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_147ecc:
    // 0x147ecc: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_147ed0:
    if (ctx->pc == 0x147ED0u) {
        ctx->pc = 0x147ED4u;
        goto label_147ed4;
    }
    ctx->pc = 0x147ECCu;
    {
        const bool branch_taken_0x147ecc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x147ecc) {
            ctx->pc = 0x147F3Cu;
            goto label_147f3c;
        }
    }
    ctx->pc = 0x147ED4u;
label_147ed4:
    // 0x147ed4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x147ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_147ed8:
    // 0x147ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x147ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_147edc:
    // 0x147edc: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x147edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_147ee0:
    // 0x147ee0: 0x320f809  jalr        $t9
label_147ee4:
    if (ctx->pc == 0x147EE4u) {
        ctx->pc = 0x147EE4u;
            // 0x147ee4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x147EE8u;
        goto label_147ee8;
    }
    ctx->pc = 0x147EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x147EE8u);
        ctx->pc = 0x147EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147EE0u;
            // 0x147ee4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x147EE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x147EE8u; }
            if (ctx->pc != 0x147EE8u) { return; }
        }
        }
    }
    ctx->pc = 0x147EE8u;
label_147ee8:
    // 0x147ee8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_147eec:
    if (ctx->pc == 0x147EECu) {
        ctx->pc = 0x147EF0u;
        goto label_147ef0;
    }
    ctx->pc = 0x147EE8u;
    {
        const bool branch_taken_0x147ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147ee8) {
            ctx->pc = 0x147F2Cu;
            goto label_147f2c;
        }
    }
    ctx->pc = 0x147EF0u;
label_147ef0:
    // 0x147ef0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_147ef4:
    if (ctx->pc == 0x147EF4u) {
        ctx->pc = 0x147EF4u;
            // 0x147ef4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x147EF8u;
        goto label_147ef8;
    }
    ctx->pc = 0x147EF0u;
    {
        const bool branch_taken_0x147ef0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x147EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147EF0u;
            // 0x147ef4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ef0) {
            ctx->pc = 0x147F08u;
            goto label_147f08;
        }
    }
    ctx->pc = 0x147EF8u;
label_147ef8:
    // 0x147ef8: 0xc04e624  jal         func_139890
label_147efc:
    if (ctx->pc == 0x147EFCu) {
        ctx->pc = 0x147EFCu;
            // 0x147efc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x147F00u;
        goto label_147f00;
    }
    ctx->pc = 0x147EF8u;
    SET_GPR_U32(ctx, 31, 0x147F00u);
    ctx->pc = 0x147EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147EF8u;
            // 0x147efc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147F00u; }
        if (ctx->pc != 0x147F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147F00u; }
        if (ctx->pc != 0x147F00u) { return; }
    }
    ctx->pc = 0x147F00u;
label_147f00:
    // 0x147f00: 0x10000008  b           . + 4 + (0x8 << 2)
label_147f04:
    if (ctx->pc == 0x147F04u) {
        ctx->pc = 0x147F08u;
        goto label_147f08;
    }
    ctx->pc = 0x147F00u;
    {
        const bool branch_taken_0x147f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147f00) {
            ctx->pc = 0x147F24u;
            goto label_147f24;
        }
    }
    ctx->pc = 0x147F08u;
label_147f08:
    // 0x147f08: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x147f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_147f0c:
    // 0x147f0c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x147f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_147f10:
    // 0x147f10: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x147f10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_147f14:
    // 0x147f14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x147f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_147f18:
    // 0x147f18: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x147f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_147f1c:
    // 0x147f1c: 0xc04bd40  jal         func_12F500
label_147f20:
    if (ctx->pc == 0x147F20u) {
        ctx->pc = 0x147F20u;
            // 0x147f20: 0x27a900b0  addiu       $t1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x147F24u;
        goto label_147f24;
    }
    ctx->pc = 0x147F1Cu;
    SET_GPR_U32(ctx, 31, 0x147F24u);
    ctx->pc = 0x147F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147F1Cu;
            // 0x147f20: 0x27a900b0  addiu       $t1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147F24u; }
        if (ctx->pc != 0x147F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147F24u; }
        if (ctx->pc != 0x147F24u) { return; }
    }
    ctx->pc = 0x147F24u;
label_147f24:
    // 0x147f24: 0x0  nop
    ctx->pc = 0x147f24u;
    // NOP
label_147f28:
    // 0x147f28: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x147f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147f2c:
    // 0x147f2c: 0x0  nop
    ctx->pc = 0x147f2cu;
    // NOP
label_147f30:
    // 0x147f30: 0x8e31005c  lw          $s1, 0x5C($s1)
    ctx->pc = 0x147f30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_147f34:
    // 0x147f34: 0x1620ffe7  bnez        $s1, . + 4 + (-0x19 << 2)
label_147f38:
    if (ctx->pc == 0x147F38u) {
        ctx->pc = 0x147F3Cu;
        goto label_147f3c;
    }
    ctx->pc = 0x147F34u;
    {
        const bool branch_taken_0x147f34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x147f34) {
            ctx->pc = 0x147ED4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147ed4;
        }
    }
    ctx->pc = 0x147F3Cu;
label_147f3c:
    // 0x147f3c: 0x0  nop
    ctx->pc = 0x147f3cu;
    // NOP
label_147f40:
    // 0x147f40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_147f44:
    // 0x147f44: 0xc04e624  jal         func_139890
label_147f48:
    if (ctx->pc == 0x147F48u) {
        ctx->pc = 0x147F48u;
            // 0x147f48: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x147F4Cu;
        goto label_147f4c;
    }
    ctx->pc = 0x147F44u;
    SET_GPR_U32(ctx, 31, 0x147F4Cu);
    ctx->pc = 0x147F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147F44u;
            // 0x147f48: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147F4Cu; }
        if (ctx->pc != 0x147F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147F4Cu; }
        if (ctx->pc != 0x147F4Cu) { return; }
    }
    ctx->pc = 0x147F4Cu;
label_147f4c:
    // 0x147f4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x147f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_147f50:
    // 0x147f50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x147f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_147f54:
    // 0x147f54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x147f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_147f58:
    // 0x147f58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x147f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_147f5c:
    // 0x147f5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x147f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_147f60:
    // 0x147f60: 0x3e00008  jr          $ra
label_147f64:
    if (ctx->pc == 0x147F64u) {
        ctx->pc = 0x147F64u;
            // 0x147f64: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x147F68u;
        goto label_fallthrough_0x147f60;
    }
    ctx->pc = 0x147F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147F60u;
            // 0x147f64: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x147f60:
    ctx->pc = 0x147F68u;
}
