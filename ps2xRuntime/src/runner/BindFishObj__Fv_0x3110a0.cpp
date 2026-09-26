#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BindFishObj__Fv
// Address: 0x3110a0 - 0x31128c
void BindFishObj__Fv_0x3110a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BindFishObj__Fv_0x3110a0");
#endif

    switch (ctx->pc) {
        case 0x3110c0u: goto label_3110c0;
        case 0x3110c8u: goto label_3110c8;
        case 0x311108u: goto label_311108;
        case 0x31110cu: goto label_31110c;
        case 0x311124u: goto label_311124;
        case 0x31118cu: goto label_31118c;
        case 0x3111e8u: goto label_3111e8;
        case 0x3111f0u: goto label_3111f0;
        case 0x311214u: goto label_311214;
        case 0x31121cu: goto label_31121c;
        case 0x31125cu: goto label_31125c;
        default: break;
    }

    ctx->pc = 0x3110a0u;

    // 0x3110a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3110a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3110a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3110a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3110a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3110a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3110ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3110acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3110b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3110b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3110b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3110b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3110b8: 0xc0c3e7c  jal         func_30F9F0
    ctx->pc = 0x3110B8u;
    SET_GPR_U32(ctx, 31, 0x3110C0u);
    ctx->pc = 0x3110BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3110B8u;
            // 0x3110bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F9F0u;
    if (runtime->hasFunction(0x30F9F0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3110C0u; }
        if (ctx->pc != 0x3110C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveHariObj__Fv_0x30f9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3110C0u; }
        if (ctx->pc != 0x3110C0u) { return; }
    }
    ctx->pc = 0x3110C0u;
label_3110c0:
    // 0x3110c0: 0xc0c3e88  jal         func_30FA20
    ctx->pc = 0x3110C0u;
    SET_GPR_U32(ctx, 31, 0x3110C8u);
    ctx->pc = 0x3110C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3110C0u;
            // 0x3110c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FA20u;
    if (runtime->hasFunction(0x30FA20u)) {
        auto targetFn = runtime->lookupFunction(0x30FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3110C8u; }
        if (ctx->pc != 0x3110C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveUkiObj__Fv_0x30fa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3110C8u; }
        if (ctx->pc != 0x3110C8u) { return; }
    }
    ctx->pc = 0x3110C8u;
label_3110c8:
    // 0x3110c8: 0x8f86a248  lw          $a2, -0x5DB8($gp)
    ctx->pc = 0x3110c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x3110cc: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x3110ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x3110d0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3110d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x3110d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3110d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3110d8: 0x2463dfe0  addiu       $v1, $v1, -0x2020
    ctx->pc = 0x3110d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959072));
    // 0x3110dc: 0x2484e0a0  addiu       $a0, $a0, -0x1F60
    ctx->pc = 0x3110dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959264));
    // 0x3110e0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3110e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3110e4: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x3110e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3110e8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3110e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3110ec: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3110ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3110f0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3110f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3110f4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3110f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3110f8: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x3110f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x3110fc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3110fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x311100: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x311100u;
    SET_GPR_U32(ctx, 31, 0x311108u);
    ctx->pc = 0x311104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311100u;
            // 0x311104: 0x7ca20010  sq          $v0, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311108u; }
        if (ctx->pc != 0x311108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311108u; }
        if (ctx->pc != 0x311108u) { return; }
    }
    ctx->pc = 0x311108u;
label_311108:
    // 0x311108: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x311108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31110c:
    // 0x31110c: 0x8f93a248  lw          $s3, -0x5DB8($gp)
    ctx->pc = 0x31110cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x311110: 0x2a61003f  slti        $at, $s3, 0x3F
    ctx->pc = 0x311110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x311114: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x311114u;
    {
        const bool branch_taken_0x311114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x311118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311114u;
            // 0x311118: 0x131040  sll         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311114) {
            ctx->pc = 0x31119Cu;
            goto label_31119c;
        }
    }
    ctx->pc = 0x31111Cu;
    // 0x31111c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x31111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x311120: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x311120u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_311124:
    // 0x311124: 0x0  nop
    ctx->pc = 0x311124u;
    // NOP
    // 0x311128: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x311128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31112c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31112cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x311130: 0x2a62003b  slti        $v0, $s3, 0x3B
    ctx->pc = 0x311130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)59) ? 1 : 0);
    // 0x311134: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311134u;
    {
        const bool branch_taken_0x311134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311134u;
            // 0x311138: 0x3c023f05  lui         $v0, 0x3F05 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311134) {
            ctx->pc = 0x311144u;
            goto label_311144;
        }
    }
    ctx->pc = 0x31113Cu;
    // 0x31113c: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x31113cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
    // 0x311140: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x311140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_311144:
    // 0x311144: 0x0  nop
    ctx->pc = 0x311144u;
    // NOP
    // 0x311148: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x311148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x31114c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31114cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x311150: 0x8f82a248  lw          $v0, -0x5DB8($gp)
    ctx->pc = 0x311150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x311154: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311154u;
    {
        const bool branch_taken_0x311154 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x311154) {
            ctx->pc = 0x311164u;
            goto label_311164;
        }
    }
    ctx->pc = 0x31115Cu;
    // 0x31115c: 0xc78ca24c  lwc1        $f12, -0x5DB4($gp)
    ctx->pc = 0x31115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x311160: 0x0  nop
    ctx->pc = 0x311160u;
    // NOP
label_311164:
    // 0x311164: 0x0  nop
    ctx->pc = 0x311164u;
    // NOP
    // 0x311168: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x311168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31116c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x31116cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x311170: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x311170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x311174: 0x24a5e0a0  addiu       $a1, $a1, -0x1F60
    ctx->pc = 0x311174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959264));
    // 0x311178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31117c: 0xb42021  addu        $a0, $a1, $s4
    ctx->pc = 0x31117cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x311180: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x311180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311184: 0xc0c4880  jal         func_312200
    ctx->pc = 0x311184u;
    SET_GPR_U32(ctx, 31, 0x31118Cu);
    ctx->pc = 0x311188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311184u;
            // 0x311188: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x312200u;
    if (runtime->hasFunction(0x312200u)) {
        auto targetFn = runtime->lookupFunction(0x312200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31118Cu; }
        if (ctx->pc != 0x31118Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BindPosition__FPfPfff_0x312200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31118Cu; }
        if (ctx->pc != 0x31118Cu) { return; }
    }
    ctx->pc = 0x31118Cu;
label_31118c:
    // 0x31118c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31118cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x311190: 0x2a62003f  slti        $v0, $s3, 0x3F
    ctx->pc = 0x311190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x311194: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x311194u;
    {
        const bool branch_taken_0x311194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311194u;
            // 0x311198: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311194) {
            ctx->pc = 0x311124u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311124;
        }
    }
    ctx->pc = 0x31119Cu;
label_31119c:
    // 0x31119c: 0x0  nop
    ctx->pc = 0x31119cu;
    // NOP
    // 0x3111a0: 0x8f82a250  lw          $v0, -0x5DB0($gp)
    ctx->pc = 0x3111a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943312)));
    // 0x3111a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3111A4u;
    {
        const bool branch_taken_0x3111a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3111A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3111A4u;
            // 0x3111a8: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111a4) {
            ctx->pc = 0x3111C0u;
            goto label_3111c0;
        }
    }
    ctx->pc = 0x3111ACu;
    // 0x3111ac: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3111acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3111b0: 0x2463ed30  addiu       $v1, $v1, -0x12D0
    ctx->pc = 0x3111b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962480));
    // 0x3111b4: 0x2442ec70  addiu       $v0, $v0, -0x1390
    ctx->pc = 0x3111b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x3111b8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3111b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3111bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3111bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_3111c0:
    // 0x3111c0: 0x8f82a268  lw          $v0, -0x5D98($gp)
    ctx->pc = 0x3111c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943336)));
    // 0x3111c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3111C4u;
    {
        const bool branch_taken_0x3111c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3111C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3111C4u;
            // 0x3111c8: 0x3c023ee6  lui         $v0, 0x3EE6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111c4) {
            ctx->pc = 0x3111E8u;
            goto label_3111e8;
        }
    }
    ctx->pc = 0x3111CCu;
    // 0x3111cc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3111ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x3111d0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3111d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x3111d4: 0x2484ec70  addiu       $a0, $a0, -0x1390
    ctx->pc = 0x3111d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962288));
    // 0x3111d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3111d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3111dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3111dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3111e0: 0xc0c4880  jal         func_312200
    ctx->pc = 0x3111E0u;
    SET_GPR_U32(ctx, 31, 0x3111E8u);
    ctx->pc = 0x3111E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3111E0u;
            // 0x3111e4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x312200u;
    if (runtime->hasFunction(0x312200u)) {
        auto targetFn = runtime->lookupFunction(0x312200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3111E8u; }
        if (ctx->pc != 0x3111E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BindPosition__FPfPfff_0x312200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3111E8u; }
        if (ctx->pc != 0x3111E8u) { return; }
    }
    ctx->pc = 0x3111E8u;
label_3111e8:
    // 0x3111e8: 0xc0c4cc4  jal         func_313310
    ctx->pc = 0x3111E8u;
    SET_GPR_U32(ctx, 31, 0x3111F0u);
    ctx->pc = 0x3111ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3111E8u;
            // 0x3111ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x313310u;
    if (runtime->hasFunction(0x313310u)) {
        auto targetFn = runtime->lookupFunction(0x313310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3111F0u; }
        if (ctx->pc != 0x3111F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BindStep__8CFishObjFv_0x313310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3111F0u; }
        if (ctx->pc != 0x3111F0u) { return; }
    }
    ctx->pc = 0x3111F0u;
label_3111f0:
    // 0x3111f0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x3111F0u;
    {
        const bool branch_taken_0x3111f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3111F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3111F0u;
            // 0x3111f4: 0x3c023ecc  lui         $v0, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111f0) {
            ctx->pc = 0x31121Cu;
            goto label_31121c;
        }
    }
    ctx->pc = 0x3111F8u;
    // 0x3111f8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3111f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x3111fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3111fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x311200: 0x2484ebe0  addiu       $a0, $a0, -0x1420
    ctx->pc = 0x311200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962144));
    // 0x311204: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x311204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x311208: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x311208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31120c: 0xc0c4880  jal         func_312200
    ctx->pc = 0x31120Cu;
    SET_GPR_U32(ctx, 31, 0x311214u);
    ctx->pc = 0x311210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31120Cu;
            // 0x311210: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x312200u;
    if (runtime->hasFunction(0x312200u)) {
        auto targetFn = runtime->lookupFunction(0x312200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311214u; }
        if (ctx->pc != 0x311214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BindPosition__FPfPfff_0x312200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311214u; }
        if (ctx->pc != 0x311214u) { return; }
    }
    ctx->pc = 0x311214u;
label_311214:
    // 0x311214: 0xc0c4cc4  jal         func_313310
    ctx->pc = 0x311214u;
    SET_GPR_U32(ctx, 31, 0x31121Cu);
    ctx->pc = 0x311218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311214u;
            // 0x311218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x313310u;
    if (runtime->hasFunction(0x313310u)) {
        auto targetFn = runtime->lookupFunction(0x313310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31121Cu; }
        if (ctx->pc != 0x31121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BindStep__8CFishObjFv_0x313310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31121Cu; }
        if (ctx->pc != 0x31121Cu) { return; }
    }
    ctx->pc = 0x31121Cu;
label_31121c:
    // 0x31121c: 0x0  nop
    ctx->pc = 0x31121cu;
    // NOP
    // 0x311220: 0x8f86a248  lw          $a2, -0x5DB8($gp)
    ctx->pc = 0x311220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x311224: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x311224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x311228: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x311228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x31122c: 0x2463dfe0  addiu       $v1, $v1, -0x2020
    ctx->pc = 0x31122cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959072));
    // 0x311230: 0x2484e0a0  addiu       $a0, $a0, -0x1F60
    ctx->pc = 0x311230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959264));
    // 0x311234: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x311234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x311238: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x311238u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x31123c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x31123cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x311240: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x311240u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x311244: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x311244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x311248: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x311248u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x31124c: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x31124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x311250: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x311250u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x311254: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x311254u;
    SET_GPR_U32(ctx, 31, 0x31125Cu);
    ctx->pc = 0x311258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311254u;
            // 0x311258: 0x7ca20010  sq          $v0, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31125Cu; }
        if (ctx->pc != 0x31125Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31125Cu; }
        if (ctx->pc != 0x31125Cu) { return; }
    }
    ctx->pc = 0x31125Cu;
label_31125c:
    // 0x31125c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31125cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x311260: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x311260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x311264: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
    ctx->pc = 0x311264u;
    {
        const bool branch_taken_0x311264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x311264) {
            ctx->pc = 0x31110Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31110c;
        }
    }
    ctx->pc = 0x31126Cu;
    // 0x31126c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x31126cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x311270: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x311270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311274: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x311274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311278: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x311278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31127c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31127cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311284: 0x3e00008  jr          $ra
    ctx->pc = 0x311284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311284u;
            // 0x311288: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31128Cu;
}
