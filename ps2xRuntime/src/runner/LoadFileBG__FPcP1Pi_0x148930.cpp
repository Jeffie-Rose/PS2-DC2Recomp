#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFileBG__FPcP1Pi
// Address: 0x148930 - 0x148be8
void LoadFileBG__FPcP1Pi_0x148930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFileBG__FPcP1Pi_0x148930");
#endif

    switch (ctx->pc) {
        case 0x148990u: goto label_148990;
        case 0x1489c0u: goto label_1489c0;
        case 0x1489ccu: goto label_1489cc;
        case 0x1489d8u: goto label_1489d8;
        case 0x1489f8u: goto label_1489f8;
        case 0x148a3cu: goto label_148a3c;
        case 0x148a58u: goto label_148a58;
        case 0x148aacu: goto label_148aac;
        case 0x148ad0u: goto label_148ad0;
        case 0x148aecu: goto label_148aec;
        case 0x148b48u: goto label_148b48;
        case 0x148b84u: goto label_148b84;
        default: break;
    }

    ctx->pc = 0x148930u;

    // 0x148930: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x148930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x148934: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x148934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x148938: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x148938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14893c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14893cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x148940: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x148940u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148944: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148948: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x148948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14894c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14894cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148950: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x148950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148954: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x148954u;
    {
        const bool branch_taken_0x148954 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x148958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148954u;
            // 0x148958: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148954) {
            ctx->pc = 0x148960u;
            goto label_148960;
        }
    }
    ctx->pc = 0x14895Cu;
    // 0x14895c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x14895cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_148960:
    // 0x148960: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x148960u;
    {
        const bool branch_taken_0x148960 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x148964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148960u;
            // 0x148964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148960) {
            ctx->pc = 0x148970u;
            goto label_148970;
        }
    }
    ctx->pc = 0x148968u;
    // 0x148968: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x148968u;
    {
        const bool branch_taken_0x148968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14896Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148968u;
            // 0x14896c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148968) {
            ctx->pc = 0x148BCCu;
            goto label_148bcc;
        }
    }
    ctx->pc = 0x148970u;
label_148970:
    // 0x148970: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x148970u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x148974: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148974u;
    {
        const bool branch_taken_0x148974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148974u;
            // 0x148978: 0x3c06003d  lui         $a2, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148974) {
            ctx->pc = 0x148984u;
            goto label_148984;
        }
    }
    ctx->pc = 0x14897Cu;
    // 0x14897c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x14897Cu;
    {
        const bool branch_taken_0x14897c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14897Cu;
            // 0x148980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14897c) {
            ctx->pc = 0x148BC8u;
            goto label_148bc8;
        }
    }
    ctx->pc = 0x148984u;
label_148984:
    // 0x148984: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x148984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x148988: 0x24c6aa80  addiu       $a2, $a2, -0x5580
    ctx->pc = 0x148988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945408));
    // 0x14898c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x14898cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_148990:
    // 0x148990: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x148990u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x148994: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x148994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x148998: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x148998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x14899c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x14899cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1489a0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1489a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1489a4: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x1489a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x1489a8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1489A8u;
    {
        const bool branch_taken_0x1489a8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1489ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1489A8u;
            // 0x1489ac: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489a8) {
            ctx->pc = 0x148990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148990;
        }
    }
    ctx->pc = 0x1489B0u;
    // 0x1489b0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1489b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1489b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1489b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1489b8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1489B8u;
    SET_GPR_U32(ctx, 31, 0x1489C0u);
    ctx->pc = 0x1489BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1489B8u;
            // 0x1489bc: 0x24a54390  addiu       $a1, $a1, 0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489C0u; }
        if (ctx->pc != 0x1489C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489C0u; }
        if (ctx->pc != 0x1489C0u) { return; }
    }
    ctx->pc = 0x1489C0u;
label_1489c0:
    // 0x1489c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1489c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1489c4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1489C4u;
    SET_GPR_U32(ctx, 31, 0x1489CCu);
    ctx->pc = 0x1489C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1489C4u;
            // 0x1489c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489CCu; }
        if (ctx->pc != 0x1489CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489CCu; }
        if (ctx->pc != 0x1489CCu) { return; }
    }
    ctx->pc = 0x1489CCu;
label_1489cc:
    // 0x1489cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1489ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1489d0: 0xc052434  jal         func_1490D0
    ctx->pc = 0x1489D0u;
    SET_GPR_U32(ctx, 31, 0x1489D8u);
    ctx->pc = 0x1489D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1489D0u;
            // 0x1489d4: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1490D0u;
    if (runtime->hasFunction(0x1490D0u)) {
        auto targetFn = runtime->lookupFunction(0x1490D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489D8u; }
        if (ctx->pc != 0x1489D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDevType__FPcPc_0x1490d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489D8u; }
        if (ctx->pc != 0x1489D8u) { return; }
    }
    ctx->pc = 0x1489D8u;
label_1489d8:
    // 0x1489d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1489d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1489dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1489dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1489e0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1489E0u;
    {
        const bool branch_taken_0x1489e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1489E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1489E0u;
            // 0x1489e4: 0x3c11003d  lui         $s1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489e0) {
            ctx->pc = 0x1489F0u;
            goto label_1489f0;
        }
    }
    ctx->pc = 0x1489E8u;
    // 0x1489e8: 0x8f908028  lw          $s0, -0x7FD8($gp)
    ctx->pc = 0x1489e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934568)));
    // 0x1489ec: 0x0  nop
    ctx->pc = 0x1489ecu;
    // NOP
label_1489f0:
    // 0x1489f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1489f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1489f4: 0x26318680  addiu       $s1, $s1, -0x7980
    ctx->pc = 0x1489f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936192));
label_1489f8:
    // 0x1489f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1489f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1489fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1489FCu;
    {
        const bool branch_taken_0x1489fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1489fc) {
            ctx->pc = 0x148A14u;
            goto label_148a14;
        }
    }
    ctx->pc = 0x148A04u;
    // 0x148a04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x148a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x148a08: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x148a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x148a0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x148A0Cu;
    {
        const bool branch_taken_0x148a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148A0Cu;
            // 0x148a10: 0x26310120  addiu       $s1, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a0c) {
            ctx->pc = 0x1489F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1489f8;
        }
    }
    ctx->pc = 0x148A14u;
label_148a14:
    // 0x148a14: 0x0  nop
    ctx->pc = 0x148a14u;
    // NOP
    // 0x148a18: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x148a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x148a1c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148A1Cu;
    {
        const bool branch_taken_0x148a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x148A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148A1Cu;
            // 0x148a20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a1c) {
            ctx->pc = 0x148A2Cu;
            goto label_148a2c;
        }
    }
    ctx->pc = 0x148A24u;
    // 0x148a24: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x148A24u;
    {
        const bool branch_taken_0x148a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148A24u;
            // 0x148a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a24) {
            ctx->pc = 0x148BC8u;
            goto label_148bc8;
        }
    }
    ctx->pc = 0x148A2Cu;
label_148a2c:
    // 0x148a2c: 0x1602001d  bne         $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x148A2Cu;
    {
        const bool branch_taken_0x148a2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x148A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148A2Cu;
            // 0x148a30: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a2c) {
            ctx->pc = 0x148AA4u;
            goto label_148aa4;
        }
    }
    ctx->pc = 0x148A34u;
    // 0x148a34: 0xc052214  jal         func_148850
    ctx->pc = 0x148A34u;
    SET_GPR_U32(ctx, 31, 0x148A3Cu);
    ctx->pc = 0x148A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148A34u;
            // 0x148a38: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (runtime->hasFunction(0x148850u)) {
        auto targetFn = runtime->lookupFunction(0x148850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A3Cu; }
        if (ctx->pc != 0x148A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFile__FPc_0x148850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A3Cu; }
        if (ctx->pc != 0x148A3Cu) { return; }
    }
    ctx->pc = 0x148A3Cu;
label_148a3c:
    // 0x148a3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a40: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148A40u;
    {
        const bool branch_taken_0x148a40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x148A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148A40u;
            // 0x148a44: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a40) {
            ctx->pc = 0x148A50u;
            goto label_148a50;
        }
    }
    ctx->pc = 0x148A48u;
    // 0x148a48: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x148A48u;
    {
        const bool branch_taken_0x148a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148A48u;
            // 0x148a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a48) {
            ctx->pc = 0x148BC8u;
            goto label_148bc8;
        }
    }
    ctx->pc = 0x148A50u;
label_148a50:
    // 0x148a50: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x148A50u;
    SET_GPR_U32(ctx, 31, 0x148A58u);
    ctx->pc = 0x148A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148A50u;
            // 0x148a54: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A58u; }
        if (ctx->pc != 0x148A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A58u; }
        if (ctx->pc != 0x148A58u) { return; }
    }
    ctx->pc = 0x148A58u;
label_148a58:
    // 0x148a58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148a5c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x148a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x148a60: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x148a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x148a64: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x148a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x148a68: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x148a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x148a6c: 0xae330110  sw          $s3, 0x110($s1)
    ctx->pc = 0x148a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 19));
    // 0x148a70: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x148a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148a74: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x148A74u;
    {
        const bool branch_taken_0x148a74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x148A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148A74u;
            // 0x148a78: 0xae220114  sw          $v0, 0x114($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a74) {
            ctx->pc = 0x148A84u;
            goto label_148a84;
        }
    }
    ctx->pc = 0x148A7Cu;
    // 0x148a7c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x148a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148a80: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x148a80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_148a84:
    // 0x148a84: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x148a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x148a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148a8c: 0x8f8388a4  lw          $v1, -0x775C($gp)
    ctx->pc = 0x148a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936740)));
    // 0x148a90: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x148a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x148a94: 0xae230118  sw          $v1, 0x118($s1)
    ctx->pc = 0x148a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 3));
    // 0x148a98: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x148a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x148a9c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x148A9Cu;
    {
        const bool branch_taken_0x148a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148A9Cu;
            // 0x148aa0: 0xae23011c  sw          $v1, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a9c) {
            ctx->pc = 0x148BC8u;
            goto label_148bc8;
        }
    }
    ctx->pc = 0x148AA4u;
label_148aa4:
    // 0x148aa4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x148AA4u;
    SET_GPR_U32(ctx, 31, 0x148AACu);
    ctx->pc = 0x148AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148AA4u;
            // 0x148aa8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148AACu; }
        if (ctx->pc != 0x148AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148AACu; }
        if (ctx->pc != 0x148AACu) { return; }
    }
    ctx->pc = 0x148AACu;
label_148aac:
    // 0x148aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148ab0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x148ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ab4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x148ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x148ab8: 0x27a5026c  addiu       $a1, $sp, 0x26C
    ctx->pc = 0x148ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
    // 0x148abc: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x148abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x148ac0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x148ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x148ac4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x148ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x148ac8: 0xc0526e4  jal         func_149B90
    ctx->pc = 0x148AC8u;
    SET_GPR_U32(ctx, 31, 0x148AD0u);
    ctx->pc = 0x148ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148AC8u;
            // 0x148acc: 0xae330110  sw          $s3, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149B90u;
    if (runtime->hasFunction(0x149B90u)) {
        auto targetFn = runtime->lookupFunction(0x149B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148AD0u; }
        if (ctx->pc != 0x148AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFileCache__FPcPi_0x149b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148AD0u; }
        if (ctx->pc != 0x148AD0u) { return; }
    }
    ctx->pc = 0x148AD0u;
label_148ad0:
    // 0x148ad0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x148AD0u;
    {
        const bool branch_taken_0x148ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148AD0u;
            // 0x148ad4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ad0) {
            ctx->pc = 0x148B2Cu;
            goto label_148b2c;
        }
    }
    ctx->pc = 0x148AD8u;
    // 0x148ad8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x148ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148adc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x148adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ae0: 0x27a6026c  addiu       $a2, $sp, 0x26C
    ctx->pc = 0x148ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
    // 0x148ae4: 0xc0524dc  jal         func_149370
    ctx->pc = 0x148AE4u;
    SET_GPR_U32(ctx, 31, 0x148AECu);
    ctx->pc = 0x148AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148AE4u;
            // 0x148ae8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148AECu; }
        if (ctx->pc != 0x148AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148AECu; }
        if (ctx->pc != 0x148AECu) { return; }
    }
    ctx->pc = 0x148AECu;
label_148aec:
    // 0x148aec: 0xae220118  sw          $v0, 0x118($s1)
    ctx->pc = 0x148aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
    // 0x148af0: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x148af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x148af4: 0xae220114  sw          $v0, 0x114($s1)
    ctx->pc = 0x148af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 2));
    // 0x148af8: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x148af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x148afc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x148AFCu;
    {
        const bool branch_taken_0x148afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148AFCu;
            // 0x148b00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148afc) {
            ctx->pc = 0x148B10u;
            goto label_148b10;
        }
    }
    ctx->pc = 0x148B04u;
    // 0x148b04: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x148b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x148b08: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x148B08u;
    {
        const bool branch_taken_0x148b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148B08u;
            // 0x148b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b08) {
            ctx->pc = 0x148BC8u;
            goto label_148bc8;
        }
    }
    ctx->pc = 0x148B10u;
label_148b10:
    // 0x148b10: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x148b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x148b14: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x148B14u;
    {
        const bool branch_taken_0x148b14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148B14u;
            // 0x148b18: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b14) {
            ctx->pc = 0x148B24u;
            goto label_148b24;
        }
    }
    ctx->pc = 0x148B1Cu;
    // 0x148b1c: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x148b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x148b20: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x148b20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_148b24:
    // 0x148b24: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x148B24u;
    {
        const bool branch_taken_0x148b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148B24u;
            // 0x148b28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b24) {
            ctx->pc = 0x148BC8u;
            goto label_148bc8;
        }
    }
    ctx->pc = 0x148B2Cu;
label_148b2c:
    // 0x148b2c: 0x16070012  bne         $s0, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x148B2Cu;
    {
        const bool branch_taken_0x148b2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x148B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148B2Cu;
            // 0x148b30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b2c) {
            ctx->pc = 0x148B78u;
            goto label_148b78;
        }
    }
    ctx->pc = 0x148B34u;
    // 0x148b34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x148b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x148b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b3c: 0x27a6026c  addiu       $a2, $sp, 0x26C
    ctx->pc = 0x148b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
    // 0x148b40: 0xc0524dc  jal         func_149370
    ctx->pc = 0x148B40u;
    SET_GPR_U32(ctx, 31, 0x148B48u);
    ctx->pc = 0x148B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148B40u;
            // 0x148b44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B48u; }
        if (ctx->pc != 0x148B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B48u; }
        if (ctx->pc != 0x148B48u) { return; }
    }
    ctx->pc = 0x148B48u;
label_148b48:
    // 0x148b48: 0xae220118  sw          $v0, 0x118($s1)
    ctx->pc = 0x148b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
    // 0x148b4c: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x148b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x148b50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148b54: 0xae230114  sw          $v1, 0x114($s1)
    ctx->pc = 0x148b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 3));
    // 0x148b58: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x148b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x148b5c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x148b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x148b60: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x148B60u;
    {
        const bool branch_taken_0x148b60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148B60u;
            // 0x148b64: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b60) {
            ctx->pc = 0x148B70u;
            goto label_148b70;
        }
    }
    ctx->pc = 0x148B68u;
    // 0x148b68: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x148b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x148b6c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x148b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_148b70:
    // 0x148b70: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x148B70u;
    {
        const bool branch_taken_0x148b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148B70u;
            // 0x148b74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b70) {
            ctx->pc = 0x148BC8u;
            goto label_148bc8;
        }
    }
    ctx->pc = 0x148B78u;
label_148b78:
    // 0x148b78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x148b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b7c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x148B7Cu;
    SET_GPR_U32(ctx, 31, 0x148B84u);
    ctx->pc = 0x148B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148B7Cu;
            // 0x148b80: 0x27a6026c  addiu       $a2, $sp, 0x26C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B84u; }
        if (ctx->pc != 0x148B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B84u; }
        if (ctx->pc != 0x148B84u) { return; }
    }
    ctx->pc = 0x148B84u;
label_148b84:
    // 0x148b84: 0xae220118  sw          $v0, 0x118($s1)
    ctx->pc = 0x148b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
    // 0x148b88: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x148b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x148b8c: 0xae220114  sw          $v0, 0x114($s1)
    ctx->pc = 0x148b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 2));
    // 0x148b90: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x148b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x148b94: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x148B94u;
    {
        const bool branch_taken_0x148b94 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x148b94) {
            ctx->pc = 0x148BB0u;
            goto label_148bb0;
        }
    }
    ctx->pc = 0x148B9Cu;
    // 0x148b9c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x148b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x148ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x148ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ba4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x148ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x148ba8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x148BA8u;
    {
        const bool branch_taken_0x148ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148BA8u;
            // 0x148bac: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ba8) {
            ctx->pc = 0x148BC8u;
            goto label_148bc8;
        }
    }
    ctx->pc = 0x148BB0u;
label_148bb0:
    // 0x148bb0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x148bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x148bb4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x148BB4u;
    {
        const bool branch_taken_0x148bb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x148BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148BB4u;
            // 0x148bb8: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148bb4) {
            ctx->pc = 0x148BC4u;
            goto label_148bc4;
        }
    }
    ctx->pc = 0x148BBCu;
    // 0x148bbc: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x148bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x148bc0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x148bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_148bc4:
    // 0x148bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148bc8:
    // 0x148bc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x148bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_148bcc:
    // 0x148bcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x148bccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148bd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x148bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148bd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148be0: 0x3e00008  jr          $ra
    ctx->pc = 0x148BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148BE0u;
            // 0x148be4: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148BE8u;
}
