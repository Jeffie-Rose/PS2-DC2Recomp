#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadScript__FPc
// Address: 0x2df430 - 0x2df584
void LoadScript__FPc_0x2df430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadScript__FPc_0x2df430");
#endif

    switch (ctx->pc) {
        case 0x2df45cu: goto label_2df45c;
        case 0x2df478u: goto label_2df478;
        case 0x2df494u: goto label_2df494;
        case 0x2df4b0u: goto label_2df4b0;
        case 0x2df4bcu: goto label_2df4bc;
        case 0x2df4d0u: goto label_2df4d0;
        case 0x2df4f8u: goto label_2df4f8;
        case 0x2df508u: goto label_2df508;
        case 0x2df520u: goto label_2df520;
        case 0x2df548u: goto label_2df548;
        case 0x2df558u: goto label_2df558;
        case 0x2df56cu: goto label_2df56c;
        default: break;
    }

    ctx->pc = 0x2df430u;

    // 0x2df430: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2df430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2df434: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2df434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2df438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2df438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2df43c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2df43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2df440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2df444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2df444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df448: 0x8f829ebc  lw          $v0, -0x6144($gp)
    ctx->pc = 0x2df448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942396)));
    // 0x2df44c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2df44cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2df450: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2df450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2df454: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2DF454u;
    SET_GPR_U32(ctx, 31, 0x2DF45Cu);
    ctx->pc = 0x2DF458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF454u;
            // 0x2df458: 0x8f849ebc  lw          $a0, -0x6144($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF45Cu; }
        if (ctx->pc != 0x2DF45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF45Cu; }
        if (ctx->pc != 0x2DF45Cu) { return; }
    }
    ctx->pc = 0x2DF45Cu;
label_2df45c:
    // 0x2df45c: 0x8f829ebc  lw          $v0, -0x6144($gp)
    ctx->pc = 0x2df45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942396)));
    // 0x2df460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df464: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2df464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2df468: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x2df468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2df46c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2df46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2df470: 0xc04a422  jal         func_129088
    ctx->pc = 0x2DF470u;
    SET_GPR_U32(ctx, 31, 0x2DF478u);
    ctx->pc = 0x2DF474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF470u;
            // 0x2df474: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF478u; }
        if (ctx->pc != 0x2DF478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF478u; }
        if (ctx->pc != 0x2DF478u) { return; }
    }
    ctx->pc = 0x2DF478u;
label_2df478:
    // 0x2df478: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2df478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df47c: 0x2a430005  slti        $v1, $s2, 0x5
    ctx->pc = 0x2df47cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2df480: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2DF480u;
    {
        const bool branch_taken_0x2df480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF480u;
            // 0x2df484: 0x2646fffc  addiu       $a2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df480) {
            ctx->pc = 0x2DF56Cu;
            goto label_2df56c;
        }
    }
    ctx->pc = 0x2DF488u;
    // 0x2df488: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2df488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2df48c: 0xc04a54a  jal         func_129528
    ctx->pc = 0x2DF48Cu;
    SET_GPR_U32(ctx, 31, 0x2DF494u);
    ctx->pc = 0x2DF490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF48Cu;
            // 0x2df490: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129528u;
    if (runtime->hasFunction(0x129528u)) {
        auto targetFn = runtime->lookupFunction(0x129528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF494u; }
        if (ctx->pc != 0x2DF494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x129528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF494u; }
        if (ctx->pc != 0x2DF494u) { return; }
    }
    ctx->pc = 0x2DF494u;
label_2df494:
    // 0x2df494: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2df494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2df498: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2df498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2df49c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2df49cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2df4a0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2df4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2df4a4: 0xa040003c  sb          $zero, 0x3C($v0)
    ctx->pc = 0x2df4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df4a8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2DF4A8u;
    SET_GPR_U32(ctx, 31, 0x2DF4B0u);
    ctx->pc = 0x2DF4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF4A8u;
            // 0x2df4ac: 0x24a50f70  addiu       $a1, $a1, 0xF70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4B0u; }
        if (ctx->pc != 0x2DF4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4B0u; }
        if (ctx->pc != 0x2DF4B0u) { return; }
    }
    ctx->pc = 0x2DF4B0u;
label_2df4b0:
    // 0x2df4b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2df4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2df4b4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DF4B4u;
    SET_GPR_U32(ctx, 31, 0x2DF4BCu);
    ctx->pc = 0x2DF4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF4B4u;
            // 0x2df4b8: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4BCu; }
        if (ctx->pc != 0x2DF4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4BCu; }
        if (ctx->pc != 0x2DF4BCu) { return; }
    }
    ctx->pc = 0x2DF4BCu;
label_2df4bc:
    // 0x2df4bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2df4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2df4c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2df4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df4c4: 0x27a6015c  addiu       $a2, $sp, 0x15C
    ctx->pc = 0x2df4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x2df4c8: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2DF4C8u;
    SET_GPR_U32(ctx, 31, 0x2DF4D0u);
    ctx->pc = 0x2DF4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF4C8u;
            // 0x2df4cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4D0u; }
        if (ctx->pc != 0x2DF4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4D0u; }
        if (ctx->pc != 0x2DF4D0u) { return; }
    }
    ctx->pc = 0x2DF4D0u;
label_2df4d0:
    // 0x2df4d0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DF4D0u;
    {
        const bool branch_taken_0x2df4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF4D0u;
            // 0x2df4d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df4d0) {
            ctx->pc = 0x2DF510u;
            goto label_2df510;
        }
    }
    ctx->pc = 0x2DF4D8u;
    // 0x2df4d8: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x2df4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2df4dc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2df4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2df4e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF4E0u;
    {
        const bool branch_taken_0x2df4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF4E0u;
            // 0x2df4e4: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df4e0) {
            ctx->pc = 0x2DF4F0u;
            goto label_2df4f0;
        }
    }
    ctx->pc = 0x2DF4E8u;
    // 0x2df4e8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2df4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2df4ec: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2df4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2df4f0:
    // 0x2df4f0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2DF4F0u;
    SET_GPR_U32(ctx, 31, 0x2DF4F8u);
    ctx->pc = 0x2DF4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF4F0u;
            // 0x2df4f4: 0x8f849ebc  lw          $a0, -0x6144($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4F8u; }
        if (ctx->pc != 0x2DF4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4F8u; }
        if (ctx->pc != 0x2DF4F8u) { return; }
    }
    ctx->pc = 0x2DF4F8u;
label_2df4f8:
    // 0x2df4f8: 0x8f869ebc  lw          $a2, -0x6144($gp)
    ctx->pc = 0x2df4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942396)));
    // 0x2df4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df500: 0xc095408  jal         func_255020
    ctx->pc = 0x2DF500u;
    SET_GPR_U32(ctx, 31, 0x2DF508u);
    ctx->pc = 0x2DF504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF500u;
            // 0x2df504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255020u;
    if (runtime->hasFunction(0x255020u)) {
        auto targetFn = runtime->lookupFunction(0x255020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF508u; }
        if (ctx->pc != 0x2DF508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEventScript__FPcPcP9mgCMemory_0x255020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF508u; }
        if (ctx->pc != 0x2DF508u) { return; }
    }
    ctx->pc = 0x2DF508u;
label_2df508:
    // 0x2df508: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2DF508u;
    {
        const bool branch_taken_0x2df508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF508u;
            // 0x2df50c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df508) {
            ctx->pc = 0x2DF570u;
            goto label_2df570;
        }
    }
    ctx->pc = 0x2DF510u;
label_2df510:
    // 0x2df510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2df510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df514: 0x27a6015c  addiu       $a2, $sp, 0x15C
    ctx->pc = 0x2df514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x2df518: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2DF518u;
    SET_GPR_U32(ctx, 31, 0x2DF520u);
    ctx->pc = 0x2DF51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF518u;
            // 0x2df51c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF520u; }
        if (ctx->pc != 0x2DF520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF520u; }
        if (ctx->pc != 0x2DF520u) { return; }
    }
    ctx->pc = 0x2DF520u;
label_2df520:
    // 0x2df520: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DF520u;
    {
        const bool branch_taken_0x2df520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF520u;
            // 0x2df524: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df520) {
            ctx->pc = 0x2DF560u;
            goto label_2df560;
        }
    }
    ctx->pc = 0x2DF528u;
    // 0x2df528: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x2df528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2df52c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2df52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2df530: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF530u;
    {
        const bool branch_taken_0x2df530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF530u;
            // 0x2df534: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df530) {
            ctx->pc = 0x2DF540u;
            goto label_2df540;
        }
    }
    ctx->pc = 0x2DF538u;
    // 0x2df538: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2df538u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2df53c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2df53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2df540:
    // 0x2df540: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2DF540u;
    SET_GPR_U32(ctx, 31, 0x2DF548u);
    ctx->pc = 0x2DF544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF540u;
            // 0x2df544: 0x8f849ebc  lw          $a0, -0x6144($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF548u; }
        if (ctx->pc != 0x2DF548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF548u; }
        if (ctx->pc != 0x2DF548u) { return; }
    }
    ctx->pc = 0x2DF548u;
label_2df548:
    // 0x2df548: 0x8f869ebc  lw          $a2, -0x6144($gp)
    ctx->pc = 0x2df548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942396)));
    // 0x2df54c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df550: 0xc095408  jal         func_255020
    ctx->pc = 0x2DF550u;
    SET_GPR_U32(ctx, 31, 0x2DF558u);
    ctx->pc = 0x2DF554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF550u;
            // 0x2df554: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255020u;
    if (runtime->hasFunction(0x255020u)) {
        auto targetFn = runtime->lookupFunction(0x255020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF558u; }
        if (ctx->pc != 0x2DF558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEventScript__FPcPcP9mgCMemory_0x255020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF558u; }
        if (ctx->pc != 0x2DF558u) { return; }
    }
    ctx->pc = 0x2DF558u;
label_2df558:
    // 0x2df558: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF558u;
    {
        const bool branch_taken_0x2df558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df558) {
            ctx->pc = 0x2DF56Cu;
            goto label_2df56c;
        }
    }
    ctx->pc = 0x2DF560u;
label_2df560:
    // 0x2df560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df564: 0xc095408  jal         func_255020
    ctx->pc = 0x2DF564u;
    SET_GPR_U32(ctx, 31, 0x2DF56Cu);
    ctx->pc = 0x2DF568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF564u;
            // 0x2df568: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255020u;
    if (runtime->hasFunction(0x255020u)) {
        auto targetFn = runtime->lookupFunction(0x255020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF56Cu; }
        if (ctx->pc != 0x2DF56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEventScript__FPcPcP9mgCMemory_0x255020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF56Cu; }
        if (ctx->pc != 0x2DF56Cu) { return; }
    }
    ctx->pc = 0x2DF56Cu;
label_2df56c:
    // 0x2df56c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2df56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2df570:
    // 0x2df570: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2df570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df57c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF57Cu;
            // 0x2df580: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF584u;
}
