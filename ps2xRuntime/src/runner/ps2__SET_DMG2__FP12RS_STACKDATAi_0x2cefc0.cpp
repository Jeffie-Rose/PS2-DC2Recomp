#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_DMG2__FP12RS_STACKDATAi
// Address: 0x2cefc0 - 0x2cf0dc
void ps2__SET_DMG2__FP12RS_STACKDATAi_0x2cefc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_DMG2__FP12RS_STACKDATAi_0x2cefc0");
#endif

    switch (ctx->pc) {
        case 0x2ceff4u: goto label_2ceff4;
        case 0x2cf004u: goto label_2cf004;
        case 0x2cf014u: goto label_2cf014;
        case 0x2cf024u: goto label_2cf024;
        case 0x2cf03cu: goto label_2cf03c;
        case 0x2cf04cu: goto label_2cf04c;
        case 0x2cf05cu: goto label_2cf05c;
        case 0x2cf06cu: goto label_2cf06c;
        case 0x2cf080u: goto label_2cf080;
        case 0x2cf09cu: goto label_2cf09c;
        case 0x2cf0b8u: goto label_2cf0b8;
        default: break;
    }

    ctx->pc = 0x2cefc0u;

    // 0x2cefc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cefc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cefc4: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2cefc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2cefc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cefc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cefcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cefccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cefd0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CEFD0u;
    {
        const bool branch_taken_0x2cefd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEFD0u;
            // 0x2cefd4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cefd0) {
            ctx->pc = 0x2CEFE4u;
            goto label_2cefe4;
        }
    }
    ctx->pc = 0x2CEFD8u;
    // 0x2cefd8: 0x28a1000a  slti        $at, $a1, 0xA
    ctx->pc = 0x2cefd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cefdc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CEFDCu;
    {
        const bool branch_taken_0x2cefdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEFDCu;
            // 0x2cefe0: 0x24890008  addiu       $t1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cefdc) {
            ctx->pc = 0x2CEFECu;
            goto label_2cefec;
        }
    }
    ctx->pc = 0x2CEFE4u;
label_2cefe4:
    // 0x2cefe4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2CEFE4u;
    {
        const bool branch_taken_0x2cefe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEFE4u;
            // 0x2cefe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cefe4) {
            ctx->pc = 0x2CF0C8u;
            goto label_2cf0c8;
        }
    }
    ctx->pc = 0x2CEFECu;
label_2cefec:
    // 0x2cefec: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CEFECu;
    SET_GPR_U32(ctx, 31, 0x2CEFF4u);
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEFF4u; }
        if (ctx->pc != 0x2CEFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEFF4u; }
        if (ctx->pc != 0x2CEFF4u) { return; }
    }
    ctx->pc = 0x2CEFF4u;
label_2ceff4:
    // 0x2ceff4: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2ceff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceff8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ceff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceffc: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CEFFCu;
    SET_GPR_U32(ctx, 31, 0x2CF004u);
    ctx->pc = 0x2CF000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEFFCu;
            // 0x2cf000: 0x24890008  addiu       $t1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF004u; }
        if (ctx->pc != 0x2CF004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF004u; }
        if (ctx->pc != 0x2CF004u) { return; }
    }
    ctx->pc = 0x2CF004u;
label_2cf004:
    // 0x2cf004: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2cf004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf008: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cf008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf00c: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CF00Cu;
    SET_GPR_U32(ctx, 31, 0x2CF014u);
    ctx->pc = 0x2CF010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF00Cu;
            // 0x2cf010: 0x24890008  addiu       $t1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF014u; }
        if (ctx->pc != 0x2CF014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF014u; }
        if (ctx->pc != 0x2CF014u) { return; }
    }
    ctx->pc = 0x2CF014u;
label_2cf014:
    // 0x2cf014: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2cf014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf01c: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2CF01Cu;
    SET_GPR_U32(ctx, 31, 0x2CF024u);
    ctx->pc = 0x2CF020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF01Cu;
            // 0x2cf020: 0x24890008  addiu       $t1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF024u; }
        if (ctx->pc != 0x2CF024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF024u; }
        if (ctx->pc != 0x2CF024u) { return; }
    }
    ctx->pc = 0x2CF024u;
label_2cf024:
    // 0x2cf024: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2cf024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2cf028: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2cf028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf02c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cf02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf030: 0x24890008  addiu       $t1, $a0, 0x8
    ctx->pc = 0x2cf030u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2cf034: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2CF034u;
    SET_GPR_U32(ctx, 31, 0x2CF03Cu);
    ctx->pc = 0x2CF038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF034u;
            // 0x2cf038: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF03Cu; }
        if (ctx->pc != 0x2CF03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF03Cu; }
        if (ctx->pc != 0x2CF03Cu) { return; }
    }
    ctx->pc = 0x2CF03Cu;
label_2cf03c:
    // 0x2cf03c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2cf03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf040: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2cf040u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf044: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CF044u;
    SET_GPR_U32(ctx, 31, 0x2CF04Cu);
    ctx->pc = 0x2CF048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF044u;
            // 0x2cf048: 0x24890008  addiu       $t1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF04Cu; }
        if (ctx->pc != 0x2CF04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF04Cu; }
        if (ctx->pc != 0x2CF04Cu) { return; }
    }
    ctx->pc = 0x2CF04Cu;
label_2cf04c:
    // 0x2cf04c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2cf04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf050: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2cf050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf054: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2CF054u;
    SET_GPR_U32(ctx, 31, 0x2CF05Cu);
    ctx->pc = 0x2CF058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF054u;
            // 0x2cf058: 0x24890008  addiu       $t1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF05Cu; }
        if (ctx->pc != 0x2CF05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF05Cu; }
        if (ctx->pc != 0x2CF05Cu) { return; }
    }
    ctx->pc = 0x2CF05Cu;
label_2cf05c:
    // 0x2cf05c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2cf05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf060: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2cf060u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf064: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2CF064u;
    SET_GPR_U32(ctx, 31, 0x2CF06Cu);
    ctx->pc = 0x2CF068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF064u;
            // 0x2cf068: 0x24890008  addiu       $t1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF06Cu; }
        if (ctx->pc != 0x2CF06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF06Cu; }
        if (ctx->pc != 0x2CF06Cu) { return; }
    }
    ctx->pc = 0x2CF06Cu;
label_2cf06c:
    // 0x2cf06c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2cf06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2cf070: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF070u;
    {
        const bool branch_taken_0x2cf070 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CF074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF070u;
            // 0x2cf074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf070) {
            ctx->pc = 0x2CF080u;
            goto label_2cf080;
        }
    }
    ctx->pc = 0x2CF078u;
    // 0x2cf078: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CF078u;
    SET_GPR_U32(ctx, 31, 0x2CF080u);
    ctx->pc = 0x2CF07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF078u;
            // 0x2cf07c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF080u; }
        if (ctx->pc != 0x2CF080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF080u; }
        if (ctx->pc != 0x2CF080u) { return; }
    }
    ctx->pc = 0x2CF080u;
label_2cf080:
    // 0x2cf080: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf084: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2cf084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf088: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cf088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf08c: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x2cf08cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf090: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2cf090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf094: 0xc05a9ac  jal         func_16A6B0
    ctx->pc = 0x2CF094u;
    SET_GPR_U32(ctx, 31, 0x2CF09Cu);
    ctx->pc = 0x2CF098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF094u;
            // 0x2cf098: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A6B0u;
    if (runtime->hasFunction(0x16A6B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF09Cu; }
        if (ctx->pc != 0x2CF09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryDamage2__12CActionCharaFPcPcPcfPcffPc_0x16a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF09Cu; }
        if (ctx->pc != 0x2CF09Cu) { return; }
    }
    ctx->pc = 0x2CF09Cu;
label_2cf09c:
    // 0x2cf09c: 0xaf829da8  sw          $v0, -0x6258($gp)
    ctx->pc = 0x2cf09cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942120), GPR_U32(ctx, 2));
    // 0x2cf0a0: 0x8f829da8  lw          $v0, -0x6258($gp)
    ctx->pc = 0x2cf0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x2cf0a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF0A4u;
    {
        const bool branch_taken_0x2cf0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF0A4u;
            // 0x2cf0a8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf0a4) {
            ctx->pc = 0x2CF0C0u;
            goto label_2cf0c0;
        }
    }
    ctx->pc = 0x2CF0ACu;
    // 0x2cf0ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cf0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf0b0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2CF0B0u;
    SET_GPR_U32(ctx, 31, 0x2CF0B8u);
    ctx->pc = 0x2CF0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF0B0u;
            // 0x2cf0b4: 0x24840260  addiu       $a0, $a0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF0B8u; }
        if (ctx->pc != 0x2CF0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF0B8u; }
        if (ctx->pc != 0x2CF0B8u) { return; }
    }
    ctx->pc = 0x2CF0B8u;
label_2cf0b8:
    // 0x2cf0b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF0B8u;
    {
        const bool branch_taken_0x2cf0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF0B8u;
            // 0x2cf0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf0b8) {
            ctx->pc = 0x2CF0C8u;
            goto label_2cf0c8;
        }
    }
    ctx->pc = 0x2CF0C0u;
label_2cf0c0:
    // 0x2cf0c0: 0xe4540014  swc1        $f20, 0x14($v0)
    ctx->pc = 0x2cf0c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2cf0c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf0c8:
    // 0x2cf0c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cf0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf0cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cf0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cf0d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cf0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF0D4u;
            // 0x2cf0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF0DCu;
}
