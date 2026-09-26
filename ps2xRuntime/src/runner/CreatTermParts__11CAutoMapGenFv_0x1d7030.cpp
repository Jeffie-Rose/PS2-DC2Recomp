#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatTermParts__11CAutoMapGenFv
// Address: 0x1d7030 - 0x1d7600
void CreatTermParts__11CAutoMapGenFv_0x1d7030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatTermParts__11CAutoMapGenFv_0x1d7030");
#endif

    switch (ctx->pc) {
        case 0x1d7060u: goto label_1d7060;
        case 0x1d7070u: goto label_1d7070;
        case 0x1d7080u: goto label_1d7080;
        case 0x1d7150u: goto label_1d7150;
        case 0x1d7158u: goto label_1d7158;
        case 0x1d7224u: goto label_1d7224;
        case 0x1d722cu: goto label_1d722c;
        case 0x1d7234u: goto label_1d7234;
        case 0x1d7370u: goto label_1d7370;
        case 0x1d7378u: goto label_1d7378;
        case 0x1d7394u: goto label_1d7394;
        case 0x1d73a0u: goto label_1d73a0;
        case 0x1d74b0u: goto label_1d74b0;
        default: break;
    }

    ctx->pc = 0x1d7030u;

    // 0x1d7030: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1d7030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1d7034: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d7034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1d7038: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d7038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d703c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d703cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d7040: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d7040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d7044: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d7044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d7048: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1d7048u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d704c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d704cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d7050: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d7050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d7054: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d7054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d7058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d705c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d705cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d7060:
    // 0x1d7060: 0x86c201b8  lh          $v0, 0x1B8($s6)
    ctx->pc = 0x1d7060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d7064: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d7064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7068: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D7068u;
    SET_GPR_U32(ctx, 31, 0x1D7070u);
    ctx->pc = 0x1D706Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7068u;
            // 0x1d706c: 0x2444fffc  addiu       $a0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7070u; }
        if (ctx->pc != 0x1D7070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7070u; }
        if (ctx->pc != 0x1D7070u) { return; }
    }
    ctx->pc = 0x1D7070u;
label_1d7070:
    // 0x1d7070: 0x24500002  addiu       $s0, $v0, 0x2
    ctx->pc = 0x1d7070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d7074: 0x86c201ba  lh          $v0, 0x1BA($s6)
    ctx->pc = 0x1d7074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 442)));
    // 0x1d7078: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D7078u;
    SET_GPR_U32(ctx, 31, 0x1D7080u);
    ctx->pc = 0x1D707Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7078u;
            // 0x1d707c: 0x2444fffc  addiu       $a0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7080u; }
        if (ctx->pc != 0x1D7080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7080u; }
        if (ctx->pc != 0x1D7080u) { return; }
    }
    ctx->pc = 0x1D7080u;
label_1d7080:
    // 0x1d7080: 0x86c301b8  lh          $v1, 0x1B8($s6)
    ctx->pc = 0x1d7080u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d7084: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x1d7084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d7088: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1d7088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d708c: 0x8ec201cc  lw          $v0, 0x1CC($s6)
    ctx->pc = 0x1d708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d7090: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x1d7090u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1d7094: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7098: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d7098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d709c: 0x2233018  mult        $a2, $s1, $v1
    ctx->pc = 0x1d709cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d70a0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1d70a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d70a4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1d70a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d70a8: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1d70a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d70ac: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x1d70acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d70b0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1d70b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d70b4: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1d70b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d70b8: 0x1507001f  bne         $t0, $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D70B8u;
    {
        const bool branch_taken_0x1d70b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x1D70BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70B8u;
            // 0x1d70bc: 0x2627ffff  addiu       $a3, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70b8) {
            ctx->pc = 0x1D7138u;
            goto label_1d7138;
        }
    }
    ctx->pc = 0x1D70C0u;
    // 0x1d70c0: 0xe34018  mult        $t0, $a3, $v1
    ctx->pc = 0x1d70c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1d70c4: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x1d70c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1d70c8: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1d70c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1d70cc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1d70ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1d70d0: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x1d70d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d70d4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1d70d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1d70d8: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1d70d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d70dc: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D70DCu;
    {
        const bool branch_taken_0x1d70dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d70dc) {
            ctx->pc = 0x1D70E8u;
            goto label_1d70e8;
        }
    }
    ctx->pc = 0x1D70E4u;
    // 0x1d70e4: 0x36520001  ori         $s2, $s2, 0x1
    ctx->pc = 0x1d70e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
label_1d70e8:
    // 0x1d70e8: 0x26270001  addiu       $a3, $s1, 0x1
    ctx->pc = 0x1d70e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d70ec: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x1d70ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d70f0: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1d70f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1d70f4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1d70f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d70f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d70fc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d70fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7100: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d7100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d7104: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d7104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7108: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7108u;
    {
        const bool branch_taken_0x1d7108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7108) {
            ctx->pc = 0x1D7114u;
            goto label_1d7114;
        }
    }
    ctx->pc = 0x1D7110u;
    // 0x1d7110: 0x36520002  ori         $s2, $s2, 0x2
    ctx->pc = 0x1d7110u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
label_1d7114:
    // 0x1d7114: 0x0  nop
    ctx->pc = 0x1d7114u;
    // NOP
    // 0x1d7118: 0x8ca3ffe4  lw          $v1, -0x1C($a1)
    ctx->pc = 0x1d7118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967268)));
    // 0x1d711c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D711Cu;
    {
        const bool branch_taken_0x1d711c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d711c) {
            ctx->pc = 0x1D7128u;
            goto label_1d7128;
        }
    }
    ctx->pc = 0x1D7124u;
    // 0x1d7124: 0x36520008  ori         $s2, $s2, 0x8
    ctx->pc = 0x1d7124u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8);
label_1d7128:
    // 0x1d7128: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1d7128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1d712c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D712Cu;
    {
        const bool branch_taken_0x1d712c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d712c) {
            ctx->pc = 0x1D7138u;
            goto label_1d7138;
        }
    }
    ctx->pc = 0x1D7134u;
    // 0x1d7134: 0x36520004  ori         $s2, $s2, 0x4
    ctx->pc = 0x1d7134u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
label_1d7138:
    // 0x1d7138: 0x1240ffc9  beqz        $s2, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1D7138u;
    {
        const bool branch_taken_0x1d7138 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7138) {
            ctx->pc = 0x1D7060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7060;
        }
    }
    ctx->pc = 0x1D7140u;
    // 0x1d7140: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1d7140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d7144: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d7144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d7148: 0x845e0008  lh          $fp, 0x8($v0)
    ctx->pc = 0x1d7148u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d714c: 0x0  nop
    ctx->pc = 0x1d714cu;
    // NOP
label_1d7150:
    // 0x1d7150: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D7150u;
    SET_GPR_U32(ctx, 31, 0x1D7158u);
    ctx->pc = 0x1D7154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7150u;
            // 0x1d7154: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7158u; }
        if (ctx->pc != 0x1D7158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7158u; }
        if (ctx->pc != 0x1D7158u) { return; }
    }
    ctx->pc = 0x1D7158u;
label_1d7158:
    // 0x1d7158: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d715c: 0x433804  sllv        $a3, $v1, $v0
    ctx->pc = 0x1d715cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d7160: 0x2471024  and         $v0, $s2, $a3
    ctx->pc = 0x1d7160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 7));
    // 0x1d7164: 0x0  nop
    ctx->pc = 0x1d7164u;
    // NOP
    // 0x1d7168: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D7168u;
    {
        const bool branch_taken_0x1d7168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7168) {
            ctx->pc = 0x1D7150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7150;
        }
    }
    ctx->pc = 0x1D7170u;
    // 0x1d7170: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d7170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d7174: 0x10e2000f  beq         $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D7174u;
    {
        const bool branch_taken_0x1d7174 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7174u;
            // 0x1d7178: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7174) {
            ctx->pc = 0x1D71B4u;
            goto label_1d71b4;
        }
    }
    ctx->pc = 0x1D717Cu;
    // 0x1d717c: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D717Cu;
    {
        const bool branch_taken_0x1d717c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D717Cu;
            // 0x1d7180: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d717c) {
            ctx->pc = 0x1D71ACu;
            goto label_1d71ac;
        }
    }
    ctx->pc = 0x1D7184u;
    // 0x1d7184: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7184u;
    {
        const bool branch_taken_0x1d7184 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d7184) {
            ctx->pc = 0x1D71A4u;
            goto label_1d71a4;
        }
    }
    ctx->pc = 0x1D718Cu;
    // 0x1d718c: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D718Cu;
    {
        const bool branch_taken_0x1d718c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d718c) {
            ctx->pc = 0x1D719Cu;
            goto label_1d719c;
        }
    }
    ctx->pc = 0x1D7194u;
    // 0x1d7194: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7194u;
    {
        const bool branch_taken_0x1d7194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7194u;
            // 0x1d7198: 0x86c801b8  lh          $t0, 0x1B8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7194) {
            ctx->pc = 0x1D71BCu;
            goto label_1d71bc;
        }
    }
    ctx->pc = 0x1D719Cu;
label_1d719c:
    // 0x1d719c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D719Cu;
    {
        const bool branch_taken_0x1d719c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D719Cu;
            // 0x1d71a0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d719c) {
            ctx->pc = 0x1D71B8u;
            goto label_1d71b8;
        }
    }
    ctx->pc = 0x1D71A4u;
label_1d71a4:
    // 0x1d71a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D71A4u;
    {
        const bool branch_taken_0x1d71a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D71A4u;
            // 0x1d71a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71a4) {
            ctx->pc = 0x1D71B8u;
            goto label_1d71b8;
        }
    }
    ctx->pc = 0x1D71ACu;
label_1d71ac:
    // 0x1d71ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D71ACu;
    {
        const bool branch_taken_0x1d71ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D71ACu;
            // 0x1d71b0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71ac) {
            ctx->pc = 0x1D71B8u;
            goto label_1d71b8;
        }
    }
    ctx->pc = 0x1D71B4u;
label_1d71b4:
    // 0x1d71b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d71b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d71b8:
    // 0x1d71b8: 0x86c801b8  lh          $t0, 0x1B8($s6)
    ctx->pc = 0x1d71b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
label_1d71bc:
    // 0x1d71bc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d71bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d71c0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d71c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d71c4: 0x8ec301cc  lw          $v1, 0x1CC($s6)
    ctx->pc = 0x1d71c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d71c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d71c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d71cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d71ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d71d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d71d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71d8: 0x2284818  mult        $t1, $s1, $t0
    ctx->pc = 0x1d71d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1d71dc: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x1d71dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1d71e0: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x1d71e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1d71e4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1d71e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1d71e8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1d71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d71ec: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x1d71ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d71f0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1d71f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d71f4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1d71f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1d71f8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1d71f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1d71fc: 0x86c801b8  lh          $t0, 0x1B8($s6)
    ctx->pc = 0x1d71fcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d7200: 0x8ec301cc  lw          $v1, 0x1CC($s6)
    ctx->pc = 0x1d7200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d7204: 0x72284818  mult1       $t1, $s1, $t0
    ctx->pc = 0x1d7204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1d7208: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x1d7208u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1d720c: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x1d720cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1d7210: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1d7210u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1d7214: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1d7214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1d7218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d721c: 0xc075814  jal         func_1D6050
    ctx->pc = 0x1D721Cu;
    SET_GPR_U32(ctx, 31, 0x1D7224u);
    ctx->pc = 0x1D7220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D721Cu;
            // 0x1d7220: 0xa45e0008  sh          $fp, 0x8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6050u;
    if (runtime->hasFunction(0x1D6050u)) {
        auto targetFn = runtime->lookupFunction(0x1D6050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7224u; }
        if (ctx->pc != 0x1D7224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRoadLinkMark__11CAutoMapGenFiii_0x1d6050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7224u; }
        if (ctx->pc != 0x1D7224u) { return; }
    }
    ctx->pc = 0x1D7224u;
label_1d7224:
    // 0x1d7224: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D7224u;
    SET_GPR_U32(ctx, 31, 0x1D722Cu);
    ctx->pc = 0x1D7228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7224u;
            // 0x1d7228: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D722Cu; }
        if (ctx->pc != 0x1D722Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D722Cu; }
        if (ctx->pc != 0x1D722Cu) { return; }
    }
    ctx->pc = 0x1D722Cu;
label_1d722c:
    // 0x1d722c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d722cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7230: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d7230u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7234:
    // 0x1d7234: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7234u;
    {
        const bool branch_taken_0x1d7234 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1d7234) {
            ctx->pc = 0x1D727Cu;
            goto label_1d727c;
        }
    }
    ctx->pc = 0x1D723Cu;
    // 0x1d723c: 0x86c501b8  lh          $a1, 0x1B8($s6)
    ctx->pc = 0x1d723cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d7240: 0x2626ffff  addiu       $a2, $s1, -0x1
    ctx->pc = 0x1d7240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d7244: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1d7244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d7248: 0x8ec401cc  lw          $a0, 0x1CC($s6)
    ctx->pc = 0x1d7248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d724c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1d724cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d7250: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d7250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d7254: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x1d7254u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d7258: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1d7258u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d725c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1d725cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d7260: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d7260u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d7264: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d7264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d7268: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d7268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d726c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d726cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7270: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7270u;
    {
        const bool branch_taken_0x1d7270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7270) {
            ctx->pc = 0x1D727Cu;
            goto label_1d727c;
        }
    }
    ctx->pc = 0x1D7278u;
    // 0x1d7278: 0x36f70001  ori         $s7, $s7, 0x1
    ctx->pc = 0x1d7278u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)1);
label_1d727c:
    // 0x1d727c: 0x0  nop
    ctx->pc = 0x1d727cu;
    // NOP
    // 0x1d7280: 0x86c301ba  lh          $v1, 0x1BA($s6)
    ctx->pc = 0x1d7280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 442)));
    // 0x1d7284: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1d7284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1d7288: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x1d7288u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d728c: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D728Cu;
    {
        const bool branch_taken_0x1d728c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d728c) {
            ctx->pc = 0x1D72D4u;
            goto label_1d72d4;
        }
    }
    ctx->pc = 0x1D7294u;
    // 0x1d7294: 0x86c501b8  lh          $a1, 0x1B8($s6)
    ctx->pc = 0x1d7294u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d7298: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x1d7298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d729c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1d729cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d72a0: 0x8ec401cc  lw          $a0, 0x1CC($s6)
    ctx->pc = 0x1d72a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d72a4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1d72a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d72a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d72a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d72ac: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x1d72acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d72b0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1d72b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d72b4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1d72b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d72b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d72b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d72bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d72bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d72c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d72c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d72c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d72c8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D72C8u;
    {
        const bool branch_taken_0x1d72c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d72c8) {
            ctx->pc = 0x1D72D4u;
            goto label_1d72d4;
        }
    }
    ctx->pc = 0x1D72D0u;
    // 0x1d72d0: 0x36f70002  ori         $s7, $s7, 0x2
    ctx->pc = 0x1d72d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
label_1d72d4:
    // 0x1d72d4: 0x0  nop
    ctx->pc = 0x1d72d4u;
    // NOP
    // 0x1d72d8: 0x1a000010  blez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D72D8u;
    {
        const bool branch_taken_0x1d72d8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1d72d8) {
            ctx->pc = 0x1D731Cu;
            goto label_1d731c;
        }
    }
    ctx->pc = 0x1D72E0u;
    // 0x1d72e0: 0x86c501b8  lh          $a1, 0x1B8($s6)
    ctx->pc = 0x1d72e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d72e4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1d72e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d72e8: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1d72e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d72ec: 0x8ec401cc  lw          $a0, 0x1CC($s6)
    ctx->pc = 0x1d72ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d72f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d72f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d72f4: 0x2253018  mult        $a2, $s1, $a1
    ctx->pc = 0x1d72f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d72f8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1d72f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d72fc: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1d72fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d7300: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d7300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d7304: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d7304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d7308: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d7308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d730c: 0x8c63ffe4  lw          $v1, -0x1C($v1)
    ctx->pc = 0x1d730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967268)));
    // 0x1d7310: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7310u;
    {
        const bool branch_taken_0x1d7310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7310) {
            ctx->pc = 0x1D731Cu;
            goto label_1d731c;
        }
    }
    ctx->pc = 0x1D7318u;
    // 0x1d7318: 0x36f70008  ori         $s7, $s7, 0x8
    ctx->pc = 0x1d7318u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)8);
label_1d731c:
    // 0x1d731c: 0x0  nop
    ctx->pc = 0x1d731cu;
    // NOP
    // 0x1d7320: 0x86c401b8  lh          $a0, 0x1B8($s6)
    ctx->pc = 0x1d7320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d7324: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x1d7324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x1d7328: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x1d7328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d732c: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1D732Cu;
    {
        const bool branch_taken_0x1d732c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D732Cu;
            // 0x1d7330: 0x2243018  mult        $a2, $s1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d732c) {
            ctx->pc = 0x1D7368u;
            goto label_1d7368;
        }
    }
    ctx->pc = 0x1D7334u;
    // 0x1d7334: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1d7334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d7338: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1d7338u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d733c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d733cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d7340: 0x8ec401cc  lw          $a0, 0x1CC($s6)
    ctx->pc = 0x1d7340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d7344: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1d7344u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d7348: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1d7348u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d734c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d734cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d7350: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d7350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d7354: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d7354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d7358: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x1d7358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1d735c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D735Cu;
    {
        const bool branch_taken_0x1d735c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d735c) {
            ctx->pc = 0x1D7368u;
            goto label_1d7368;
        }
    }
    ctx->pc = 0x1D7364u;
    // 0x1d7364: 0x36f70004  ori         $s7, $s7, 0x4
    ctx->pc = 0x1d7364u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)4);
label_1d7368:
    // 0x1d7368: 0x12e00098  beqz        $s7, . + 4 + (0x98 << 2)
    ctx->pc = 0x1D7368u;
    {
        const bool branch_taken_0x1d7368 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7368) {
            ctx->pc = 0x1D75CCu;
            goto label_1d75cc;
        }
    }
    ctx->pc = 0x1D7370u;
label_1d7370:
    // 0x1d7370: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D7370u;
    SET_GPR_U32(ctx, 31, 0x1D7378u);
    ctx->pc = 0x1D7374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7370u;
            // 0x1d7374: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7378u; }
        if (ctx->pc != 0x1D7378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7378u; }
        if (ctx->pc != 0x1D7378u) { return; }
    }
    ctx->pc = 0x1D7378u;
label_1d7378:
    // 0x1d7378: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d737c: 0x43a804  sllv        $s5, $v1, $v0
    ctx->pc = 0x1d737cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d7380: 0x2f51024  and         $v0, $s7, $s5
    ctx->pc = 0x1d7380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 21));
    // 0x1d7384: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D7384u;
    {
        const bool branch_taken_0x1d7384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7384) {
            ctx->pc = 0x1D7370u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7370;
        }
    }
    ctx->pc = 0x1D738Cu;
    // 0x1d738c: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D738Cu;
    SET_GPR_U32(ctx, 31, 0x1D7394u);
    ctx->pc = 0x1D7390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D738Cu;
            // 0x1d7390: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7394u; }
        if (ctx->pc != 0x1D7394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7394u; }
        if (ctx->pc != 0x1D7394u) { return; }
    }
    ctx->pc = 0x1D7394u;
label_1d7394:
    // 0x1d7394: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d7394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7398: 0x1a600089  blez        $s3, . + 4 + (0x89 << 2)
    ctx->pc = 0x1D7398u;
    {
        const bool branch_taken_0x1d7398 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1D739Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7398u;
            // 0x1d739c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7398) {
            ctx->pc = 0x1D75C0u;
            goto label_1d75c0;
        }
    }
    ctx->pc = 0x1D73A0u;
label_1d73a0:
    // 0x1d73a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d73a4: 0x12a2001e  beq         $s5, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D73A4u;
    {
        const bool branch_taken_0x1d73a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D73A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D73A4u;
            // 0x1d73a8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73a4) {
            ctx->pc = 0x1D7420u;
            goto label_1d7420;
        }
    }
    ctx->pc = 0x1D73ACu;
    // 0x1d73ac: 0x12a20016  beq         $s5, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D73ACu;
    {
        const bool branch_taken_0x1d73ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D73B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D73ACu;
            // 0x1d73b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73ac) {
            ctx->pc = 0x1D7408u;
            goto label_1d7408;
        }
    }
    ctx->pc = 0x1D73B4u;
    // 0x1d73b4: 0x12a2000c  beq         $s5, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D73B4u;
    {
        const bool branch_taken_0x1d73b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D73B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D73B4u;
            // 0x1d73b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73b4) {
            ctx->pc = 0x1D73E8u;
            goto label_1d73e8;
        }
    }
    ctx->pc = 0x1D73BCu;
    // 0x1d73bc: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D73BCu;
    {
        const bool branch_taken_0x1d73bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d73bc) {
            ctx->pc = 0x1D73CCu;
            goto label_1d73cc;
        }
    }
    ctx->pc = 0x1D73C4u;
    // 0x1d73c4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1D73C4u;
    {
        const bool branch_taken_0x1d73c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d73c4) {
            ctx->pc = 0x1D743Cu;
            goto label_1d743c;
        }
    }
    ctx->pc = 0x1D73CCu;
label_1d73cc:
    // 0x1d73cc: 0x0  nop
    ctx->pc = 0x1d73ccu;
    // NOP
    // 0x1d73d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d73d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d73d4: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x1d73d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d73d8: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D73D8u;
    {
        const bool branch_taken_0x1d73d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d73d8) {
            ctx->pc = 0x1D743Cu;
            goto label_1d743c;
        }
    }
    ctx->pc = 0x1D73E0u;
    // 0x1d73e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D73E0u;
    {
        const bool branch_taken_0x1d73e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D73E0u;
            // 0x1d73e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73e0) {
            ctx->pc = 0x1D743Cu;
            goto label_1d743c;
        }
    }
    ctx->pc = 0x1D73E8u;
label_1d73e8:
    // 0x1d73e8: 0x86c201ba  lh          $v0, 0x1BA($s6)
    ctx->pc = 0x1d73e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 442)));
    // 0x1d73ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d73ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d73f0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1d73f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1d73f4: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x1d73f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d73f8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D73F8u;
    {
        const bool branch_taken_0x1d73f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d73f8) {
            ctx->pc = 0x1D743Cu;
            goto label_1d743c;
        }
    }
    ctx->pc = 0x1D7400u;
    // 0x1d7400: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D7400u;
    {
        const bool branch_taken_0x1d7400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7400u;
            // 0x1d7404: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7400) {
            ctx->pc = 0x1D743Cu;
            goto label_1d743c;
        }
    }
    ctx->pc = 0x1D7408u;
label_1d7408:
    // 0x1d7408: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d7408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d740c: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x1d740cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d7410: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7410u;
    {
        const bool branch_taken_0x1d7410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7410) {
            ctx->pc = 0x1D743Cu;
            goto label_1d743c;
        }
    }
    ctx->pc = 0x1D7418u;
    // 0x1d7418: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7418u;
    {
        const bool branch_taken_0x1d7418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D741Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7418u;
            // 0x1d741c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7418) {
            ctx->pc = 0x1D743Cu;
            goto label_1d743c;
        }
    }
    ctx->pc = 0x1D7420u;
label_1d7420:
    // 0x1d7420: 0x86c201b8  lh          $v0, 0x1B8($s6)
    ctx->pc = 0x1d7420u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d7424: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d7424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d7428: 0x2442ffeb  addiu       $v0, $v0, -0x15
    ctx->pc = 0x1d7428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
    // 0x1d742c: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x1d742cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d7430: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7430u;
    {
        const bool branch_taken_0x1d7430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7430) {
            ctx->pc = 0x1D743Cu;
            goto label_1d743c;
        }
    }
    ctx->pc = 0x1D7438u;
    // 0x1d7438: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d7438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d743c:
    // 0x1d743c: 0x0  nop
    ctx->pc = 0x1d743cu;
    // NOP
    // 0x1d7440: 0x86c801b8  lh          $t0, 0x1B8($s6)
    ctx->pc = 0x1d7440u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d7444: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d7444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d7448: 0x8ec301cc  lw          $v1, 0x1CC($s6)
    ctx->pc = 0x1d7448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d744c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d744cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d7450: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d7450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7454: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x1d7454u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7458: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d7458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d745c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d745cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7460: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1d7460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7464: 0x2284018  mult        $t0, $s1, $t0
    ctx->pc = 0x1d7464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1d7468: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x1d7468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1d746c: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1d746cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1d7470: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7474: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d7474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d7478: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1d7478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1d747c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7480: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1d7480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1d7484: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d7484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1d7488: 0x86c301b8  lh          $v1, 0x1B8($s6)
    ctx->pc = 0x1d7488u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d748c: 0x8ec201cc  lw          $v0, 0x1CC($s6)
    ctx->pc = 0x1d748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d7490: 0x72234018  mult1       $t0, $s1, $v1
    ctx->pc = 0x1d7490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1d7494: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x1d7494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1d7498: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1d7498u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d749c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d749cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d74a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d74a4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1d74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1d74a8: 0xc075814  jal         func_1D6050
    ctx->pc = 0x1D74A8u;
    SET_GPR_U32(ctx, 31, 0x1D74B0u);
    ctx->pc = 0x1D74ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74A8u;
            // 0x1d74ac: 0xa45e0008  sh          $fp, 0x8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6050u;
    if (runtime->hasFunction(0x1D6050u)) {
        auto targetFn = runtime->lookupFunction(0x1D6050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D74B0u; }
        if (ctx->pc != 0x1D74B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRoadLinkMark__11CAutoMapGenFiii_0x1d6050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D74B0u; }
        if (ctx->pc != 0x1D74B0u) { return; }
    }
    ctx->pc = 0x1D74B0u;
label_1d74b0:
    // 0x1d74b0: 0x1a600043  blez        $s3, . + 4 + (0x43 << 2)
    ctx->pc = 0x1D74B0u;
    {
        const bool branch_taken_0x1d74b0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1D74B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74B0u;
            // 0x1d74b4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74b0) {
            ctx->pc = 0x1D75C0u;
            goto label_1d75c0;
        }
    }
    ctx->pc = 0x1D74B8u;
    // 0x1d74b8: 0x12a30032  beq         $s5, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D74B8u;
    {
        const bool branch_taken_0x1d74b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D74BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74B8u;
            // 0x1d74bc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74b8) {
            ctx->pc = 0x1D7584u;
            goto label_1d7584;
        }
    }
    ctx->pc = 0x1D74C0u;
    // 0x1d74c0: 0x12a30023  beq         $s5, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D74C0u;
    {
        const bool branch_taken_0x1d74c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D74C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74C0u;
            // 0x1d74c4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74c0) {
            ctx->pc = 0x1D7550u;
            goto label_1d7550;
        }
    }
    ctx->pc = 0x1D74C8u;
    // 0x1d74c8: 0x12a30013  beq         $s5, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D74C8u;
    {
        const bool branch_taken_0x1d74c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D74CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74C8u;
            // 0x1d74cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74c8) {
            ctx->pc = 0x1D7518u;
            goto label_1d7518;
        }
    }
    ctx->pc = 0x1D74D0u;
    // 0x1d74d0: 0x12a30003  beq         $s5, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D74D0u;
    {
        const bool branch_taken_0x1d74d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d74d0) {
            ctx->pc = 0x1D74E0u;
            goto label_1d74e0;
        }
    }
    ctx->pc = 0x1D74D8u;
    // 0x1d74d8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1D74D8u;
    {
        const bool branch_taken_0x1d74d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d74d8) {
            ctx->pc = 0x1D75B8u;
            goto label_1d75b8;
        }
    }
    ctx->pc = 0x1D74E0u;
label_1d74e0:
    // 0x1d74e0: 0x86c401b8  lh          $a0, 0x1B8($s6)
    ctx->pc = 0x1d74e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d74e4: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x1d74e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d74e8: 0x8ec301cc  lw          $v1, 0x1CC($s6)
    ctx->pc = 0x1d74e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d74ec: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x1d74ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d74f0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d74f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d74f4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d74f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d74f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d74f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d74fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d74fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d7500: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1d7500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1d7504: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d7504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7508: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D7508u;
    {
        const bool branch_taken_0x1d7508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7508) {
            ctx->pc = 0x1D75B8u;
            goto label_1d75b8;
        }
    }
    ctx->pc = 0x1D7510u;
    // 0x1d7510: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1D7510u;
    {
        const bool branch_taken_0x1d7510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7510u;
            // 0x1d7514: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7510) {
            ctx->pc = 0x1D75B8u;
            goto label_1d75b8;
        }
    }
    ctx->pc = 0x1D7518u;
label_1d7518:
    // 0x1d7518: 0x86c401b8  lh          $a0, 0x1B8($s6)
    ctx->pc = 0x1d7518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d751c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x1d751cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d7520: 0x8ec301cc  lw          $v1, 0x1CC($s6)
    ctx->pc = 0x1d7520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d7524: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x1d7524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d7528: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d7528u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d752c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d752cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d7530: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d7530u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d7534: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d7534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d7538: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1d7538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1d753c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d753cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7540: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D7540u;
    {
        const bool branch_taken_0x1d7540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7540) {
            ctx->pc = 0x1D75B8u;
            goto label_1d75b8;
        }
    }
    ctx->pc = 0x1D7548u;
    // 0x1d7548: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D7548u;
    {
        const bool branch_taken_0x1d7548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D754Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7548u;
            // 0x1d754c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7548) {
            ctx->pc = 0x1D75B8u;
            goto label_1d75b8;
        }
    }
    ctx->pc = 0x1D7550u;
label_1d7550:
    // 0x1d7550: 0x86c401b8  lh          $a0, 0x1B8($s6)
    ctx->pc = 0x1d7550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d7554: 0x8ec301cc  lw          $v1, 0x1CC($s6)
    ctx->pc = 0x1d7554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d7558: 0x2242818  mult        $a1, $s1, $a0
    ctx->pc = 0x1d7558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d755c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d755cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d7560: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d7560u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d7564: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d7564u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d7568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d7568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d756c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1d756cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1d7570: 0x8c63ffe4  lw          $v1, -0x1C($v1)
    ctx->pc = 0x1d7570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967268)));
    // 0x1d7574: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D7574u;
    {
        const bool branch_taken_0x1d7574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7574) {
            ctx->pc = 0x1D75B8u;
            goto label_1d75b8;
        }
    }
    ctx->pc = 0x1D757Cu;
    // 0x1d757c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D757Cu;
    {
        const bool branch_taken_0x1d757c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D757Cu;
            // 0x1d7580: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d757c) {
            ctx->pc = 0x1D75B8u;
            goto label_1d75b8;
        }
    }
    ctx->pc = 0x1D7584u;
label_1d7584:
    // 0x1d7584: 0x0  nop
    ctx->pc = 0x1d7584u;
    // NOP
    // 0x1d7588: 0x86c401b8  lh          $a0, 0x1B8($s6)
    ctx->pc = 0x1d7588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d758c: 0x8ec301cc  lw          $v1, 0x1CC($s6)
    ctx->pc = 0x1d758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d7590: 0x2242818  mult        $a1, $s1, $a0
    ctx->pc = 0x1d7590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d7594: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d7594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d7598: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d7598u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d759c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d759cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d75a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d75a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d75a4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1d75a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1d75a8: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x1d75a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1d75ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D75ACu;
    {
        const bool branch_taken_0x1d75ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d75ac) {
            ctx->pc = 0x1D75B8u;
            goto label_1d75b8;
        }
    }
    ctx->pc = 0x1D75B4u;
    // 0x1d75b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d75b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d75b8:
    // 0x1d75b8: 0x1e60ff79  bgtz        $s3, . + 4 + (-0x87 << 2)
    ctx->pc = 0x1D75B8u;
    {
        const bool branch_taken_0x1d75b8 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x1d75b8) {
            ctx->pc = 0x1D73A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d73a0;
        }
    }
    ctx->pc = 0x1D75C0u;
label_1d75c0:
    // 0x1d75c0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d75c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d75c4: 0x1e40ff1b  bgtz        $s2, . + 4 + (-0xE5 << 2)
    ctx->pc = 0x1D75C4u;
    {
        const bool branch_taken_0x1d75c4 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1d75c4) {
            ctx->pc = 0x1D7234u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7234;
        }
    }
    ctx->pc = 0x1D75CCu;
label_1d75cc:
    // 0x1d75cc: 0x0  nop
    ctx->pc = 0x1d75ccu;
    // NOP
    // 0x1d75d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d75d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d75d4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d75d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d75d8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d75d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d75dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d75dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d75e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d75e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d75e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d75e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d75e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d75e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d75ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d75ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d75f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d75f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d75f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d75f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d75f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D75F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D75FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75F8u;
            // 0x1d75fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7600u;
}
