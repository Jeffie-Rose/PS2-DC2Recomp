#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishInAquarium__16CUserDataManagerFiff
// Address: 0x19cfd0 - 0x19d1c0
void GetFishInAquarium__16CUserDataManagerFiff_0x19cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishInAquarium__16CUserDataManagerFiff_0x19cfd0");
#endif

    switch (ctx->pc) {
        case 0x19d000u: goto label_19d000;
        case 0x19d010u: goto label_19d010;
        case 0x19d020u: goto label_19d020;
        case 0x19d02cu: goto label_19d02c;
        case 0x19d038u: goto label_19d038;
        case 0x19d050u: goto label_19d050;
        case 0x19d068u: goto label_19d068;
        case 0x19d080u: goto label_19d080;
        case 0x19d098u: goto label_19d098;
        case 0x19d0b0u: goto label_19d0b0;
        case 0x19d0c8u: goto label_19d0c8;
        case 0x19d0dcu: goto label_19d0dc;
        case 0x19d0f0u: goto label_19d0f0;
        case 0x19d100u: goto label_19d100;
        case 0x19d118u: goto label_19d118;
        case 0x19d134u: goto label_19d134;
        case 0x19d144u: goto label_19d144;
        case 0x19d14cu: goto label_19d14c;
        case 0x19d17cu: goto label_19d17c;
        case 0x19d190u: goto label_19d190;
        default: break;
    }

    ctx->pc = 0x19cfd0u;

    // 0x19cfd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19cfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19cfd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19cfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19cfd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19cfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19cfdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19cfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19cfe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19cfe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cfe4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x19cfe4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19cfe8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19cfe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cfec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19cfecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19cff0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19cff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19cff4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x19cff4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x19cff8: 0xc065c24  jal         func_197090
    ctx->pc = 0x19CFF8u;
    SET_GPR_U32(ctx, 31, 0x19D000u);
    ctx->pc = 0x19CFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CFF8u;
            // 0x19cffc: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D000u; }
        if (ctx->pc != 0x19D000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D000u; }
        if (ctx->pc != 0x19D000u) { return; }
    }
    ctx->pc = 0x19D000u;
label_19d000:
    // 0x19d000: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19d000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d008: 0xc067a78  jal         func_19E9E0
    ctx->pc = 0x19D008u;
    SET_GPR_U32(ctx, 31, 0x19D010u);
    ctx->pc = 0x19D00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D008u;
            // 0x19d00c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E9E0u;
    if (runtime->hasFunction(0x19E9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19E9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D010u; }
        if (ctx->pc != 0x19D010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__16CUserDataManagerFP13CGameDataUsedi_0x19e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D010u; }
        if (ctx->pc != 0x19D010u) { return; }
    }
    ctx->pc = 0x19D010u;
label_19d010:
    // 0x19d010: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x19d010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x19d014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d018: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19D018u;
    SET_GPR_U32(ctx, 31, 0x19D020u);
    ctx->pc = 0x19D01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D018u;
            // 0x19d01c: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D020u; }
        if (ctx->pc != 0x19D020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D020u; }
        if (ctx->pc != 0x19D020u) { return; }
    }
    ctx->pc = 0x19D020u;
label_19d020:
    // 0x19d020: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19d020u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19d024: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x19D024u;
    SET_GPR_U32(ctx, 31, 0x19D02Cu);
    ctx->pc = 0x19D028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D024u;
            // 0x19d028: 0xa7a20068  sh          $v0, 0x68($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 104), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D02Cu; }
        if (ctx->pc != 0x19D02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D02Cu; }
        if (ctx->pc != 0x19D02Cu) { return; }
    }
    ctx->pc = 0x19D02Cu;
label_19d02c:
    // 0x19d02c: 0xa7a2006a  sh          $v0, 0x6A($sp)
    ctx->pc = 0x19d02cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d030: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x19D030u;
    SET_GPR_U32(ctx, 31, 0x19D038u);
    ctx->pc = 0x19D034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D030u;
            // 0x19d034: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D038u; }
        if (ctx->pc != 0x19D038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D038u; }
        if (ctx->pc != 0x19D038u) { return; }
    }
    ctx->pc = 0x19D038u;
label_19d038:
    // 0x19d038: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x19d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19d03c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19d03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19d040: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x19d040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x19d044: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x19d044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x19d048: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x19D048u;
    SET_GPR_U32(ctx, 31, 0x19D050u);
    ctx->pc = 0x19D04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D048u;
            // 0x19d04c: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D050u; }
        if (ctx->pc != 0x19D050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D050u; }
        if (ctx->pc != 0x19D050u) { return; }
    }
    ctx->pc = 0x19D050u;
label_19d050:
    // 0x19d050: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19d050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d054: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19d054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19d058: 0x97a2007e  lhu         $v0, 0x7E($sp)
    ctx->pc = 0x19d058u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
    // 0x19d05c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d060: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x19D060u;
    SET_GPR_U32(ctx, 31, 0x19D068u);
    ctx->pc = 0x19D064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D060u;
            // 0x19d064: 0xa7a2007e  sh          $v0, 0x7E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D068u; }
        if (ctx->pc != 0x19D068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D068u; }
        if (ctx->pc != 0x19D068u) { return; }
    }
    ctx->pc = 0x19D068u;
label_19d068:
    // 0x19d068: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19d068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d06c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19d070: 0x97a2007c  lhu         $v0, 0x7C($sp)
    ctx->pc = 0x19d070u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x19d074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d078: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x19D078u;
    SET_GPR_U32(ctx, 31, 0x19D080u);
    ctx->pc = 0x19D07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D078u;
            // 0x19d07c: 0xa7a2007c  sh          $v0, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D080u; }
        if (ctx->pc != 0x19D080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D080u; }
        if (ctx->pc != 0x19D080u) { return; }
    }
    ctx->pc = 0x19D080u;
label_19d080:
    // 0x19d080: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19d080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d084: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19d084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19d088: 0x97a20076  lhu         $v0, 0x76($sp)
    ctx->pc = 0x19d088u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 118)));
    // 0x19d08c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d090: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x19D090u;
    SET_GPR_U32(ctx, 31, 0x19D098u);
    ctx->pc = 0x19D094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D090u;
            // 0x19d094: 0xa7a20076  sh          $v0, 0x76($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 118), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D098u; }
        if (ctx->pc != 0x19D098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D098u; }
        if (ctx->pc != 0x19D098u) { return; }
    }
    ctx->pc = 0x19D098u;
label_19d098:
    // 0x19d098: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19d098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d09c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19d09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19d0a0: 0x97a20078  lhu         $v0, 0x78($sp)
    ctx->pc = 0x19d0a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x19d0a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d0a8: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x19D0A8u;
    SET_GPR_U32(ctx, 31, 0x19D0B0u);
    ctx->pc = 0x19D0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0A8u;
            // 0x19d0ac: 0xa7a20078  sh          $v0, 0x78($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 120), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0B0u; }
        if (ctx->pc != 0x19D0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0B0u; }
        if (ctx->pc != 0x19D0B0u) { return; }
    }
    ctx->pc = 0x19D0B0u;
label_19d0b0:
    // 0x19d0b0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19d0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d0b4: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x19d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x19d0b8: 0x97a2007a  lhu         $v0, 0x7A($sp)
    ctx->pc = 0x19d0b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 122)));
    // 0x19d0bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d0c0: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x19D0C0u;
    SET_GPR_U32(ctx, 31, 0x19D0C8u);
    ctx->pc = 0x19D0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0C0u;
            // 0x19d0c4: 0xa7a2007a  sh          $v0, 0x7A($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0C8u; }
        if (ctx->pc != 0x19D0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0C8u; }
        if (ctx->pc != 0x19D0C8u) { return; }
    }
    ctx->pc = 0x19D0C8u;
label_19d0c8:
    // 0x19d0c8: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x19d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x19d0cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0d0: 0xa7a20086  sh          $v0, 0x86($sp)
    ctx->pc = 0x19d0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 134), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d0d4: 0xc067660  jal         func_19D980
    ctx->pc = 0x19D0D4u;
    SET_GPR_U32(ctx, 31, 0x19D0DCu);
    ctx->pc = 0x19D0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0D4u;
            // 0x19d0d8: 0xa3a00085  sb          $zero, 0x85($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 133), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D980u;
    if (runtime->hasFunction(0x19D980u)) {
        auto targetFn = runtime->lookupFunction(0x19D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0DCu; }
        if (ctx->pc != 0x19D0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedDataPtr__16CUserDataManagerFv_0x19d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0DCu; }
        if (ctx->pc != 0x19D0DCu) { return; }
    }
    ctx->pc = 0x19D0DCu;
label_19d0dc:
    // 0x19d0dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D0DCu;
    {
        const bool branch_taken_0x19d0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0DCu;
            // 0x19d0e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0dc) {
            ctx->pc = 0x19D0F8u;
            goto label_19d0f8;
        }
    }
    ctx->pc = 0x19D0E4u;
    // 0x19d0e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0e8: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x19D0E8u;
    SET_GPR_U32(ctx, 31, 0x19D0F0u);
    ctx->pc = 0x19D0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0E8u;
            // 0x19d0ec: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0F0u; }
        if (ctx->pc != 0x19D0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0F0u; }
        if (ctx->pc != 0x19D0F0u) { return; }
    }
    ctx->pc = 0x19D0F0u;
label_19d0f0:
    // 0x19d0f0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x19D0F0u;
    {
        const bool branch_taken_0x19d0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0F0u;
            // 0x19d0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0f0) {
            ctx->pc = 0x19D1A4u;
            goto label_19d1a4;
        }
    }
    ctx->pc = 0x19D0F8u;
label_19d0f8:
    // 0x19d0f8: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x19D0F8u;
    SET_GPR_U32(ctx, 31, 0x19D100u);
    ctx->pc = 0x19D0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0F8u;
            // 0x19d0fc: 0x24050135  addiu       $a1, $zero, 0x135 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D100u; }
        if (ctx->pc != 0x19D100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D100u; }
        if (ctx->pc != 0x19D100u) { return; }
    }
    ctx->pc = 0x19D100u;
label_19d100:
    // 0x19d100: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19D100u;
    {
        const bool branch_taken_0x19d100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D100u;
            // 0x19d104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d100) {
            ctx->pc = 0x19D12Cu;
            goto label_19d12c;
        }
    }
    ctx->pc = 0x19D108u;
    // 0x19d108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d10c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x19d10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19d110: 0xc067738  jal         func_19DCE0
    ctx->pc = 0x19D110u;
    SET_GPR_U32(ctx, 31, 0x19D118u);
    ctx->pc = 0x19D114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D110u;
            // 0x19d114: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DCE0u;
    if (runtime->hasFunction(0x19DCE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D118u; }
        if (ctx->pc != 0x19D118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FishInAquarium__16CUserDataManagerFP13CGameDataUsedi_0x19dce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D118u; }
        if (ctx->pc != 0x19D118u) { return; }
    }
    ctx->pc = 0x19D118u;
label_19d118:
    // 0x19d118: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D118u;
    {
        const bool branch_taken_0x19d118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D118u;
            // 0x19d11c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d118) {
            ctx->pc = 0x19D128u;
            goto label_19d128;
        }
    }
    ctx->pc = 0x19D120u;
    // 0x19d120: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x19D120u;
    {
        const bool branch_taken_0x19d120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D120u;
            // 0x19d124: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d120) {
            ctx->pc = 0x19D1A8u;
            goto label_19d1a8;
        }
    }
    ctx->pc = 0x19D128u;
label_19d128:
    // 0x19d128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19d12c:
    // 0x19d12c: 0xc0670c4  jal         func_19C310
    ctx->pc = 0x19D12Cu;
    SET_GPR_U32(ctx, 31, 0x19D134u);
    ctx->pc = 0x19D130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D12Cu;
            // 0x19d130: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C310u;
    if (runtime->hasFunction(0x19C310u)) {
        auto targetFn = runtime->lookupFunction(0x19C310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D134u; }
        if (ctx->pc != 0x19D134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemBoardOverNum__16CUserDataManagerFv_0x19c310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D134u; }
        if (ctx->pc != 0x19D134u) { return; }
    }
    ctx->pc = 0x19D134u;
label_19d134:
    // 0x19d134: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19d134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19d138: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x19D138u;
    {
        const bool branch_taken_0x19d138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d138) {
            ctx->pc = 0x19D19Cu;
            goto label_19d19c;
        }
    }
    ctx->pc = 0x19D140u;
    // 0x19d140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19d144:
    // 0x19d144: 0xc0670d4  jal         func_19C350
    ctx->pc = 0x19D144u;
    SET_GPR_U32(ctx, 31, 0x19D14Cu);
    ctx->pc = 0x19D148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D144u;
            // 0x19d148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C350u;
    if (runtime->hasFunction(0x19C350u)) {
        auto targetFn = runtime->lookupFunction(0x19C350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D14Cu; }
        if (ctx->pc != 0x19D14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemBoardMaxNum__16CUserDataManagerFi_0x19c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D14Cu; }
        if (ctx->pc != 0x19D14Cu) { return; }
    }
    ctx->pc = 0x19D14Cu;
label_19d14c:
    // 0x19d14c: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x19d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19d150: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19d150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d154: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19d154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d158: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19d158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d15c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d164: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19d164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19d168: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x19d168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19d16c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19D16Cu;
    {
        const bool branch_taken_0x19d16c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x19D170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D16Cu;
            // 0x19d170: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d16c) {
            ctx->pc = 0x19D184u;
            goto label_19d184;
        }
    }
    ctx->pc = 0x19D174u;
    // 0x19d174: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x19D174u;
    SET_GPR_U32(ctx, 31, 0x19D17Cu);
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D17Cu; }
        if (ctx->pc != 0x19D17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D17Cu; }
        if (ctx->pc != 0x19D17Cu) { return; }
    }
    ctx->pc = 0x19D17Cu;
label_19d17c:
    // 0x19d17c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19D17Cu;
    {
        const bool branch_taken_0x19d17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D17Cu;
            // 0x19d180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d17c) {
            ctx->pc = 0x19D1A4u;
            goto label_19d1a4;
        }
    }
    ctx->pc = 0x19D184u;
label_19d184:
    // 0x19d184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d188: 0xc0670c4  jal         func_19C310
    ctx->pc = 0x19D188u;
    SET_GPR_U32(ctx, 31, 0x19D190u);
    ctx->pc = 0x19D18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D188u;
            // 0x19d18c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C310u;
    if (runtime->hasFunction(0x19C310u)) {
        auto targetFn = runtime->lookupFunction(0x19C310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D190u; }
        if (ctx->pc != 0x19D190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemBoardOverNum__16CUserDataManagerFv_0x19c310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D190u; }
        if (ctx->pc != 0x19D190u) { return; }
    }
    ctx->pc = 0x19D190u;
label_19d190:
    // 0x19d190: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x19d190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19d194: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x19D194u;
    {
        const bool branch_taken_0x19d194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D194u;
            // 0x19d198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d194) {
            ctx->pc = 0x19D144u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19d144;
        }
    }
    ctx->pc = 0x19D19Cu;
label_19d19c:
    // 0x19d19c: 0x0  nop
    ctx->pc = 0x19d19cu;
    // NOP
    // 0x19d1a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19d1a4:
    // 0x19d1a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19d1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19d1a8:
    // 0x19d1a8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x19d1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19d1ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19d1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d1b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19d1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19d1b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19d1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D1B8u;
            // 0x19d1bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D1C0u;
}
