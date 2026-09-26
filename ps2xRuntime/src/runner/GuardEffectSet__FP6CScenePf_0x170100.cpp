#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GuardEffectSet__FP6CScenePf
// Address: 0x170100 - 0x170310
void GuardEffectSet__FP6CScenePf_0x170100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GuardEffectSet__FP6CScenePf_0x170100");
#endif

    switch (ctx->pc) {
        case 0x17011cu: goto label_17011c;
        case 0x170130u: goto label_170130;
        case 0x17013cu: goto label_17013c;
        case 0x17014cu: goto label_17014c;
        case 0x170158u: goto label_170158;
        case 0x17016cu: goto label_17016c;
        case 0x17017cu: goto label_17017c;
        case 0x170220u: goto label_170220;
        case 0x170288u: goto label_170288;
        case 0x1702e8u: goto label_1702e8;
        case 0x1702fcu: goto label_1702fc;
        default: break;
    }

    ctx->pc = 0x170100u;

    // 0x170100: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x170100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x170104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x170104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x170108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17010c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17010cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x170110: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x170110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170114: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x170114u;
    SET_GPR_U32(ctx, 31, 0x17011Cu);
    ctx->pc = 0x170118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170114u;
            // 0x170118: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17011Cu; }
        if (ctx->pc != 0x17011Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17011Cu; }
        if (ctx->pc != 0x17011Cu) { return; }
    }
    ctx->pc = 0x17011Cu;
label_17011c:
    // 0x17011c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17011cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170120: 0x12000076  beqz        $s0, . + 4 + (0x76 << 2)
    ctx->pc = 0x170120u;
    {
        const bool branch_taken_0x170120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x170124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170120u;
            // 0x170124: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170120) {
            ctx->pc = 0x1702FCu;
            goto label_1702fc;
        }
    }
    ctx->pc = 0x170128u;
    // 0x170128: 0xc041c5c  jal         func_107170
    ctx->pc = 0x170128u;
    SET_GPR_U32(ctx, 31, 0x170130u);
    ctx->pc = 0x17012Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170128u;
            // 0x17012c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170130u; }
        if (ctx->pc != 0x170130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170130u; }
        if (ctx->pc != 0x170130u) { return; }
    }
    ctx->pc = 0x170130u;
label_170130:
    // 0x170130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170134: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x170134u;
    SET_GPR_U32(ctx, 31, 0x17013Cu);
    ctx->pc = 0x170138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170134u;
            // 0x170138: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17013Cu; }
        if (ctx->pc != 0x17013Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17013Cu; }
        if (ctx->pc != 0x17013Cu) { return; }
    }
    ctx->pc = 0x17013Cu;
label_17013c:
    // 0x17013c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17013cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x170140: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x170140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x170144: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x170144u;
    SET_GPR_U32(ctx, 31, 0x17014Cu);
    ctx->pc = 0x170148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170144u;
            // 0x170148: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17014Cu; }
        if (ctx->pc != 0x17014Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17014Cu; }
        if (ctx->pc != 0x17014Cu) { return; }
    }
    ctx->pc = 0x17014Cu;
label_17014c:
    // 0x17014c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17014cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x170150: 0xc041be0  jal         func_106F80
    ctx->pc = 0x170150u;
    SET_GPR_U32(ctx, 31, 0x170158u);
    ctx->pc = 0x170154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170150u;
            // 0x170154: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170158u; }
        if (ctx->pc != 0x170158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170158u; }
        if (ctx->pc != 0x170158u) { return; }
    }
    ctx->pc = 0x170158u;
label_170158:
    // 0x170158: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x170158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x17015c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17015cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x170160: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x170160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x170164: 0xc041c4a  jal         func_107128
    ctx->pc = 0x170164u;
    SET_GPR_U32(ctx, 31, 0x17016Cu);
    ctx->pc = 0x170168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170164u;
            // 0x170168: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17016Cu; }
        if (ctx->pc != 0x17016Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17016Cu; }
        if (ctx->pc != 0x17016Cu) { return; }
    }
    ctx->pc = 0x17016Cu;
label_17016c:
    // 0x17016c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17016cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x170170: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x170170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x170174: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x170174u;
    SET_GPR_U32(ctx, 31, 0x17017Cu);
    ctx->pc = 0x170178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170174u;
            // 0x170178: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17017Cu; }
        if (ctx->pc != 0x17017Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17017Cu; }
        if (ctx->pc != 0x17017Cu) { return; }
    }
    ctx->pc = 0x17017Cu;
label_17017c:
    // 0x17017c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x17017cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x170180: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x170180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x170184: 0x24424c30  addiu       $v0, $v0, 0x4C30
    ctx->pc = 0x170184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19504));
    // 0x170188: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x170188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x17018c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x17018cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170190: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x170190u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x170194: 0x8c260324  lw          $a2, 0x324($at)
    ctx->pc = 0x170194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 804)));
    // 0x170198: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x170198u;
    {
        const bool branch_taken_0x170198 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17019Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170198u;
            // 0x17019c: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170198) {
            ctx->pc = 0x1701A8u;
            goto label_1701a8;
        }
    }
    ctx->pc = 0x1701A0u;
    // 0x1701a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1701A0u;
    {
        const bool branch_taken_0x1701a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1701A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1701A0u;
            // 0x1701a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701a0) {
            ctx->pc = 0x1701E8u;
            goto label_1701e8;
        }
    }
    ctx->pc = 0x1701A8u;
label_1701a8:
    // 0x1701a8: 0x8c25032c  lw          $a1, 0x32C($at)
    ctx->pc = 0x1701a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
    // 0x1701ac: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1701acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1701b0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1701b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1701b4: 0x8c220328  lw          $v0, 0x328($at)
    ctx->pc = 0x1701b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 808)));
    // 0x1701b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1701b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1701bc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1701bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1701c0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1701c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1701c4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1701c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1701c8: 0xac23032c  sw          $v1, 0x32C($at)
    ctx->pc = 0x1701c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 3));
    // 0x1701cc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1701ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1701d0: 0x8c23032c  lw          $v1, 0x32C($at)
    ctx->pc = 0x1701d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
    // 0x1701d4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1701d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1701d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1701D8u;
    {
        const bool branch_taken_0x1701d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1701DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1701D8u;
            // 0x1701dc: 0xc48021  addu        $s0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701d8) {
            ctx->pc = 0x1701E8u;
            goto label_1701e8;
        }
    }
    ctx->pc = 0x1701E0u;
    // 0x1701e0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1701e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1701e4: 0xac20032c  sw          $zero, 0x32C($at)
    ctx->pc = 0x1701e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 0));
label_1701e8:
    // 0x1701e8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1701e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1701ec: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1701ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x1701f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1701f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1701f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1701f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701f8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1701f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1701fc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1701fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x170200: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x170200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x170204: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x170204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x170208: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x170208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x17020c: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x17020cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x170210: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x170210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x170214: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x170214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x170218: 0xc07098c  jal         func_1C2630
    ctx->pc = 0x170218u;
    SET_GPR_U32(ctx, 31, 0x170220u);
    ctx->pc = 0x17021Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170218u;
            // 0x17021c: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2630u;
    if (runtime->hasFunction(0x1C2630u)) {
        auto targetFn = runtime->lookupFunction(0x1C2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170220u; }
        if (ctx->pc != 0x170220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SethitEffect__15CHitEffectImageFPfPfffffii_0x1c2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170220u; }
        if (ctx->pc != 0x170220u) { return; }
    }
    ctx->pc = 0x170220u;
label_170220:
    // 0x170220: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x170220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170224: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x170224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x170228: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x170228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x17022c: 0x8c260330  lw          $a2, 0x330($at)
    ctx->pc = 0x17022cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 816)));
    // 0x170230: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x170230u;
    {
        const bool branch_taken_0x170230 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x170234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170230u;
            // 0x170234: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170230) {
            ctx->pc = 0x170240u;
            goto label_170240;
        }
    }
    ctx->pc = 0x170238u;
    // 0x170238: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x170238u;
    {
        const bool branch_taken_0x170238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17023Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170238u;
            // 0x17023c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170238) {
            ctx->pc = 0x170278u;
            goto label_170278;
        }
    }
    ctx->pc = 0x170240u;
label_170240:
    // 0x170240: 0x8c240338  lw          $a0, 0x338($at)
    ctx->pc = 0x170240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 824)));
    // 0x170244: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x170244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x170248: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x170248u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x17024c: 0x8c230334  lw          $v1, 0x334($at)
    ctx->pc = 0x17024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 820)));
    // 0x170250: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x170250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x170254: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x170254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x170258: 0xac240338  sw          $a0, 0x338($at)
    ctx->pc = 0x170258u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 824), GPR_U32(ctx, 4));
    // 0x17025c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x17025cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x170260: 0x8c240338  lw          $a0, 0x338($at)
    ctx->pc = 0x170260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 824)));
    // 0x170264: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x170264u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x170268: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x170268u;
    {
        const bool branch_taken_0x170268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17026Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170268u;
            // 0x17026c: 0xc58021  addu        $s0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170268) {
            ctx->pc = 0x170278u;
            goto label_170278;
        }
    }
    ctx->pc = 0x170270u;
    // 0x170270: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x170270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x170274: 0xac200338  sw          $zero, 0x338($at)
    ctx->pc = 0x170274u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 824), GPR_U32(ctx, 0));
label_170278:
    // 0x170278: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x170278u;
    {
        const bool branch_taken_0x170278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17027Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170278u;
            // 0x17027c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170278) {
            ctx->pc = 0x1702CCu;
            goto label_1702cc;
        }
    }
    ctx->pc = 0x170280u;
    // 0x170280: 0xc041c5c  jal         func_107170
    ctx->pc = 0x170280u;
    SET_GPR_U32(ctx, 31, 0x170288u);
    ctx->pc = 0x170284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170280u;
            // 0x170284: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170288u; }
        if (ctx->pc != 0x170288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170288u; }
        if (ctx->pc != 0x170288u) { return; }
    }
    ctx->pc = 0x170288u;
label_170288:
    // 0x170288: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x170288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x17028c: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x17028cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x170290: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x170290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x170294: 0xa6030024  sh          $v1, 0x24($s0)
    ctx->pc = 0x170294u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x170298: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x170298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17029c: 0xa6040030  sh          $a0, 0x30($s0)
    ctx->pc = 0x17029cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x1702a0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1702a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1702a4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1702a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1702a8: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1702a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x1702ac: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x1702acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1702b0: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1702b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1702b4: 0xa6030032  sh          $v1, 0x32($s0)
    ctx->pc = 0x1702b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x1702b8: 0x240400c1  addiu       $a0, $zero, 0xC1
    ctx->pc = 0x1702b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    // 0x1702bc: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x1702bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1702c0: 0xa6040034  sh          $a0, 0x34($s0)
    ctx->pc = 0x1702c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x1702c4: 0xa6030036  sh          $v1, 0x36($s0)
    ctx->pc = 0x1702c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x1702c8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1702c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1702cc:
    // 0x1702cc: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1702ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x1702d0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1702D0u;
    {
        const bool branch_taken_0x1702d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1702D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1702D0u;
            // 0x1702d4: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702d0) {
            ctx->pc = 0x1702FCu;
            goto label_1702fc;
        }
    }
    ctx->pc = 0x1702D8u;
    // 0x1702d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1702d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702dc: 0x24a53720  addiu       $a1, $a1, 0x3720
    ctx->pc = 0x1702dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14112));
    // 0x1702e0: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x1702E0u;
    SET_GPR_U32(ctx, 31, 0x1702E8u);
    ctx->pc = 0x1702E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1702E0u;
            // 0x1702e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702E8u; }
        if (ctx->pc != 0x1702E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702E8u; }
        if (ctx->pc != 0x1702E8u) { return; }
    }
    ctx->pc = 0x1702E8u;
label_1702e8:
    // 0x1702e8: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1702e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x1702ec: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1702ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1702f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1702f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702f4: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x1702F4u;
    SET_GPR_U32(ctx, 31, 0x1702FCu);
    ctx->pc = 0x1702F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1702F4u;
            // 0x1702f8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702FCu; }
        if (ctx->pc != 0x1702FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702FCu; }
        if (ctx->pc != 0x1702FCu) { return; }
    }
    ctx->pc = 0x1702FCu;
label_1702fc:
    // 0x1702fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1702fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x170304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170308: 0x3e00008  jr          $ra
    ctx->pc = 0x170308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17030Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170308u;
            // 0x17030c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170310u;
}
