#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMsgAddInfo__13CGameDataUsedFPPcPPcPi
// Address: 0x197f50 - 0x1980c0
void GetMsgAddInfo__13CGameDataUsedFPPcPPcPi_0x197f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMsgAddInfo__13CGameDataUsedFPPcPPcPi_0x197f50");
#endif

    switch (ctx->pc) {
        case 0x197fa0u: goto label_197fa0;
        case 0x197fe4u: goto label_197fe4;
        case 0x197fecu: goto label_197fec;
        case 0x198004u: goto label_198004;
        case 0x198054u: goto label_198054;
        case 0x198088u: goto label_198088;
        case 0x1980a0u: goto label_1980a0;
        default: break;
    }

    ctx->pc = 0x197f50u;

    // 0x197f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x197f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x197f54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x197f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x197f58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x197f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x197f5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x197f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x197f60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x197f60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197f68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x197f68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197f70: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x197f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f74: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x197F74u;
    {
        const bool branch_taken_0x197f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F74u;
            // 0x197f78: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f74) {
            ctx->pc = 0x197F80u;
            goto label_197f80;
        }
    }
    ctx->pc = 0x197F7Cu;
    // 0x197f7c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x197f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_197f80:
    // 0x197f80: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x197F80u;
    {
        const bool branch_taken_0x197f80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x197f80) {
            ctx->pc = 0x197F8Cu;
            goto label_197f8c;
        }
    }
    ctx->pc = 0x197F88u;
    // 0x197f88: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x197f88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_197f8c:
    // 0x197f8c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x197F8Cu;
    {
        const bool branch_taken_0x197f8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F8Cu;
            // 0x197f90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f8c) {
            ctx->pc = 0x197F98u;
            goto label_197f98;
        }
    }
    ctx->pc = 0x197F94u;
    // 0x197f94: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x197f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_197f98:
    // 0x197f98: 0xc065dc0  jal         func_197700
    ctx->pc = 0x197F98u;
    SET_GPR_U32(ctx, 31, 0x197FA0u);
    ctx->pc = 0x197F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197F98u;
            // 0x197f9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FA0u; }
        if (ctx->pc != 0x197FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FA0u; }
        if (ctx->pc != 0x197FA0u) { return; }
    }
    ctx->pc = 0x197FA0u;
label_197fa0:
    // 0x197fa0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x197fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x197fa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x197fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197fa8: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x197fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x197fac: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x197FACu;
    {
        const bool branch_taken_0x197fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x197FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197FACu;
            // 0x197fb0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fac) {
            ctx->pc = 0x19800Cu;
            goto label_19800c;
        }
    }
    ctx->pc = 0x197FB4u;
    // 0x197fb4: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x197FB4u;
    {
        const bool branch_taken_0x197fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x197FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197FB4u;
            // 0x197fb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fb4) {
            ctx->pc = 0x197FF4u;
            goto label_197ff4;
        }
    }
    ctx->pc = 0x197FBCu;
    // 0x197fbc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197FBCu;
    {
        const bool branch_taken_0x197fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x197fbc) {
            ctx->pc = 0x197FCCu;
            goto label_197fcc;
        }
    }
    ctx->pc = 0x197FC4u;
    // 0x197fc4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x197FC4u;
    {
        const bool branch_taken_0x197fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197FC4u;
            // 0x197fc8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fc4) {
            ctx->pc = 0x1980A8u;
            goto label_1980a8;
        }
    }
    ctx->pc = 0x197FCCu;
label_197fcc:
    // 0x197fcc: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x197fccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x197fd0: 0x24030137  addiu       $v1, $zero, 0x137
    ctx->pc = 0x197fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x197fd4: 0x14830033  bne         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x197FD4u;
    {
        const bool branch_taken_0x197fd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x197fd4) {
            ctx->pc = 0x1980A4u;
            goto label_1980a4;
        }
    }
    ctx->pc = 0x197FDCu;
    // 0x197fdc: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x197FDCu;
    SET_GPR_U32(ctx, 31, 0x197FE4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FE4u; }
        if (ctx->pc != 0x197FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FE4u; }
        if (ctx->pc != 0x197FE4u) { return; }
    }
    ctx->pc = 0x197FE4u;
label_197fe4:
    // 0x197fe4: 0xc0677f8  jal         func_19DFE0
    ctx->pc = 0x197FE4u;
    SET_GPR_U32(ctx, 31, 0x197FECu);
    ctx->pc = 0x197FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197FE4u;
            // 0x197fe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFE0u;
    if (runtime->hasFunction(0x19DFE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FECu; }
        if (ctx->pc != 0x197FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetYarikomiMedal__16CUserDataManagerFv_0x19dfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FECu; }
        if (ctx->pc != 0x197FECu) { return; }
    }
    ctx->pc = 0x197FECu;
label_197fec:
    // 0x197fec: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x197FECu;
    {
        const bool branch_taken_0x197fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197FECu;
            // 0x197ff0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fec) {
            ctx->pc = 0x1980A4u;
            goto label_1980a4;
        }
    }
    ctx->pc = 0x197FF4u;
label_197ff4:
    // 0x197ff4: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x197FF4u;
    {
        const bool branch_taken_0x197ff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197FF4u;
            // 0x197ff8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ff4) {
            ctx->pc = 0x1980A4u;
            goto label_1980a4;
        }
    }
    ctx->pc = 0x197FFCu;
    // 0x197ffc: 0xc065c74  jal         func_1971D0
    ctx->pc = 0x197FFCu;
    SET_GPR_U32(ctx, 31, 0x198004u);
    ctx->pc = 0x1971D0u;
    if (runtime->hasFunction(0x1971D0u)) {
        auto targetFn = runtime->lookupFunction(0x1971D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198004u; }
        if (ctx->pc != 0x198004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLevel__13CGameDataUsedFv_0x1971d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198004u; }
        if (ctx->pc != 0x198004u) { return; }
    }
    ctx->pc = 0x198004u;
label_198004:
    // 0x198004: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x198004u;
    {
        const bool branch_taken_0x198004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198004u;
            // 0x198008: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198004) {
            ctx->pc = 0x1980A4u;
            goto label_1980a4;
        }
    }
    ctx->pc = 0x19800Cu;
label_19800c:
    // 0x19800c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x19800Cu;
    {
        const bool branch_taken_0x19800c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x198010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19800Cu;
            // 0x198010: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19800c) {
            ctx->pc = 0x198038u;
            goto label_198038;
        }
    }
    ctx->pc = 0x198014u;
    // 0x198014: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x198014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x198018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19801c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x19801cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x198020: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198020u;
    {
        const bool branch_taken_0x198020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x198020) {
            ctx->pc = 0x198030u;
            goto label_198030;
        }
    }
    ctx->pc = 0x198028u;
    // 0x198028: 0x84820018  lh          $v0, 0x18($a0)
    ctx->pc = 0x198028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x19802c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19802cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_198030:
    // 0x198030: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x198030u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x198034: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x198034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_198038:
    // 0x198038: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x198038u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19803c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19803Cu;
    {
        const bool branch_taken_0x19803c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19803Cu;
            // 0x198040: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19803c) {
            ctx->pc = 0x19804Cu;
            goto label_19804c;
        }
    }
    ctx->pc = 0x198044u;
    // 0x198044: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x198044u;
    {
        const bool branch_taken_0x198044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198044u;
            // 0x198048: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198044) {
            ctx->pc = 0x198058u;
            goto label_198058;
        }
    }
    ctx->pc = 0x19804Cu;
label_19804c:
    // 0x19804c: 0xc065810  jal         func_196040
    ctx->pc = 0x19804Cu;
    SET_GPR_U32(ctx, 31, 0x198054u);
    ctx->pc = 0x198050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19804Cu;
            // 0x198050: 0x86640002  lh          $a0, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198054u; }
        if (ctx->pc != 0x198054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198054u; }
        if (ctx->pc != 0x198054u) { return; }
    }
    ctx->pc = 0x198054u;
label_198054:
    // 0x198054: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x198054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_198058:
    // 0x198058: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x198058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19805c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x19805Cu;
    {
        const bool branch_taken_0x19805c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x198060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19805Cu;
            // 0x198060: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19805c) {
            ctx->pc = 0x198098u;
            goto label_198098;
        }
    }
    ctx->pc = 0x198064u;
    // 0x198064: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x198064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x198068: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x198068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19806c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x19806cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x198070: 0x24426290  addiu       $v0, $v0, 0x6290
    ctx->pc = 0x198070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25232));
    // 0x198074: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x198074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19807c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19807cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198080: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x198080u;
    SET_GPR_U32(ctx, 31, 0x198088u);
    ctx->pc = 0x198084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198080u;
            // 0x198084: 0x2484b0d0  addiu       $a0, $a0, -0x4F30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198088u; }
        if (ctx->pc != 0x198088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198088u; }
        if (ctx->pc != 0x198088u) { return; }
    }
    ctx->pc = 0x198088u;
label_198088:
    // 0x198088: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x198088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
    // 0x19808c: 0x2442b0d0  addiu       $v0, $v0, -0x4F30
    ctx->pc = 0x19808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947024));
    // 0x198090: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x198090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x198094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x198094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198098:
    // 0x198098: 0xc065dc0  jal         func_197700
    ctx->pc = 0x198098u;
    SET_GPR_U32(ctx, 31, 0x1980A0u);
    ctx->pc = 0x19809Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198098u;
            // 0x19809c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1980A0u; }
        if (ctx->pc != 0x1980A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1980A0u; }
        if (ctx->pc != 0x1980A0u) { return; }
    }
    ctx->pc = 0x1980A0u;
label_1980a0:
    // 0x1980a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1980a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1980a4:
    // 0x1980a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1980a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1980a8:
    // 0x1980a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1980a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1980ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1980acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1980b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1980b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1980b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1980b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1980b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1980B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1980BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1980B8u;
            // 0x1980bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1980C0u;
}
