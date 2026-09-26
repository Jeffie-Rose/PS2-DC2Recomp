#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadPack__7CMapSkyFPUiiP9mgCMemory
// Address: 0x183860 - 0x183c5c
void LoadPack__7CMapSkyFPUiiP9mgCMemory_0x183860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadPack__7CMapSkyFPUiiP9mgCMemory_0x183860");
#endif

    switch (ctx->pc) {
        case 0x1838a8u: goto label_1838a8;
        case 0x1838c0u: goto label_1838c0;
        case 0x1838d4u: goto label_1838d4;
        case 0x1838e4u: goto label_1838e4;
        case 0x1838f8u: goto label_1838f8;
        case 0x183910u: goto label_183910;
        case 0x183924u: goto label_183924;
        case 0x183940u: goto label_183940;
        case 0x183964u: goto label_183964;
        case 0x183978u: goto label_183978;
        case 0x183988u: goto label_183988;
        case 0x18399cu: goto label_18399c;
        case 0x1839b0u: goto label_1839b0;
        case 0x1839f0u: goto label_1839f0;
        case 0x183a0cu: goto label_183a0c;
        case 0x183a28u: goto label_183a28;
        case 0x183a44u: goto label_183a44;
        case 0x183a60u: goto label_183a60;
        case 0x183a78u: goto label_183a78;
        case 0x183a94u: goto label_183a94;
        case 0x183ac4u: goto label_183ac4;
        case 0x183af0u: goto label_183af0;
        case 0x183b3cu: goto label_183b3c;
        case 0x183b7cu: goto label_183b7c;
        case 0x183bbcu: goto label_183bbc;
        case 0x183bfcu: goto label_183bfc;
        default: break;
    }

    ctx->pc = 0x183860u;

    // 0x183860: 0x27bdf730  addiu       $sp, $sp, -0x8D0
    ctx->pc = 0x183860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965040));
    // 0x183864: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x183864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x183868: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x183868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x18386c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18386cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x183870: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x183870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x183874: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x183874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x183878: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x183878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18387c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18387cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x183880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x183880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x183884: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183888: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x183888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18388c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18388cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183890: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x183890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183894: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x183894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
    // 0x183898: 0x122000e4  beqz        $s1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x183898u;
    {
        const bool branch_taken_0x183898 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183898u;
            // 0x18389c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183898) {
            ctx->pc = 0x183C2Cu;
            goto label_183c2c;
        }
    }
    ctx->pc = 0x1838A0u;
    // 0x1838a0: 0xc060c50  jal         func_183140
    ctx->pc = 0x1838A0u;
    SET_GPR_U32(ctx, 31, 0x1838A8u);
    ctx->pc = 0x183140u;
    if (runtime->hasFunction(0x183140u)) {
        auto targetFn = runtime->lookupFunction(0x183140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838A8u; }
        if (ctx->pc != 0x1838A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__7CMapSkyFv_0x183140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838A8u; }
        if (ctx->pc != 0x1838A8u) { return; }
    }
    ctx->pc = 0x1838A8u;
label_1838a8:
    // 0x1838a8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1838a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1838ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1838acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838b0: 0x24a53ea0  addiu       $a1, $a1, 0x3EA0
    ctx->pc = 0x1838b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16032));
    // 0x1838b4: 0x27a608c8  addiu       $a2, $sp, 0x8C8
    ctx->pc = 0x1838b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2248));
    // 0x1838b8: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1838B8u;
    SET_GPR_U32(ctx, 31, 0x1838C0u);
    ctx->pc = 0x1838BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1838B8u;
            // 0x1838bc: 0xafa008c8  sw          $zero, 0x8C8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838C0u; }
        if (ctx->pc != 0x1838C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838C0u; }
        if (ctx->pc != 0x1838C0u) { return; }
    }
    ctx->pc = 0x1838C0u;
label_1838c0:
    // 0x1838c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1838c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838c4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1838c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1838c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1838c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838cc: 0xc049c86  jal         func_127218
    ctx->pc = 0x1838CCu;
    SET_GPR_U32(ctx, 31, 0x1838D4u);
    ctx->pc = 0x1838D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1838CCu;
            // 0x1838d0: 0x24060740  addiu       $a2, $zero, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838D4u; }
        if (ctx->pc != 0x1838D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838D4u; }
        if (ctx->pc != 0x1838D4u) { return; }
    }
    ctx->pc = 0x1838D4u;
label_1838d4:
    // 0x1838d4: 0x8fa608c8  lw          $a2, 0x8C8($sp)
    ctx->pc = 0x1838d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2248)));
    // 0x1838d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1838d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838dc: 0xc060f18  jal         func_183C60
    ctx->pc = 0x1838DCu;
    SET_GPR_U32(ctx, 31, 0x1838E4u);
    ctx->pc = 0x1838E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1838DCu;
            // 0x1838e0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183C60u;
    if (runtime->hasFunction(0x183C60u)) {
        auto targetFn = runtime->lookupFunction(0x183C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838E4u; }
        if (ctx->pc != 0x1838E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSkyPack__FP12MAP_SKY_INFOPci_0x183c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838E4u; }
        if (ctx->pc != 0x1838E4u) { return; }
    }
    ctx->pc = 0x1838E4u;
label_1838e4:
    // 0x1838e4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1838e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1838e8: 0x27a40820  addiu       $a0, $sp, 0x820
    ctx->pc = 0x1838e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
    // 0x1838ec: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x1838ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
    // 0x1838f0: 0xc04d6d8  jal         func_135B60
    ctx->pc = 0x1838F0u;
    SET_GPR_U32(ctx, 31, 0x1838F8u);
    ctx->pc = 0x1838F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1838F0u;
            // 0x1838f4: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838F8u; }
        if (ctx->pc != 0x1838F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838F8u; }
        if (ctx->pc != 0x1838F8u) { return; }
    }
    ctx->pc = 0x1838F8u;
label_1838f8:
    // 0x1838f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1838f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1838fc: 0xafa00820  sw          $zero, 0x820($sp)
    ctx->pc = 0x1838fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2080), GPR_U32(ctx, 0));
    // 0x183900: 0xafa20828  sw          $v0, 0x828($sp)
    ctx->pc = 0x183900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2088), GPR_U32(ctx, 2));
    // 0x183904: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x183904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183908: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x183908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x18390c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18390cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183910:
    // 0x183910: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x183910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x183914: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x183914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x183918: 0x53b021  addu        $s6, $v0, $s3
    ctx->pc = 0x183918u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18391c: 0xc04b950  jal         func_12E540
    ctx->pc = 0x18391Cu;
    SET_GPR_U32(ctx, 31, 0x183924u);
    ctx->pc = 0x183920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18391Cu;
            // 0x183920: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183924u; }
        if (ctx->pc != 0x183924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183924u; }
        if (ctx->pc != 0x183924u) { return; }
    }
    ctx->pc = 0x183924u;
label_183924:
    // 0x183924: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x183924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x183928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18392c: 0x27a608cc  addiu       $a2, $sp, 0x8CC
    ctx->pc = 0x18392cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2252));
    // 0x183930: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x183930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x183934: 0x245500e0  addiu       $s5, $v0, 0xE0
    ctx->pc = 0x183934u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x183938: 0xc052734  jal         func_149CD0
    ctx->pc = 0x183938u;
    SET_GPR_U32(ctx, 31, 0x183940u);
    ctx->pc = 0x18393Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183938u;
            // 0x18393c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183940u; }
        if (ctx->pc != 0x183940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183940u; }
        if (ctx->pc != 0x183940u) { return; }
    }
    ctx->pc = 0x183940u;
label_183940:
    // 0x183940: 0x8fa308cc  lw          $v1, 0x8CC($sp)
    ctx->pc = 0x183940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2252)));
    // 0x183944: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x183944u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183948: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x183948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x18394c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18394Cu;
    {
        const bool branch_taken_0x18394c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18394Cu;
            // 0x183950: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18394c) {
            ctx->pc = 0x18395Cu;
            goto label_18395c;
        }
    }
    ctx->pc = 0x183954u;
    // 0x183954: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x183954u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x183958: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x183958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18395c:
    // 0x18395c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x18395Cu;
    SET_GPR_U32(ctx, 31, 0x183964u);
    ctx->pc = 0x183960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18395Cu;
            // 0x183960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183964u; }
        if (ctx->pc != 0x183964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183964u; }
        if (ctx->pc != 0x183964u) { return; }
    }
    ctx->pc = 0x183964u;
label_183964:
    // 0x183964: 0x8fa608cc  lw          $a2, 0x8CC($sp)
    ctx->pc = 0x183964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2252)));
    // 0x183968: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x183968u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18396c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x18396cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183970: 0xc049c18  jal         func_127060
    ctx->pc = 0x183970u;
    SET_GPR_U32(ctx, 31, 0x183978u);
    ctx->pc = 0x183974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183970u;
            // 0x183974: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183978u; }
        if (ctx->pc != 0x183978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183978u; }
        if (ctx->pc != 0x183978u) { return; }
    }
    ctx->pc = 0x183978u;
label_183978:
    // 0x183978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18397c: 0x26a50080  addiu       $a1, $s5, 0x80
    ctx->pc = 0x18397cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x183980: 0xc052734  jal         func_149CD0
    ctx->pc = 0x183980u;
    SET_GPR_U32(ctx, 31, 0x183988u);
    ctx->pc = 0x183984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183980u;
            // 0x183984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183988u; }
        if (ctx->pc != 0x183988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183988u; }
        if (ctx->pc != 0x183988u) { return; }
    }
    ctx->pc = 0x183988u;
label_183988:
    // 0x183988: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x183988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x18398c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18398cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183990: 0x26a50190  addiu       $a1, $s5, 0x190
    ctx->pc = 0x183990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
    // 0x183994: 0xc052734  jal         func_149CD0
    ctx->pc = 0x183994u;
    SET_GPR_U32(ctx, 31, 0x18399Cu);
    ctx->pc = 0x183998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183994u;
            // 0x183998: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18399Cu; }
        if (ctx->pc != 0x18399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18399Cu; }
        if (ctx->pc != 0x18399Cu) { return; }
    }
    ctx->pc = 0x18399Cu;
label_18399c:
    // 0x18399c: 0x26a50110  addiu       $a1, $s5, 0x110
    ctx->pc = 0x18399cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
    // 0x1839a0: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1839a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1839a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1839a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839a8: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1839A8u;
    SET_GPR_U32(ctx, 31, 0x1839B0u);
    ctx->pc = 0x1839ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1839A8u;
            // 0x1839ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839B0u; }
        if (ctx->pc != 0x1839B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839B0u; }
        if (ctx->pc != 0x1839B0u) { return; }
    }
    ctx->pc = 0x1839B0u;
label_1839b0:
    // 0x1839b0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1839b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839b4: 0x254a821  addu        $s5, $s2, $s4
    ctx->pc = 0x1839b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1839b8: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1839b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1839bc: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x1839bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x1839c0: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x1839c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1839c4: 0xe6a00020  swc1        $f0, 0x20($s5)
    ctx->pc = 0x1839c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x1839c8: 0xc4400210  lwc1        $f0, 0x210($v0)
    ctx->pc = 0x1839c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1839cc: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1839CCu;
    {
        const bool branch_taken_0x1839cc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1839D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1839CCu;
            // 0x1839d0: 0xe6a00050  swc1        $f0, 0x50($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839cc) {
            ctx->pc = 0x1839F0u;
            goto label_1839f0;
        }
    }
    ctx->pc = 0x1839D4u;
    // 0x1839d4: 0xaeb60070  sw          $s6, 0x70($s5)
    ctx->pc = 0x1839d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 22));
    // 0x1839d8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1839d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839dc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1839dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1839e0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1839e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1839e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839e8: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1839E8u;
    SET_GPR_U32(ctx, 31, 0x1839F0u);
    ctx->pc = 0x1839ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1839E8u;
            // 0x1839ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839F0u; }
        if (ctx->pc != 0x1839F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839F0u; }
        if (ctx->pc != 0x1839F0u) { return; }
    }
    ctx->pc = 0x1839F0u;
label_1839f0:
    // 0x1839f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1839f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1839f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1839F4u;
    {
        const bool branch_taken_0x1839f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1839F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1839F4u;
            // 0x1839f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839f4) {
            ctx->pc = 0x183A28u;
            goto label_183a28;
        }
    }
    ctx->pc = 0x1839FCu;
    // 0x1839fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1839fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a04: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x183A04u;
    SET_GPR_U32(ctx, 31, 0x183A0Cu);
    ctx->pc = 0x183A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183A04u;
            // 0x183a08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A0Cu; }
        if (ctx->pc != 0x183A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A0Cu; }
        if (ctx->pc != 0x183A0Cu) { return; }
    }
    ctx->pc = 0x183A0Cu;
label_183a0c:
    // 0x183a0c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x183a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x183a10: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x183a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x183a14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183A14u;
    {
        const bool branch_taken_0x183a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A14u;
            // 0x183a18: 0x27a50820  addiu       $a1, $sp, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a14) {
            ctx->pc = 0x183A28u;
            goto label_183a28;
        }
    }
    ctx->pc = 0x183A1Cu;
    // 0x183a1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183a20: 0xc04de54  jal         func_137950
    ctx->pc = 0x183A20u;
    SET_GPR_U32(ctx, 31, 0x183A28u);
    ctx->pc = 0x183A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183A20u;
            // 0x183a24: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A28u; }
        if (ctx->pc != 0x183A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A28u; }
        if (ctx->pc != 0x183A28u) { return; }
    }
    ctx->pc = 0x183A28u;
label_183a28:
    // 0x183a28: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x183a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x183a2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x183A2Cu;
    {
        const bool branch_taken_0x183a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A2Cu;
            // 0x183a30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a2c) {
            ctx->pc = 0x183A60u;
            goto label_183a60;
        }
    }
    ctx->pc = 0x183A34u;
    // 0x183a34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a3c: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x183A3Cu;
    SET_GPR_U32(ctx, 31, 0x183A44u);
    ctx->pc = 0x183A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183A3Cu;
            // 0x183a40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A44u; }
        if (ctx->pc != 0x183A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A44u; }
        if (ctx->pc != 0x183A44u) { return; }
    }
    ctx->pc = 0x183A44u;
label_183a44:
    // 0x183a44: 0xaea20030  sw          $v0, 0x30($s5)
    ctx->pc = 0x183a44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 2));
    // 0x183a48: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x183a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x183a4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183A4Cu;
    {
        const bool branch_taken_0x183a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A4Cu;
            // 0x183a50: 0x27a50820  addiu       $a1, $sp, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a4c) {
            ctx->pc = 0x183A60u;
            goto label_183a60;
        }
    }
    ctx->pc = 0x183A54u;
    // 0x183a54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183a58: 0xc04de54  jal         func_137950
    ctx->pc = 0x183A58u;
    SET_GPR_U32(ctx, 31, 0x183A60u);
    ctx->pc = 0x183A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183A58u;
            // 0x183a5c: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A60u; }
        if (ctx->pc != 0x183A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A60u; }
        if (ctx->pc != 0x183A60u) { return; }
    }
    ctx->pc = 0x183A60u;
label_183a60:
    // 0x183a60: 0x13c0000c  beqz        $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x183A60u;
    {
        const bool branch_taken_0x183a60 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A60u;
            // 0x183a64: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a60) {
            ctx->pc = 0x183A94u;
            goto label_183a94;
        }
    }
    ctx->pc = 0x183A68u;
    // 0x183a68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a70: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x183A70u;
    SET_GPR_U32(ctx, 31, 0x183A78u);
    ctx->pc = 0x183A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183A70u;
            // 0x183a74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A78u; }
        if (ctx->pc != 0x183A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A78u; }
        if (ctx->pc != 0x183A78u) { return; }
    }
    ctx->pc = 0x183A78u;
label_183a78:
    // 0x183a78: 0xaea20060  sw          $v0, 0x60($s5)
    ctx->pc = 0x183a78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 2));
    // 0x183a7c: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x183a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x183a80: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183A80u;
    {
        const bool branch_taken_0x183a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A80u;
            // 0x183a84: 0x27a50820  addiu       $a1, $sp, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a80) {
            ctx->pc = 0x183A94u;
            goto label_183a94;
        }
    }
    ctx->pc = 0x183A88u;
    // 0x183a88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183a8c: 0xc04de54  jal         func_137950
    ctx->pc = 0x183A8Cu;
    SET_GPR_U32(ctx, 31, 0x183A94u);
    ctx->pc = 0x183A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183A8Cu;
            // 0x183a90: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A94u; }
        if (ctx->pc != 0x183A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A94u; }
        if (ctx->pc != 0x183A94u) { return; }
    }
    ctx->pc = 0x183A94u;
label_183a94:
    // 0x183a94: 0x0  nop
    ctx->pc = 0x183a94u;
    // NOP
    // 0x183a98: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x183a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x183a9c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x183a9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x183aa0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x183aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x183aa4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x183aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x183aa8: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x183aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x183aac: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x183AACu;
    {
        const bool branch_taken_0x183aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183AACu;
            // 0x183ab0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183aac) {
            ctx->pc = 0x183910u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183910;
        }
    }
    ctx->pc = 0x183AB4u;
    // 0x183ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ab8: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x183ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x183abc: 0xc052734  jal         func_149CD0
    ctx->pc = 0x183ABCu;
    SET_GPR_U32(ctx, 31, 0x183AC4u);
    ctx->pc = 0x183AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183ABCu;
            // 0x183ac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183AC4u; }
        if (ctx->pc != 0x183AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183AC4u; }
        if (ctx->pc != 0x183AC4u) { return; }
    }
    ctx->pc = 0x183AC4u;
label_183ac4:
    // 0x183ac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ac8: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x183AC8u;
    {
        const bool branch_taken_0x183ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x183ac8) {
            ctx->pc = 0x183B28u;
            goto label_183b28;
        }
    }
    ctx->pc = 0x183AD0u;
    // 0x183ad0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x183ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x183ad4: 0x27a608b0  addiu       $a2, $sp, 0x8B0
    ctx->pc = 0x183ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
    // 0x183ad8: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x183ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
    // 0x183adc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ae0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x183ae0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183ae4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x183ae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ae8: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x183AE8u;
    SET_GPR_U32(ctx, 31, 0x183AF0u);
    ctx->pc = 0x183AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183AE8u;
            // 0x183aec: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183AF0u; }
        if (ctx->pc != 0x183AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183AF0u; }
        if (ctx->pc != 0x183AF0u) { return; }
    }
    ctx->pc = 0x183AF0u;
label_183af0:
    // 0x183af0: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x183af0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x183af4: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x183af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x183af8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x183AF8u;
    {
        const bool branch_taken_0x183af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x183AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183AF8u;
            // 0x183afc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183af8) {
            ctx->pc = 0x183B2Cu;
            goto label_183b2c;
        }
    }
    ctx->pc = 0x183B00u;
    // 0x183b00: 0x8c6500f4  lw          $a1, 0xF4($v1)
    ctx->pc = 0x183b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x183b04: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x183B04u;
    {
        const bool branch_taken_0x183b04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183B04u;
            // 0x183b08: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b04) {
            ctx->pc = 0x183B1Cu;
            goto label_183b1c;
        }
    }
    ctx->pc = 0x183B0Cu;
    // 0x183b0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x183b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183b10: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x183b10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x183b14: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x183b14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x183b18: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x183b18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
label_183b1c:
    // 0x183b1c: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x183b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x183b20: 0x8c6300f8  lw          $v1, 0xF8($v1)
    ctx->pc = 0x183b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x183b24: 0xae430084  sw          $v1, 0x84($s2)
    ctx->pc = 0x183b24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 3));
label_183b28:
    // 0x183b28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x183b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183b2c:
    // 0x183b2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x183b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x183b30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b34: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x183b34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b38: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x183b38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183b3c:
    // 0x183b3c: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x183b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x183b40: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x183b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x183b44: 0x80a30280  lb          $v1, 0x280($a1)
    ctx->pc = 0x183b44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 640)));
    // 0x183b48: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x183B48u;
    {
        const bool branch_taken_0x183b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183B48u;
            // 0x183b4c: 0x2a010010  slti        $at, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b48) {
            ctx->pc = 0x183B98u;
            goto label_183b98;
        }
    }
    ctx->pc = 0x183B50u;
    // 0x183b50: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x183B50u;
    {
        const bool branch_taken_0x183b50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183B50u;
            // 0x183b54: 0x29d1821  addu        $v1, $s4, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b50) {
            ctx->pc = 0x183B98u;
            goto label_183b98;
        }
    }
    ctx->pc = 0x183B58u;
    // 0x183b58: 0x247600e0  addiu       $s6, $v1, 0xE0
    ctx->pc = 0x183b58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x183b5c: 0x8ec30240  lw          $v1, 0x240($s6)
    ctx->pc = 0x183b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 576)));
    // 0x183b60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x183b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x183b64: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x183b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x183b68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x183b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183b6c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x183B6Cu;
    {
        const bool branch_taken_0x183b6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x183b6c) {
            ctx->pc = 0x183B98u;
            goto label_183b98;
        }
    }
    ctx->pc = 0x183B74u;
    // 0x183b74: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x183B74u;
    SET_GPR_U32(ctx, 31, 0x183B7Cu);
    ctx->pc = 0x183B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183B74u;
            // 0x183b78: 0x24a50280  addiu       $a1, $a1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B7Cu; }
        if (ctx->pc != 0x183B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B7Cu; }
        if (ctx->pc != 0x183B7Cu) { return; }
    }
    ctx->pc = 0x183B7Cu;
label_183b7c:
    // 0x183b7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x183B7Cu;
    {
        const bool branch_taken_0x183b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183B7Cu;
            // 0x183b80: 0x2551821  addu        $v1, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b7c) {
            ctx->pc = 0x183B98u;
            goto label_183b98;
        }
    }
    ctx->pc = 0x183B84u;
    // 0x183b84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x183b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x183b88: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x183b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x183b8c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x183b8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x183b90: 0xc6c00480  lwc1        $f0, 0x480($s6)
    ctx->pc = 0x183b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183b94: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x183b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
label_183b98:
    // 0x183b98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x183b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x183b9c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x183b9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x183ba0: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x183ba0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x183ba4: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x183BA4u;
    {
        const bool branch_taken_0x183ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x183BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183BA4u;
            // 0x183ba8: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ba4) {
            ctx->pc = 0x183B3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183b3c;
        }
    }
    ctx->pc = 0x183BACu;
    // 0x183bac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x183bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x183bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bb4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x183bb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bb8: 0x10a8c0  sll         $s5, $s0, 3
    ctx->pc = 0x183bb8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_183bbc:
    // 0x183bbc: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x183bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x183bc0: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x183bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x183bc4: 0x80a30500  lb          $v1, 0x500($a1)
    ctx->pc = 0x183bc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x183bc8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x183BC8u;
    {
        const bool branch_taken_0x183bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x183BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183BC8u;
            // 0x183bcc: 0x2a010010  slti        $at, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bc8) {
            ctx->pc = 0x183C18u;
            goto label_183c18;
        }
    }
    ctx->pc = 0x183BD0u;
    // 0x183bd0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x183BD0u;
    {
        const bool branch_taken_0x183bd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x183BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183BD0u;
            // 0x183bd4: 0x29d1821  addu        $v1, $s4, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bd0) {
            ctx->pc = 0x183C18u;
            goto label_183c18;
        }
    }
    ctx->pc = 0x183BD8u;
    // 0x183bd8: 0x247600e0  addiu       $s6, $v1, 0xE0
    ctx->pc = 0x183bd8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x183bdc: 0x8ec304c0  lw          $v1, 0x4C0($s6)
    ctx->pc = 0x183bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1216)));
    // 0x183be0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x183be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x183be4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x183be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x183be8: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x183be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x183bec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x183BECu;
    {
        const bool branch_taken_0x183bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x183bec) {
            ctx->pc = 0x183C18u;
            goto label_183c18;
        }
    }
    ctx->pc = 0x183BF4u;
    // 0x183bf4: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x183BF4u;
    SET_GPR_U32(ctx, 31, 0x183BFCu);
    ctx->pc = 0x183BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183BF4u;
            // 0x183bf8: 0x24a50500  addiu       $a1, $a1, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183BFCu; }
        if (ctx->pc != 0x183BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183BFCu; }
        if (ctx->pc != 0x183BFCu) { return; }
    }
    ctx->pc = 0x183BFCu;
label_183bfc:
    // 0x183bfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x183BFCu;
    {
        const bool branch_taken_0x183bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183BFCu;
            // 0x183c00: 0x2551821  addu        $v1, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bfc) {
            ctx->pc = 0x183C18u;
            goto label_183c18;
        }
    }
    ctx->pc = 0x183C04u;
    // 0x183c04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x183c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x183c08: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x183c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x183c0c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x183c0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x183c10: 0xc6c00700  lwc1        $f0, 0x700($s6)
    ctx->pc = 0x183c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183c14: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x183c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
label_183c18:
    // 0x183c18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x183c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x183c1c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x183c1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x183c20: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x183c20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x183c24: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x183C24u;
    {
        const bool branch_taken_0x183c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x183C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C24u;
            // 0x183c28: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c24) {
            ctx->pc = 0x183BBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183bbc;
        }
    }
    ctx->pc = 0x183C2Cu;
label_183c2c:
    // 0x183c2c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x183c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x183c30: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x183c30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x183c34: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x183c34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183c38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x183c38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x183c3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x183c3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183c40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x183c40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183c44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x183c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183c48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x183c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183c54: 0x3e00008  jr          $ra
    ctx->pc = 0x183C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C54u;
            // 0x183c58: 0x27bd08d0  addiu       $sp, $sp, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183C5Cu;
}
