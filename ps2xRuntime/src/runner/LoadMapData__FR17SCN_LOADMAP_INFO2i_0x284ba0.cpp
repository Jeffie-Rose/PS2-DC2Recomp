#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMapData__FR17SCN_LOADMAP_INFO2i
// Address: 0x284ba0 - 0x285150
void LoadMapData__FR17SCN_LOADMAP_INFO2i_0x284ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMapData__FR17SCN_LOADMAP_INFO2i_0x284ba0");
#endif

    switch (ctx->pc) {
        case 0x284becu: goto label_284bec;
        case 0x284bf4u: goto label_284bf4;
        case 0x284c14u: goto label_284c14;
        case 0x284c20u: goto label_284c20;
        case 0x284c30u: goto label_284c30;
        case 0x284c48u: goto label_284c48;
        case 0x284c64u: goto label_284c64;
        case 0x284cb8u: goto label_284cb8;
        case 0x284cc4u: goto label_284cc4;
        case 0x284cd4u: goto label_284cd4;
        case 0x284cecu: goto label_284cec;
        case 0x284d0cu: goto label_284d0c;
        case 0x284d60u: goto label_284d60;
        case 0x284d6cu: goto label_284d6c;
        case 0x284d7cu: goto label_284d7c;
        case 0x284d94u: goto label_284d94;
        case 0x284db4u: goto label_284db4;
        case 0x284e2cu: goto label_284e2c;
        case 0x284e38u: goto label_284e38;
        case 0x284e48u: goto label_284e48;
        case 0x284e6cu: goto label_284e6c;
        case 0x284e7cu: goto label_284e7c;
        case 0x284e94u: goto label_284e94;
        case 0x284ebcu: goto label_284ebc;
        case 0x284ed8u: goto label_284ed8;
        case 0x284f48u: goto label_284f48;
        case 0x284f54u: goto label_284f54;
        case 0x284f60u: goto label_284f60;
        case 0x284f70u: goto label_284f70;
        case 0x284f98u: goto label_284f98;
        case 0x284fc0u: goto label_284fc0;
        case 0x284fecu: goto label_284fec;
        case 0x285014u: goto label_285014;
        case 0x285030u: goto label_285030;
        case 0x28503cu: goto label_28503c;
        case 0x285048u: goto label_285048;
        case 0x285058u: goto label_285058;
        case 0x285080u: goto label_285080;
        case 0x2850a8u: goto label_2850a8;
        case 0x2850ccu: goto label_2850cc;
        case 0x2850f4u: goto label_2850f4;
        default: break;
    }

    ctx->pc = 0x284ba0u;

    // 0x284ba0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x284ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x284ba4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x284ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x284ba8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x284ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x284bac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x284bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x284bb0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x284bb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284bb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x284bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x284bb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x284bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x284bbc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x284bbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284bc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x284bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x284bc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x284bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x284bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x284bcc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x284bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284bd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284bd4: 0x8c9001a4  lw          $s0, 0x1A4($a0)
    ctx->pc = 0x284bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x284bd8: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x284bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x284bdc: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x284BDCu;
    {
        const bool branch_taken_0x284bdc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284BDCu;
            // 0x284be0: 0xac92019c  sw          $s2, 0x19C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bdc) {
            ctx->pc = 0x284BECu;
            goto label_284bec;
        }
    }
    ctx->pc = 0x284BE4u;
    // 0x284be4: 0xc052330  jal         func_148CC0
    ctx->pc = 0x284BE4u;
    SET_GPR_U32(ctx, 31, 0x284BECu);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284BECu; }
        if (ctx->pc != 0x284BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284BECu; }
        if (ctx->pc != 0x284BECu) { return; }
    }
    ctx->pc = 0x284BECu;
label_284bec:
    // 0x284bec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x284becu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284bf0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x284bf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284bf4:
    // 0x284bf4: 0x2f41021  addu        $v0, $s7, $s4
    ctx->pc = 0x284bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x284bf8: 0x24530024  addiu       $s3, $v0, 0x24
    ctx->pc = 0x284bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x284bfc: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x284bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x284c00: 0x10400145  beqz        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x284C00u;
    {
        const bool branch_taken_0x284c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284C00u;
            // 0x284c04: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c00) {
            ctx->pc = 0x285118u;
            goto label_285118;
        }
    }
    ctx->pc = 0x284C08u;
    // 0x284c08: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x284c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x284c0c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x284C0Cu;
    SET_GPR_U32(ctx, 31, 0x284C14u);
    ctx->pc = 0x284C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284C0Cu;
            // 0x284c10: 0xae710094  sw          $s1, 0x94($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C14u; }
        if (ctx->pc != 0x284C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C14u; }
        if (ctx->pc != 0x284C14u) { return; }
    }
    ctx->pc = 0x284C14u;
label_284c14:
    // 0x284c14: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284c18: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x284C18u;
    SET_GPR_U32(ctx, 31, 0x284C20u);
    ctx->pc = 0x284C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284C18u;
            // 0x284c1c: 0x26650024  addiu       $a1, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C20u; }
        if (ctx->pc != 0x284C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C20u; }
        if (ctx->pc != 0x284C20u) { return; }
    }
    ctx->pc = 0x284C20u;
label_284c20:
    // 0x284c20: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x284c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x284c24: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284c28: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x284C28u;
    SET_GPR_U32(ctx, 31, 0x284C30u);
    ctx->pc = 0x284C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284C28u;
            // 0x284c2c: 0x24a5d190  addiu       $a1, $a1, -0x2E70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C30u; }
        if (ctx->pc != 0x284C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C30u; }
        if (ctx->pc != 0x284C30u) { return; }
    }
    ctx->pc = 0x284C30u;
label_284c30:
    // 0x284c30: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x284C30u;
    {
        const bool branch_taken_0x284c30 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x284c30) {
            ctx->pc = 0x284C50u;
            goto label_284c50;
        }
    }
    ctx->pc = 0x284C38u;
    // 0x284c38: 0x8e650094  lw          $a1, 0x94($s3)
    ctx->pc = 0x284c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x284c3c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284c40: 0xc05224c  jal         func_148930
    ctx->pc = 0x284C40u;
    SET_GPR_U32(ctx, 31, 0x284C48u);
    ctx->pc = 0x284C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284C40u;
            // 0x284c44: 0x26660098  addiu       $a2, $s3, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C48u; }
        if (ctx->pc != 0x284C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C48u; }
        if (ctx->pc != 0x284C48u) { return; }
    }
    ctx->pc = 0x284C48u;
label_284c48:
    // 0x284c48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x284C48u;
    {
        const bool branch_taken_0x284c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284C48u;
            // 0x284c4c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c48) {
            ctx->pc = 0x284C68u;
            goto label_284c68;
        }
    }
    ctx->pc = 0x284C50u;
label_284c50:
    // 0x284c50: 0x8e650094  lw          $a1, 0x94($s3)
    ctx->pc = 0x284c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x284c54: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284c58: 0x26660098  addiu       $a2, $s3, 0x98
    ctx->pc = 0x284c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 152));
    // 0x284c5c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x284C5Cu;
    SET_GPR_U32(ctx, 31, 0x284C64u);
    ctx->pc = 0x284C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284C5Cu;
            // 0x284c60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C64u; }
        if (ctx->pc != 0x284C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284C64u; }
        if (ctx->pc != 0x284C64u) { return; }
    }
    ctx->pc = 0x284C64u;
label_284c64:
    // 0x284c64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x284c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284c68:
    // 0x284c68: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x284c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x284c6c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x284C6Cu;
    {
        const bool branch_taken_0x284c6c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x284C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284C6Cu;
            // 0x284c70: 0x3064003f  andi        $a0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c6c) {
            ctx->pc = 0x284C80u;
            goto label_284c80;
        }
    }
    ctx->pc = 0x284C74u;
    // 0x284c74: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x284C74u;
    {
        const bool branch_taken_0x284c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x284c74) {
            ctx->pc = 0x284C80u;
            goto label_284c80;
        }
    }
    ctx->pc = 0x284C7Cu;
    // 0x284c7c: 0x2484ffc0  addiu       $a0, $a0, -0x40
    ctx->pc = 0x284c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
label_284c80:
    // 0x284c80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284C80u;
    {
        const bool branch_taken_0x284c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284C80u;
            // 0x284c84: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c80) {
            ctx->pc = 0x284C90u;
            goto label_284c90;
        }
    }
    ctx->pc = 0x284C88u;
    // 0x284c88: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x284c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x284c8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x284c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_284c90:
    // 0x284c90: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x284C90u;
    {
        const bool branch_taken_0x284c90 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x284C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284C90u;
            // 0x284c94: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c90) {
            ctx->pc = 0x284CA0u;
            goto label_284ca0;
        }
    }
    ctx->pc = 0x284C98u;
    // 0x284c98: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x284c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x284c9c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x284c9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_284ca0:
    // 0x284ca0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x284ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x284ca4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284ca8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x284ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x284cac: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x284cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x284cb0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x284CB0u;
    SET_GPR_U32(ctx, 31, 0x284CB8u);
    ctx->pc = 0x284CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284CB0u;
            // 0x284cb4: 0xae71009c  sw          $s1, 0x9C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284CB8u; }
        if (ctx->pc != 0x284CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284CB8u; }
        if (ctx->pc != 0x284CB8u) { return; }
    }
    ctx->pc = 0x284CB8u;
label_284cb8:
    // 0x284cb8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284cbc: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x284CBCu;
    SET_GPR_U32(ctx, 31, 0x284CC4u);
    ctx->pc = 0x284CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284CBCu;
            // 0x284cc0: 0x26650034  addiu       $a1, $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284CC4u; }
        if (ctx->pc != 0x284CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284CC4u; }
        if (ctx->pc != 0x284CC4u) { return; }
    }
    ctx->pc = 0x284CC4u;
label_284cc4:
    // 0x284cc4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x284cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x284cc8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284ccc: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x284CCCu;
    SET_GPR_U32(ctx, 31, 0x284CD4u);
    ctx->pc = 0x284CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284CCCu;
            // 0x284cd0: 0x24a5d198  addiu       $a1, $a1, -0x2E68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284CD4u; }
        if (ctx->pc != 0x284CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284CD4u; }
        if (ctx->pc != 0x284CD4u) { return; }
    }
    ctx->pc = 0x284CD4u;
label_284cd4:
    // 0x284cd4: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x284CD4u;
    {
        const bool branch_taken_0x284cd4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x284CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284CD4u;
            // 0x284cd8: 0xae6000a0  sw          $zero, 0xA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cd4) {
            ctx->pc = 0x284CF4u;
            goto label_284cf4;
        }
    }
    ctx->pc = 0x284CDCu;
    // 0x284cdc: 0x8e65009c  lw          $a1, 0x9C($s3)
    ctx->pc = 0x284cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x284ce0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284ce4: 0xc05224c  jal         func_148930
    ctx->pc = 0x284CE4u;
    SET_GPR_U32(ctx, 31, 0x284CECu);
    ctx->pc = 0x284CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284CE4u;
            // 0x284ce8: 0x266600a0  addiu       $a2, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284CECu; }
        if (ctx->pc != 0x284CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284CECu; }
        if (ctx->pc != 0x284CECu) { return; }
    }
    ctx->pc = 0x284CECu;
label_284cec:
    // 0x284cec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x284CECu;
    {
        const bool branch_taken_0x284cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284cec) {
            ctx->pc = 0x284D0Cu;
            goto label_284d0c;
        }
    }
    ctx->pc = 0x284CF4u;
label_284cf4:
    // 0x284cf4: 0x0  nop
    ctx->pc = 0x284cf4u;
    // NOP
    // 0x284cf8: 0x8e65009c  lw          $a1, 0x9C($s3)
    ctx->pc = 0x284cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x284cfc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284d00: 0x266600a0  addiu       $a2, $s3, 0xA0
    ctx->pc = 0x284d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x284d04: 0xc0524dc  jal         func_149370
    ctx->pc = 0x284D04u;
    SET_GPR_U32(ctx, 31, 0x284D0Cu);
    ctx->pc = 0x284D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284D04u;
            // 0x284d08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284D0Cu; }
        if (ctx->pc != 0x284D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284D0Cu; }
        if (ctx->pc != 0x284D0Cu) { return; }
    }
    ctx->pc = 0x284D0Cu;
label_284d0c:
    // 0x284d0c: 0x0  nop
    ctx->pc = 0x284d0cu;
    // NOP
    // 0x284d10: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x284d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x284d14: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284D14u;
    {
        const bool branch_taken_0x284d14 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x284D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284D14u;
            // 0x284d18: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d14) {
            ctx->pc = 0x284D28u;
            goto label_284d28;
        }
    }
    ctx->pc = 0x284D1Cu;
    // 0x284d1c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x284D1Cu;
    {
        const bool branch_taken_0x284d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284d1c) {
            ctx->pc = 0x284D28u;
            goto label_284d28;
        }
    }
    ctx->pc = 0x284D24u;
    // 0x284d24: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x284d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_284d28:
    // 0x284d28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x284D28u;
    {
        const bool branch_taken_0x284d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284D28u;
            // 0x284d2c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d28) {
            ctx->pc = 0x284D38u;
            goto label_284d38;
        }
    }
    ctx->pc = 0x284D30u;
    // 0x284d30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x284d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284d34: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x284d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_284d38:
    // 0x284d38: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284D38u;
    {
        const bool branch_taken_0x284d38 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x284D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284D38u;
            // 0x284d3c: 0x41103  sra         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d38) {
            ctx->pc = 0x284D48u;
            goto label_284d48;
        }
    }
    ctx->pc = 0x284D40u;
    // 0x284d40: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x284d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x284d44: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x284d44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_284d48:
    // 0x284d48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x284d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x284d4c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284d50: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x284d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x284d54: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x284d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x284d58: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x284D58u;
    SET_GPR_U32(ctx, 31, 0x284D60u);
    ctx->pc = 0x284D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284D58u;
            // 0x284d5c: 0xae7100a4  sw          $s1, 0xA4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284D60u; }
        if (ctx->pc != 0x284D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284D60u; }
        if (ctx->pc != 0x284D60u) { return; }
    }
    ctx->pc = 0x284D60u;
label_284d60:
    // 0x284d60: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284d64: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x284D64u;
    SET_GPR_U32(ctx, 31, 0x284D6Cu);
    ctx->pc = 0x284D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284D64u;
            // 0x284d68: 0x26650044  addiu       $a1, $s3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284D6Cu; }
        if (ctx->pc != 0x284D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284D6Cu; }
        if (ctx->pc != 0x284D6Cu) { return; }
    }
    ctx->pc = 0x284D6Cu;
label_284d6c:
    // 0x284d6c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x284d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x284d70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284d74: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x284D74u;
    SET_GPR_U32(ctx, 31, 0x284D7Cu);
    ctx->pc = 0x284D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284D74u;
            // 0x284d78: 0x24a5d1a0  addiu       $a1, $a1, -0x2E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284D7Cu; }
        if (ctx->pc != 0x284D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284D7Cu; }
        if (ctx->pc != 0x284D7Cu) { return; }
    }
    ctx->pc = 0x284D7Cu;
label_284d7c:
    // 0x284d7c: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x284D7Cu;
    {
        const bool branch_taken_0x284d7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x284d7c) {
            ctx->pc = 0x284D9Cu;
            goto label_284d9c;
        }
    }
    ctx->pc = 0x284D84u;
    // 0x284d84: 0x8e6500a4  lw          $a1, 0xA4($s3)
    ctx->pc = 0x284d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
    // 0x284d88: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284d8c: 0xc05224c  jal         func_148930
    ctx->pc = 0x284D8Cu;
    SET_GPR_U32(ctx, 31, 0x284D94u);
    ctx->pc = 0x284D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284D8Cu;
            // 0x284d90: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284D94u; }
        if (ctx->pc != 0x284D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284D94u; }
        if (ctx->pc != 0x284D94u) { return; }
    }
    ctx->pc = 0x284D94u;
label_284d94:
    // 0x284d94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x284D94u;
    {
        const bool branch_taken_0x284d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284D94u;
            // 0x284d98: 0x2429024  and         $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d94) {
            ctx->pc = 0x284DB8u;
            goto label_284db8;
        }
    }
    ctx->pc = 0x284D9Cu;
label_284d9c:
    // 0x284d9c: 0x0  nop
    ctx->pc = 0x284d9cu;
    // NOP
    // 0x284da0: 0x8e6500a4  lw          $a1, 0xA4($s3)
    ctx->pc = 0x284da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
    // 0x284da4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284da8: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x284da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x284dac: 0xc0524dc  jal         func_149370
    ctx->pc = 0x284DACu;
    SET_GPR_U32(ctx, 31, 0x284DB4u);
    ctx->pc = 0x284DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284DACu;
            // 0x284db0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284DB4u; }
        if (ctx->pc != 0x284DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284DB4u; }
        if (ctx->pc != 0x284DB4u) { return; }
    }
    ctx->pc = 0x284DB4u;
label_284db4:
    // 0x284db4: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x284db4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_284db8:
    // 0x284db8: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x284db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x284dbc: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284DBCu;
    {
        const bool branch_taken_0x284dbc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x284DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284DBCu;
            // 0x284dc0: 0x3082003f  andi        $v0, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284dbc) {
            ctx->pc = 0x284DD0u;
            goto label_284dd0;
        }
    }
    ctx->pc = 0x284DC4u;
    // 0x284dc4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x284DC4u;
    {
        const bool branch_taken_0x284dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284dc4) {
            ctx->pc = 0x284DD0u;
            goto label_284dd0;
        }
    }
    ctx->pc = 0x284DCCu;
    // 0x284dcc: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x284dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_284dd0:
    // 0x284dd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x284DD0u;
    {
        const bool branch_taken_0x284dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284DD0u;
            // 0x284dd4: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284dd0) {
            ctx->pc = 0x284DF8u;
            goto label_284df8;
        }
    }
    ctx->pc = 0x284DD8u;
    // 0x284dd8: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284DD8u;
    {
        const bool branch_taken_0x284dd8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x284DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284DD8u;
            // 0x284ddc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284dd8) {
            ctx->pc = 0x284DF0u;
            goto label_284df0;
        }
    }
    ctx->pc = 0x284DE0u;
    // 0x284de0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x284DE0u;
    {
        const bool branch_taken_0x284de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284de0) {
            ctx->pc = 0x284DECu;
            goto label_284dec;
        }
    }
    ctx->pc = 0x284DE8u;
    // 0x284de8: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x284de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_284dec:
    // 0x284dec: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x284decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_284df0:
    // 0x284df0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x284df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284df4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x284df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_284df8:
    // 0x284df8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284DF8u;
    {
        const bool branch_taken_0x284df8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x284DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284DF8u;
            // 0x284dfc: 0x41103  sra         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284df8) {
            ctx->pc = 0x284E08u;
            goto label_284e08;
        }
    }
    ctx->pc = 0x284E00u;
    // 0x284e00: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x284e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x284e04: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x284e04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_284e08:
    // 0x284e08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x284e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x284e0c: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x284e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x284e10: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x284e10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x284e14: 0xae7100b0  sw          $s1, 0xB0($s3)
    ctx->pc = 0x284e14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 17));
    // 0x284e18: 0x8ee2018c  lw          $v0, 0x18C($s7)
    ctx->pc = 0x284e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 396)));
    // 0x284e1c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x284E1Cu;
    {
        const bool branch_taken_0x284e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284E1Cu;
            // 0x284e20: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284e1c) {
            ctx->pc = 0x284EE4u;
            goto label_284ee4;
        }
    }
    ctx->pc = 0x284E24u;
    // 0x284e24: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x284E24u;
    SET_GPR_U32(ctx, 31, 0x284E2Cu);
    ctx->pc = 0x284E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284E24u;
            // 0x284e28: 0x26650004  addiu       $a1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E2Cu; }
        if (ctx->pc != 0x284E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E2Cu; }
        if (ctx->pc != 0x284E2Cu) { return; }
    }
    ctx->pc = 0x284E2Cu;
label_284e2c:
    // 0x284e2c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284e30: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x284E30u;
    SET_GPR_U32(ctx, 31, 0x284E38u);
    ctx->pc = 0x284E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284E30u;
            // 0x284e34: 0x26650074  addiu       $a1, $s3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E38u; }
        if (ctx->pc != 0x284E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E38u; }
        if (ctx->pc != 0x284E38u) { return; }
    }
    ctx->pc = 0x284E38u;
label_284e38:
    // 0x284e38: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x284e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x284e3c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284e40: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x284E40u;
    SET_GPR_U32(ctx, 31, 0x284E48u);
    ctx->pc = 0x284E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284E40u;
            // 0x284e44: 0x24a5d1a8  addiu       $a1, $a1, -0x2E58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E48u; }
        if (ctx->pc != 0x284E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E48u; }
        if (ctx->pc != 0x284E48u) { return; }
    }
    ctx->pc = 0x284E48u;
label_284e48:
    // 0x284e48: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x284e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x284e4c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x284e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x284e50: 0x24423eb0  addiu       $v0, $v0, 0x3EB0
    ctx->pc = 0x284e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16048));
    // 0x284e54: 0x26650084  addiu       $a1, $s3, 0x84
    ctx->pc = 0x284e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
    // 0x284e58: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x284e58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284e5c: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x284e5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x284e60: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x284e60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x284e64: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x284E64u;
    SET_GPR_U32(ctx, 31, 0x284E6Cu);
    ctx->pc = 0x284E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284E64u;
            // 0x284e68: 0x7c820010  sq          $v0, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E6Cu; }
        if (ctx->pc != 0x284E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E6Cu; }
        if (ctx->pc != 0x284E6Cu) { return; }
    }
    ctx->pc = 0x284E6Cu;
label_284e6c:
    // 0x284e6c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x284e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x284e70: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x284e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x284e74: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x284E74u;
    SET_GPR_U32(ctx, 31, 0x284E7Cu);
    ctx->pc = 0x284E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284E74u;
            // 0x284e78: 0x24a5d1a8  addiu       $a1, $a1, -0x2E58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E7Cu; }
        if (ctx->pc != 0x284E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E7Cu; }
        if (ctx->pc != 0x284E7Cu) { return; }
    }
    ctx->pc = 0x284E7Cu;
label_284e7c:
    // 0x284e7c: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x284E7Cu;
    {
        const bool branch_taken_0x284e7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x284e7c) {
            ctx->pc = 0x284EA4u;
            goto label_284ea4;
        }
    }
    ctx->pc = 0x284E84u;
    // 0x284e84: 0x8e6500b0  lw          $a1, 0xB0($s3)
    ctx->pc = 0x284e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x284e88: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284e8c: 0xc05224c  jal         func_148930
    ctx->pc = 0x284E8Cu;
    SET_GPR_U32(ctx, 31, 0x284E94u);
    ctx->pc = 0x284E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284E8Cu;
            // 0x284e90: 0x27a60134  addiu       $a2, $sp, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E94u; }
        if (ctx->pc != 0x284E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284E94u; }
        if (ctx->pc != 0x284E94u) { return; }
    }
    ctx->pc = 0x284E94u;
label_284e94:
    // 0x284e94: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x284E94u;
    {
        const bool branch_taken_0x284e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284e94) {
            ctx->pc = 0x284EE4u;
            goto label_284ee4;
        }
    }
    ctx->pc = 0x284E9Cu;
    // 0x284e9c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x284E9Cu;
    {
        const bool branch_taken_0x284e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284E9Cu;
            // 0x284ea0: 0xae6000b0  sw          $zero, 0xB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284e9c) {
            ctx->pc = 0x284EE4u;
            goto label_284ee4;
        }
    }
    ctx->pc = 0x284EA4u;
label_284ea4:
    // 0x284ea4: 0x0  nop
    ctx->pc = 0x284ea4u;
    // NOP
    // 0x284ea8: 0x8e6500b0  lw          $a1, 0xB0($s3)
    ctx->pc = 0x284ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x284eac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284eb0: 0x27a60134  addiu       $a2, $sp, 0x134
    ctx->pc = 0x284eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x284eb4: 0xc0524dc  jal         func_149370
    ctx->pc = 0x284EB4u;
    SET_GPR_U32(ctx, 31, 0x284EBCu);
    ctx->pc = 0x284EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284EB4u;
            // 0x284eb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284EBCu; }
        if (ctx->pc != 0x284EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284EBCu; }
        if (ctx->pc != 0x284EBCu) { return; }
    }
    ctx->pc = 0x284EBCu;
label_284ebc:
    // 0x284ebc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x284EBCu;
    {
        const bool branch_taken_0x284ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284ebc) {
            ctx->pc = 0x284EE4u;
            goto label_284ee4;
        }
    }
    ctx->pc = 0x284EC4u;
    // 0x284ec4: 0x8e6500b0  lw          $a1, 0xB0($s3)
    ctx->pc = 0x284ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x284ec8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x284ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x284ecc: 0x27a60134  addiu       $a2, $sp, 0x134
    ctx->pc = 0x284eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x284ed0: 0xc0524dc  jal         func_149370
    ctx->pc = 0x284ED0u;
    SET_GPR_U32(ctx, 31, 0x284ED8u);
    ctx->pc = 0x284ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284ED0u;
            // 0x284ed4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284ED8u; }
        if (ctx->pc != 0x284ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284ED8u; }
        if (ctx->pc != 0x284ED8u) { return; }
    }
    ctx->pc = 0x284ED8u;
label_284ed8:
    // 0x284ed8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x284ED8u;
    {
        const bool branch_taken_0x284ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284ed8) {
            ctx->pc = 0x284EE4u;
            goto label_284ee4;
        }
    }
    ctx->pc = 0x284EE0u;
    // 0x284ee0: 0xae6000b0  sw          $zero, 0xB0($s3)
    ctx->pc = 0x284ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 0));
label_284ee4:
    // 0x284ee4: 0x0  nop
    ctx->pc = 0x284ee4u;
    // NOP
    // 0x284ee8: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x284ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x284eec: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284EECu;
    {
        const bool branch_taken_0x284eec = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x284EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284EECu;
            // 0x284ef0: 0x3082003f  andi        $v0, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284eec) {
            ctx->pc = 0x284F00u;
            goto label_284f00;
        }
    }
    ctx->pc = 0x284EF4u;
    // 0x284ef4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x284EF4u;
    {
        const bool branch_taken_0x284ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284ef4) {
            ctx->pc = 0x284F00u;
            goto label_284f00;
        }
    }
    ctx->pc = 0x284EFCu;
    // 0x284efc: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x284efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_284f00:
    // 0x284f00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x284F00u;
    {
        const bool branch_taken_0x284f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F00u;
            // 0x284f04: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f00) {
            ctx->pc = 0x284F28u;
            goto label_284f28;
        }
    }
    ctx->pc = 0x284F08u;
    // 0x284f08: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284F08u;
    {
        const bool branch_taken_0x284f08 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x284F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F08u;
            // 0x284f0c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f08) {
            ctx->pc = 0x284F20u;
            goto label_284f20;
        }
    }
    ctx->pc = 0x284F10u;
    // 0x284f10: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x284F10u;
    {
        const bool branch_taken_0x284f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284f10) {
            ctx->pc = 0x284F1Cu;
            goto label_284f1c;
        }
    }
    ctx->pc = 0x284F18u;
    // 0x284f18: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x284f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_284f1c:
    // 0x284f1c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x284f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_284f20:
    // 0x284f20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x284f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284f24: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x284f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_284f28:
    // 0x284f28: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284F28u;
    {
        const bool branch_taken_0x284f28 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x284F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F28u;
            // 0x284f2c: 0x41103  sra         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f28) {
            ctx->pc = 0x284F38u;
            goto label_284f38;
        }
    }
    ctx->pc = 0x284F30u;
    // 0x284f30: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x284f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x284f34: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x284f34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_284f38:
    // 0x284f38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x284f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x284f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f40: 0xc04e780  jal         func_139E00
    ctx->pc = 0x284F40u;
    SET_GPR_U32(ctx, 31, 0x284F48u);
    ctx->pc = 0x284F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284F40u;
            // 0x284f44: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F48u; }
        if (ctx->pc != 0x284F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F48u; }
        if (ctx->pc != 0x284F48u) { return; }
    }
    ctx->pc = 0x284F48u;
label_284f48:
    // 0x284f48: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284f4c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x284F4Cu;
    SET_GPR_U32(ctx, 31, 0x284F54u);
    ctx->pc = 0x284F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284F4Cu;
            // 0x284f50: 0x26650004  addiu       $a1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F54u; }
        if (ctx->pc != 0x284F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F54u; }
        if (ctx->pc != 0x284F54u) { return; }
    }
    ctx->pc = 0x284F54u;
label_284f54:
    // 0x284f54: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284f58: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x284F58u;
    SET_GPR_U32(ctx, 31, 0x284F60u);
    ctx->pc = 0x284F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284F58u;
            // 0x284f5c: 0x26650054  addiu       $a1, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F60u; }
        if (ctx->pc != 0x284F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F60u; }
        if (ctx->pc != 0x284F60u) { return; }
    }
    ctx->pc = 0x284F60u;
label_284f60:
    // 0x284f60: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x284f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x284f64: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284f68: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x284F68u;
    SET_GPR_U32(ctx, 31, 0x284F70u);
    ctx->pc = 0x284F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284F68u;
            // 0x284f6c: 0x24a5d1b0  addiu       $a1, $a1, -0x2E50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F70u; }
        if (ctx->pc != 0x284F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F70u; }
        if (ctx->pc != 0x284F70u) { return; }
    }
    ctx->pc = 0x284F70u;
label_284f70:
    // 0x284f70: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x284f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x284f74: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x284f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x284f78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x284f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x284f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284f80: 0x12a00014  beqz        $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x284F80u;
    {
        const bool branch_taken_0x284f80 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F80u;
            // 0x284f84: 0xae6200a8  sw          $v0, 0xA8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f80) {
            ctx->pc = 0x284FD4u;
            goto label_284fd4;
        }
    }
    ctx->pc = 0x284F88u;
    // 0x284f88: 0x8e6500a8  lw          $a1, 0xA8($s3)
    ctx->pc = 0x284f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x284f8c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284f90: 0xc05224c  jal         func_148930
    ctx->pc = 0x284F90u;
    SET_GPR_U32(ctx, 31, 0x284F98u);
    ctx->pc = 0x284F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284F90u;
            // 0x284f94: 0x27a60138  addiu       $a2, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F98u; }
        if (ctx->pc != 0x284F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F98u; }
        if (ctx->pc != 0x284F98u) { return; }
    }
    ctx->pc = 0x284F98u;
label_284f98:
    // 0x284f98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x284F98u;
    {
        const bool branch_taken_0x284f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284f98) {
            ctx->pc = 0x284FC8u;
            goto label_284fc8;
        }
    }
    ctx->pc = 0x284FA0u;
    // 0x284fa0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x284fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x284fa4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x284fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x284fa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284FA8u;
    {
        const bool branch_taken_0x284fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284FA8u;
            // 0x284fac: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284fa8) {
            ctx->pc = 0x284FB8u;
            goto label_284fb8;
        }
    }
    ctx->pc = 0x284FB0u;
    // 0x284fb0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x284fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x284fb4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x284fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_284fb8:
    // 0x284fb8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x284FB8u;
    SET_GPR_U32(ctx, 31, 0x284FC0u);
    ctx->pc = 0x284FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284FB8u;
            // 0x284fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284FC0u; }
        if (ctx->pc != 0x284FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284FC0u; }
        if (ctx->pc != 0x284FC0u) { return; }
    }
    ctx->pc = 0x284FC0u;
label_284fc0:
    // 0x284fc0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x284FC0u;
    {
        const bool branch_taken_0x284fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284fc0) {
            ctx->pc = 0x285028u;
            goto label_285028;
        }
    }
    ctx->pc = 0x284FC8u;
label_284fc8:
    // 0x284fc8: 0xae6000a8  sw          $zero, 0xA8($s3)
    ctx->pc = 0x284fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 0));
    // 0x284fcc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x284FCCu;
    {
        const bool branch_taken_0x284fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284FCCu;
            // 0x284fd0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284fcc) {
            ctx->pc = 0x285028u;
            goto label_285028;
        }
    }
    ctx->pc = 0x284FD4u;
label_284fd4:
    // 0x284fd4: 0x0  nop
    ctx->pc = 0x284fd4u;
    // NOP
    // 0x284fd8: 0x8e6500a8  lw          $a1, 0xA8($s3)
    ctx->pc = 0x284fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x284fdc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x284fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x284fe0: 0x27a60138  addiu       $a2, $sp, 0x138
    ctx->pc = 0x284fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x284fe4: 0xc0524dc  jal         func_149370
    ctx->pc = 0x284FE4u;
    SET_GPR_U32(ctx, 31, 0x284FECu);
    ctx->pc = 0x284FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284FE4u;
            // 0x284fe8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284FECu; }
        if (ctx->pc != 0x284FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284FECu; }
        if (ctx->pc != 0x284FECu) { return; }
    }
    ctx->pc = 0x284FECu;
label_284fec:
    // 0x284fec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x284FECu;
    {
        const bool branch_taken_0x284fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284fec) {
            ctx->pc = 0x28501Cu;
            goto label_28501c;
        }
    }
    ctx->pc = 0x284FF4u;
    // 0x284ff4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x284ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x284ff8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x284ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x284ffc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284FFCu;
    {
        const bool branch_taken_0x284ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284FFCu;
            // 0x285000: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ffc) {
            ctx->pc = 0x28500Cu;
            goto label_28500c;
        }
    }
    ctx->pc = 0x285004u;
    // 0x285004: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x285004u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x285008: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x285008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28500c:
    // 0x28500c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x28500Cu;
    SET_GPR_U32(ctx, 31, 0x285014u);
    ctx->pc = 0x285010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28500Cu;
            // 0x285010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285014u; }
        if (ctx->pc != 0x285014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285014u; }
        if (ctx->pc != 0x285014u) { return; }
    }
    ctx->pc = 0x285014u;
label_285014:
    // 0x285014: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x285014u;
    {
        const bool branch_taken_0x285014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285014) {
            ctx->pc = 0x285028u;
            goto label_285028;
        }
    }
    ctx->pc = 0x28501Cu;
label_28501c:
    // 0x28501c: 0x0  nop
    ctx->pc = 0x28501cu;
    // NOP
    // 0x285020: 0xae6000a8  sw          $zero, 0xA8($s3)
    ctx->pc = 0x285020u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 0));
    // 0x285024: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x285024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285028:
    // 0x285028: 0xc04e780  jal         func_139E00
    ctx->pc = 0x285028u;
    SET_GPR_U32(ctx, 31, 0x285030u);
    ctx->pc = 0x28502Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285028u;
            // 0x28502c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285030u; }
        if (ctx->pc != 0x285030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285030u; }
        if (ctx->pc != 0x285030u) { return; }
    }
    ctx->pc = 0x285030u;
label_285030:
    // 0x285030: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x285030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x285034: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x285034u;
    SET_GPR_U32(ctx, 31, 0x28503Cu);
    ctx->pc = 0x285038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285034u;
            // 0x285038: 0x26650004  addiu       $a1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28503Cu; }
        if (ctx->pc != 0x28503Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28503Cu; }
        if (ctx->pc != 0x28503Cu) { return; }
    }
    ctx->pc = 0x28503Cu;
label_28503c:
    // 0x28503c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x28503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x285040: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x285040u;
    SET_GPR_U32(ctx, 31, 0x285048u);
    ctx->pc = 0x285044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285040u;
            // 0x285044: 0x26650064  addiu       $a1, $s3, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285048u; }
        if (ctx->pc != 0x285048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285048u; }
        if (ctx->pc != 0x285048u) { return; }
    }
    ctx->pc = 0x285048u;
label_285048:
    // 0x285048: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x285048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x28504c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x28504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x285050: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x285050u;
    SET_GPR_U32(ctx, 31, 0x285058u);
    ctx->pc = 0x285054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285050u;
            // 0x285054: 0x24a5d1b8  addiu       $a1, $a1, -0x2E48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285058u; }
        if (ctx->pc != 0x285058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285058u; }
        if (ctx->pc != 0x285058u) { return; }
    }
    ctx->pc = 0x285058u;
label_285058:
    // 0x285058: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x285058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x28505c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x28505cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x285060: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x285060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x285064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x285064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285068: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x285068u;
    {
        const bool branch_taken_0x285068 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x28506Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285068u;
            // 0x28506c: 0xae6200ac  sw          $v0, 0xAC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285068) {
            ctx->pc = 0x2850B8u;
            goto label_2850b8;
        }
    }
    ctx->pc = 0x285070u;
    // 0x285070: 0x8e6500ac  lw          $a1, 0xAC($s3)
    ctx->pc = 0x285070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
    // 0x285074: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x285074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x285078: 0xc05224c  jal         func_148930
    ctx->pc = 0x285078u;
    SET_GPR_U32(ctx, 31, 0x285080u);
    ctx->pc = 0x28507Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285078u;
            // 0x28507c: 0x27a6013c  addiu       $a2, $sp, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285080u; }
        if (ctx->pc != 0x285080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285080u; }
        if (ctx->pc != 0x285080u) { return; }
    }
    ctx->pc = 0x285080u;
label_285080:
    // 0x285080: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x285080u;
    {
        const bool branch_taken_0x285080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285080) {
            ctx->pc = 0x2850B0u;
            goto label_2850b0;
        }
    }
    ctx->pc = 0x285088u;
    // 0x285088: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x285088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x28508c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x28508cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x285090: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285090u;
    {
        const bool branch_taken_0x285090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285090u;
            // 0x285094: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285090) {
            ctx->pc = 0x2850A0u;
            goto label_2850a0;
        }
    }
    ctx->pc = 0x285098u;
    // 0x285098: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x285098u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x28509c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x28509cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2850a0:
    // 0x2850a0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2850A0u;
    SET_GPR_U32(ctx, 31, 0x2850A8u);
    ctx->pc = 0x2850A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2850A0u;
            // 0x2850a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2850A8u; }
        if (ctx->pc != 0x2850A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2850A8u; }
        if (ctx->pc != 0x2850A8u) { return; }
    }
    ctx->pc = 0x2850A8u;
label_2850a8:
    // 0x2850a8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2850A8u;
    {
        const bool branch_taken_0x2850a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2850a8) {
            ctx->pc = 0x285104u;
            goto label_285104;
        }
    }
    ctx->pc = 0x2850B0u;
label_2850b0:
    // 0x2850b0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2850B0u;
    {
        const bool branch_taken_0x2850b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2850B0u;
            // 0x2850b4: 0xae6000ac  sw          $zero, 0xAC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850b0) {
            ctx->pc = 0x285104u;
            goto label_285104;
        }
    }
    ctx->pc = 0x2850B8u;
label_2850b8:
    // 0x2850b8: 0x8e6500ac  lw          $a1, 0xAC($s3)
    ctx->pc = 0x2850b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
    // 0x2850bc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2850bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2850c0: 0x27a6013c  addiu       $a2, $sp, 0x13C
    ctx->pc = 0x2850c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x2850c4: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2850C4u;
    SET_GPR_U32(ctx, 31, 0x2850CCu);
    ctx->pc = 0x2850C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2850C4u;
            // 0x2850c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2850CCu; }
        if (ctx->pc != 0x2850CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2850CCu; }
        if (ctx->pc != 0x2850CCu) { return; }
    }
    ctx->pc = 0x2850CCu;
label_2850cc:
    // 0x2850cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2850CCu;
    {
        const bool branch_taken_0x2850cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2850cc) {
            ctx->pc = 0x2850FCu;
            goto label_2850fc;
        }
    }
    ctx->pc = 0x2850D4u;
    // 0x2850d4: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x2850d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2850d8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2850d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2850dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2850DCu;
    {
        const bool branch_taken_0x2850dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2850DCu;
            // 0x2850e0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850dc) {
            ctx->pc = 0x2850ECu;
            goto label_2850ec;
        }
    }
    ctx->pc = 0x2850E4u;
    // 0x2850e4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2850e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2850e8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2850e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2850ec:
    // 0x2850ec: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2850ECu;
    SET_GPR_U32(ctx, 31, 0x2850F4u);
    ctx->pc = 0x2850F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2850ECu;
            // 0x2850f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2850F4u; }
        if (ctx->pc != 0x2850F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2850F4u; }
        if (ctx->pc != 0x2850F4u) { return; }
    }
    ctx->pc = 0x2850F4u;
label_2850f4:
    // 0x2850f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2850F4u;
    {
        const bool branch_taken_0x2850f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2850f4) {
            ctx->pc = 0x285104u;
            goto label_285104;
        }
    }
    ctx->pc = 0x2850FCu;
label_2850fc:
    // 0x2850fc: 0x0  nop
    ctx->pc = 0x2850fcu;
    // NOP
    // 0x285100: 0xae6000ac  sw          $zero, 0xAC($s3)
    ctx->pc = 0x285100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 0));
label_285104:
    // 0x285104: 0x0  nop
    ctx->pc = 0x285104u;
    // NOP
    // 0x285108: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x285108u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x28510c: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x28510cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x285110: 0x1440feb8  bnez        $v0, . + 4 + (-0x148 << 2)
    ctx->pc = 0x285110u;
    {
        const bool branch_taken_0x285110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285110u;
            // 0x285114: 0x269400b4  addiu       $s4, $s4, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285110) {
            ctx->pc = 0x284BF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284bf4;
        }
    }
    ctx->pc = 0x285118u;
label_285118:
    // 0x285118: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x285118u;
    {
        const bool branch_taken_0x285118 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x28511Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285118u;
            // 0x28511c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285118) {
            ctx->pc = 0x285124u;
            goto label_285124;
        }
    }
    ctx->pc = 0x285120u;
    // 0x285120: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x285120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285124:
    // 0x285124: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x285124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x285128: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x285128u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28512c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28512cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x285130: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x285130u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285134: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x285134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285138: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x285138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28513c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28513cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285148: 0x3e00008  jr          $ra
    ctx->pc = 0x285148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28514Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285148u;
            // 0x28514c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x285150u;
}
