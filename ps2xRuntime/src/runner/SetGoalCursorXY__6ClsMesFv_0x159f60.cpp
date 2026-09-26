#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetGoalCursorXY__6ClsMesFv
// Address: 0x159f60 - 0x15a11c
void SetGoalCursorXY__6ClsMesFv_0x159f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGoalCursorXY__6ClsMesFv_0x159f60");
#endif

    switch (ctx->pc) {
        case 0x15a040u: goto label_15a040;
        case 0x15a084u: goto label_15a084;
        case 0x15a0bcu: goto label_15a0bc;
        default: break;
    }

    ctx->pc = 0x159f60u;

    // 0x159f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x159f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x159f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x159f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159f6c: 0x8c851ae4  lw          $a1, 0x1AE4($a0)
    ctx->pc = 0x159f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6884)));
    // 0x159f70: 0x4a00066  bltz        $a1, . + 4 + (0x66 << 2)
    ctx->pc = 0x159F70u;
    {
        const bool branch_taken_0x159f70 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x159F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159F70u;
            // 0x159f74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f70) {
            ctx->pc = 0x15A10Cu;
            goto label_15a10c;
        }
    }
    ctx->pc = 0x159F78u;
    // 0x159f78: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x159f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x159f7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x159f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x159f80: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x159F80u;
    {
        const bool branch_taken_0x159f80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x159f80) {
            ctx->pc = 0x159FD0u;
            goto label_159fd0;
        }
    }
    ctx->pc = 0x159F88u;
    // 0x159f88: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x159f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x159f8c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x159f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x159f90: 0x8c641b04  lw          $a0, 0x1B04($v1)
    ctx->pc = 0x159f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6916)));
    // 0x159f94: 0x480005d  bltz        $a0, . + 4 + (0x5D << 2)
    ctx->pc = 0x159F94u;
    {
        const bool branch_taken_0x159f94 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x159f94) {
            ctx->pc = 0x15A10Cu;
            goto label_15a10c;
        }
    }
    ctx->pc = 0x159F9Cu;
    // 0x159f9c: 0x8c631b08  lw          $v1, 0x1B08($v1)
    ctx->pc = 0x159f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6920)));
    // 0x159fa0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x159FA0u;
    {
        const bool branch_taken_0x159fa0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x159FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159FA0u;
            // 0x159fa4: 0x2483ffec  addiu       $v1, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fa0) {
            ctx->pc = 0x159FB4u;
            goto label_159fb4;
        }
    }
    ctx->pc = 0x159FA8u;
    // 0x159fa8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x159FA8u;
    {
        const bool branch_taken_0x159fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159FA8u;
            // 0x159fac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fa8) {
            ctx->pc = 0x15A110u;
            goto label_15a110;
        }
    }
    ctx->pc = 0x159FB0u;
    // 0x159fb0: 0x2483ffec  addiu       $v1, $a0, -0x14
    ctx->pc = 0x159fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_159fb4:
    // 0x159fb4: 0xae031ae8  sw          $v1, 0x1AE8($s0)
    ctx->pc = 0x159fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6888), GPR_U32(ctx, 3));
    // 0x159fb8: 0x8e031ae4  lw          $v1, 0x1AE4($s0)
    ctx->pc = 0x159fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6884)));
    // 0x159fbc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x159fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x159fc0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x159fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x159fc4: 0x8c631b08  lw          $v1, 0x1B08($v1)
    ctx->pc = 0x159fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6920)));
    // 0x159fc8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x159FC8u;
    {
        const bool branch_taken_0x159fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159FC8u;
            // 0x159fcc: 0xae031aec  sw          $v1, 0x1AEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6892), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fc8) {
            ctx->pc = 0x15A10Cu;
            goto label_15a10c;
        }
    }
    ctx->pc = 0x159FD0u;
label_159fd0:
    // 0x159fd0: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x159fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x159fd4: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x159fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x159fd8: 0x2444ffd8  addiu       $a0, $v0, -0x28
    ctx->pc = 0x159fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x159fdc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159FDCu;
    {
        const bool branch_taken_0x159fdc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x159FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159FDCu;
            // 0x159fe0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fdc) {
            ctx->pc = 0x159FECu;
            goto label_159fec;
        }
    }
    ctx->pc = 0x159FE4u;
    // 0x159fe4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x159fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x159fe8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x159fe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_159fec:
    // 0x159fec: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x159fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x159ff0: 0xae021ae8  sw          $v0, 0x1AE8($s0)
    ctx->pc = 0x159ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6888), GPR_U32(ctx, 2));
    // 0x159ff4: 0x8e0600c4  lw          $a2, 0xC4($s0)
    ctx->pc = 0x159ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x159ff8: 0x8e021ae4  lw          $v0, 0x1AE4($s0)
    ctx->pc = 0x159ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6884)));
    // 0x159ffc: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x159ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x15a000: 0x8e041b18  lw          $a0, 0x1B18($s0)
    ctx->pc = 0x15a000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6936)));
    // 0x15a004: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x15a004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x15a008: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x15a008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x15a00c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15a00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15a010: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x15a010u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x15a014: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A014u;
    {
        const bool branch_taken_0x15a014 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15A018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A014u;
            // 0x15a018: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a014) {
            ctx->pc = 0x15A024u;
            goto label_15a024;
        }
    }
    ctx->pc = 0x15A01Cu;
    // 0x15a01c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15a020: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15a020u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15a024:
    // 0x15a024: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15a024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15a028: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x15a028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x15a02c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x15a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x15a030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a034: 0xae021aec  sw          $v0, 0x1AEC($s0)
    ctx->pc = 0x15a034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6892), GPR_U32(ctx, 2));
    // 0x15a038: 0xc056bfc  jal         func_15AFF0
    ctx->pc = 0x15A038u;
    SET_GPR_U32(ctx, 31, 0x15A040u);
    ctx->pc = 0x15A03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A038u;
            // 0x15a03c: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AFF0u;
    if (runtime->hasFunction(0x15AFF0u)) {
        auto targetFn = runtime->lookupFunction(0x15AFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A040u; }
        if (ctx->pc != 0x15A040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCenteringXY__6ClsMesFPiPi_0x15aff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A040u; }
        if (ctx->pc != 0x15A040u) { return; }
    }
    ctx->pc = 0x15A040u;
label_15a040:
    // 0x15a040: 0x8e041ae8  lw          $a0, 0x1AE8($s0)
    ctx->pc = 0x15a040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6888)));
    // 0x15a044: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x15a044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a048: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15a048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15a04c: 0xae031ae8  sw          $v1, 0x1AE8($s0)
    ctx->pc = 0x15a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6888), GPR_U32(ctx, 3));
    // 0x15a050: 0x8e041aec  lw          $a0, 0x1AEC($s0)
    ctx->pc = 0x15a050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6892)));
    // 0x15a054: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x15a054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x15a058: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15a058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15a05c: 0xae031aec  sw          $v1, 0x1AEC($s0)
    ctx->pc = 0x15a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6892), GPR_U32(ctx, 3));
    // 0x15a060: 0x8e0317fc  lw          $v1, 0x17FC($s0)
    ctx->pc = 0x15a060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6140)));
    // 0x15a064: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x15A064u;
    {
        const bool branch_taken_0x15a064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a064) {
            ctx->pc = 0x15A10Cu;
            goto label_15a10c;
        }
    }
    ctx->pc = 0x15A06Cu;
    // 0x15a06c: 0x8e031afc  lw          $v1, 0x1AFC($s0)
    ctx->pc = 0x15a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6908)));
    // 0x15a070: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x15A070u;
    {
        const bool branch_taken_0x15a070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a070) {
            ctx->pc = 0x15A10Cu;
            goto label_15a10c;
        }
    }
    ctx->pc = 0x15A078u;
    // 0x15a078: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15a078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a07c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15a080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a084:
    // 0x15a084: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x15a084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x15a088: 0x8c631e14  lw          $v1, 0x1E14($v1)
    ctx->pc = 0x15a088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7700)));
    // 0x15a08c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A08Cu;
    {
        const bool branch_taken_0x15a08c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15a08c) {
            ctx->pc = 0x15A0A8u;
            goto label_15a0a8;
        }
    }
    ctx->pc = 0x15A094u;
    // 0x15a094: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15a094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a098: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15a098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15a09c: 0x28a30014  slti        $v1, $a1, 0x14
    ctx->pc = 0x15a09cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x15a0a0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15A0A0u;
    {
        const bool branch_taken_0x15a0a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0A0u;
            // 0x15a0a4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a0a0) {
            ctx->pc = 0x15A084u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15a084;
        }
    }
    ctx->pc = 0x15A0A8u;
label_15a0a8:
    // 0x15a0a8: 0x8e061b14  lw          $a2, 0x1B14($s0)
    ctx->pc = 0x15a0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6932)));
    // 0x15a0ac: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x15a0acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15a0b0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x15A0B0u;
    {
        const bool branch_taken_0x15a0b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0B0u;
            // 0x15a0b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a0b0) {
            ctx->pc = 0x15A0E8u;
            goto label_15a0e8;
        }
    }
    ctx->pc = 0x15A0B8u;
    // 0x15a0b8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x15a0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_15a0bc:
    // 0x15a0bc: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x15a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x15a0c0: 0x8c631e14  lw          $v1, 0x1E14($v1)
    ctx->pc = 0x15a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7700)));
    // 0x15a0c4: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x15a0c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15a0c8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15A0C8u;
    {
        const bool branch_taken_0x15a0c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a0c8) {
            ctx->pc = 0x15A0D4u;
            goto label_15a0d4;
        }
    }
    ctx->pc = 0x15A0D0u;
    // 0x15a0d0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15a0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_15a0d4:
    // 0x15a0d4: 0x0  nop
    ctx->pc = 0x15a0d4u;
    // NOP
    // 0x15a0d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15a0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a0dc: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x15a0dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15a0e0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x15A0E0u;
    {
        const bool branch_taken_0x15a0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0E0u;
            // 0x15a0e4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a0e0) {
            ctx->pc = 0x15A0BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15a0bc;
        }
    }
    ctx->pc = 0x15A0E8u;
label_15a0e8:
    // 0x15a0e8: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x15a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x15a0ec: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x15a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15a0f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A0F0u;
    {
        const bool branch_taken_0x15a0f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15A0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0F0u;
            // 0x15a0f4: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a0f0) {
            ctx->pc = 0x15A100u;
            goto label_15a100;
        }
    }
    ctx->pc = 0x15A0F8u;
    // 0x15a0f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15a0fc: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x15a0fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_15a100:
    // 0x15a100: 0x8e031ae8  lw          $v1, 0x1AE8($s0)
    ctx->pc = 0x15a100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6888)));
    // 0x15a104: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15a108: 0xae031ae8  sw          $v1, 0x1AE8($s0)
    ctx->pc = 0x15a108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6888), GPR_U32(ctx, 3));
label_15a10c:
    // 0x15a10c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15a10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15a110:
    // 0x15a110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a114: 0x3e00008  jr          $ra
    ctx->pc = 0x15A114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A114u;
            // 0x15a118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A11Cu;
}
