#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SVConvViewLoop__Fv
// Address: 0x320a70 - 0x320fa0
void SVConvViewLoop__Fv_0x320a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SVConvViewLoop__Fv_0x320a70");
#endif

    switch (ctx->pc) {
        case 0x320aa4u: goto label_320aa4;
        case 0x320abcu: goto label_320abc;
        case 0x320aecu: goto label_320aec;
        case 0x320b04u: goto label_320b04;
        case 0x320b20u: goto label_320b20;
        case 0x320b34u: goto label_320b34;
        case 0x320b50u: goto label_320b50;
        case 0x320b74u: goto label_320b74;
        case 0x320b98u: goto label_320b98;
        case 0x320ba0u: goto label_320ba0;
        case 0x320ba8u: goto label_320ba8;
        case 0x320bb8u: goto label_320bb8;
        case 0x320bc4u: goto label_320bc4;
        case 0x320bd4u: goto label_320bd4;
        case 0x320becu: goto label_320bec;
        case 0x320c0cu: goto label_320c0c;
        case 0x320c20u: goto label_320c20;
        case 0x320c2cu: goto label_320c2c;
        case 0x320c3cu: goto label_320c3c;
        case 0x320c58u: goto label_320c58;
        case 0x320c7cu: goto label_320c7c;
        case 0x320c98u: goto label_320c98;
        case 0x320cc0u: goto label_320cc0;
        case 0x320cd0u: goto label_320cd0;
        case 0x320ce4u: goto label_320ce4;
        case 0x320d00u: goto label_320d00;
        case 0x320d10u: goto label_320d10;
        case 0x320d24u: goto label_320d24;
        case 0x320d40u: goto label_320d40;
        case 0x320d50u: goto label_320d50;
        case 0x320d64u: goto label_320d64;
        case 0x320d84u: goto label_320d84;
        case 0x320d94u: goto label_320d94;
        case 0x320da8u: goto label_320da8;
        case 0x320dbcu: goto label_320dbc;
        case 0x320dccu: goto label_320dcc;
        case 0x320de0u: goto label_320de0;
        case 0x320e10u: goto label_320e10;
        case 0x320e20u: goto label_320e20;
        case 0x320e34u: goto label_320e34;
        case 0x320e54u: goto label_320e54;
        case 0x320e64u: goto label_320e64;
        case 0x320e78u: goto label_320e78;
        case 0x320e94u: goto label_320e94;
        case 0x320ea8u: goto label_320ea8;
        case 0x320eb4u: goto label_320eb4;
        case 0x320ec4u: goto label_320ec4;
        case 0x320ed8u: goto label_320ed8;
        case 0x320eecu: goto label_320eec;
        case 0x320ef8u: goto label_320ef8;
        case 0x320f08u: goto label_320f08;
        case 0x320f1cu: goto label_320f1c;
        case 0x320f38u: goto label_320f38;
        case 0x320f44u: goto label_320f44;
        case 0x320f54u: goto label_320f54;
        case 0x320f68u: goto label_320f68;
        case 0x320f84u: goto label_320f84;
        default: break;
    }

    ctx->pc = 0x320a70u;

    // 0x320a70: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x320a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x320a74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x320a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x320a78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x320a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x320a7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x320a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x320a80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x320a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x320a84: 0x8f82a3f4  lw          $v0, -0x5C0C($gp)
    ctx->pc = 0x320a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943732)));
    // 0x320a88: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x320a88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x320a8c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x320A8Cu;
    {
        const bool branch_taken_0x320a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320A8Cu;
            // 0x320a90: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a8c) {
            ctx->pc = 0x320AD0u;
            goto label_320ad0;
        }
    }
    ctx->pc = 0x320A94u;
    // 0x320a94: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x320a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x320a98: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x320a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x320a9c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x320A9Cu;
    SET_GPR_U32(ctx, 31, 0x320AA4u);
    ctx->pc = 0x320AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320A9Cu;
            // 0x320aa0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320AA4u; }
        if (ctx->pc != 0x320AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320AA4u; }
        if (ctx->pc != 0x320AA4u) { return; }
    }
    ctx->pc = 0x320AA4u;
label_320aa4:
    // 0x320aa4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x320AA4u;
    {
        const bool branch_taken_0x320aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320AA4u;
            // 0x320aa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320aa4) {
            ctx->pc = 0x320AC8u;
            goto label_320ac8;
        }
    }
    ctx->pc = 0x320AACu;
    // 0x320aac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x320aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x320ab0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x320ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x320ab4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x320AB4u;
    SET_GPR_U32(ctx, 31, 0x320ABCu);
    ctx->pc = 0x320AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320AB4u;
            // 0x320ab8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320ABCu; }
        if (ctx->pc != 0x320ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320ABCu; }
        if (ctx->pc != 0x320ABCu) { return; }
    }
    ctx->pc = 0x320ABCu;
label_320abc:
    // 0x320abc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x320ABCu;
    {
        const bool branch_taken_0x320abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320abc) {
            ctx->pc = 0x320AD0u;
            goto label_320ad0;
        }
    }
    ctx->pc = 0x320AC4u;
    // 0x320ac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320ac8:
    // 0x320ac8: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x320AC8u;
    {
        const bool branch_taken_0x320ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320AC8u;
            // 0x320acc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ac8) {
            ctx->pc = 0x320F8Cu;
            goto label_320f8c;
        }
    }
    ctx->pc = 0x320AD0u;
label_320ad0:
    // 0x320ad0: 0x8f83a3f4  lw          $v1, -0x5C0C($gp)
    ctx->pc = 0x320ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943732)));
    // 0x320ad4: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x320AD4u;
    {
        const bool branch_taken_0x320ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x320AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320AD4u;
            // 0x320ad8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ad4) {
            ctx->pc = 0x320B3Cu;
            goto label_320b3c;
        }
    }
    ctx->pc = 0x320ADCu;
    // 0x320adc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x320adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x320ae0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x320ae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x320ae4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x320AE4u;
    SET_GPR_U32(ctx, 31, 0x320AECu);
    ctx->pc = 0x320AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320AE4u;
            // 0x320ae8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320AECu; }
        if (ctx->pc != 0x320AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320AECu; }
        if (ctx->pc != 0x320AECu) { return; }
    }
    ctx->pc = 0x320AECu;
label_320aec:
    // 0x320aec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x320AECu;
    {
        const bool branch_taken_0x320aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320AECu;
            // 0x320af0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320aec) {
            ctx->pc = 0x320AF8u;
            goto label_320af8;
        }
    }
    ctx->pc = 0x320AF4u;
    // 0x320af4: 0xaf80a3f8  sw          $zero, -0x5C08($gp)
    ctx->pc = 0x320af4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943736), GPR_U32(ctx, 0));
label_320af8:
    // 0x320af8: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x320af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x320afc: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x320AFCu;
    SET_GPR_U32(ctx, 31, 0x320B04u);
    ctx->pc = 0x320B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320AFCu;
            // 0x320b00: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B04u; }
        if (ctx->pc != 0x320B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B04u; }
        if (ctx->pc != 0x320B04u) { return; }
    }
    ctx->pc = 0x320B04u;
label_320b04:
    // 0x320b04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320B04u;
    {
        const bool branch_taken_0x320b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320B04u;
            // 0x320b08: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b04) {
            ctx->pc = 0x320B14u;
            goto label_320b14;
        }
    }
    ctx->pc = 0x320B0Cu;
    // 0x320b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320b10: 0xaf82a3f8  sw          $v0, -0x5C08($gp)
    ctx->pc = 0x320b10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943736), GPR_U32(ctx, 2));
label_320b14:
    // 0x320b14: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x320b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x320b18: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x320B18u;
    SET_GPR_U32(ctx, 31, 0x320B20u);
    ctx->pc = 0x320B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320B18u;
            // 0x320b1c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B20u; }
        if (ctx->pc != 0x320B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B20u; }
        if (ctx->pc != 0x320B20u) { return; }
    }
    ctx->pc = 0x320B20u;
label_320b20:
    // 0x320b20: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x320B20u;
    {
        const bool branch_taken_0x320b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320B20u;
            // 0x320b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b20) {
            ctx->pc = 0x320B8Cu;
            goto label_320b8c;
        }
    }
    ctx->pc = 0x320B28u;
    // 0x320b28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x320b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320b2c: 0xc0c83e8  jal         func_320FA0
    ctx->pc = 0x320B2Cu;
    SET_GPR_U32(ctx, 31, 0x320B34u);
    ctx->pc = 0x320B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320B2Cu;
            // 0x320b30: 0xaf82a3f4  sw          $v0, -0x5C0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x320FA0u;
    if (runtime->hasFunction(0x320FA0u)) {
        auto targetFn = runtime->lookupFunction(0x320FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B34u; }
        if (ctx->pc != 0x320B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSaveFileInfoTablePtr__Fv_0x320fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B34u; }
        if (ctx->pc != 0x320B34u) { return; }
    }
    ctx->pc = 0x320B34u;
label_320b34:
    // 0x320b34: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x320B34u;
    {
        const bool branch_taken_0x320b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b34) {
            ctx->pc = 0x320B88u;
            goto label_320b88;
        }
    }
    ctx->pc = 0x320B3Cu;
label_320b3c:
    // 0x320b3c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x320B3Cu;
    {
        const bool branch_taken_0x320b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x320B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320B3Cu;
            // 0x320b40: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b3c) {
            ctx->pc = 0x320B60u;
            goto label_320b60;
        }
    }
    ctx->pc = 0x320B44u;
    // 0x320b44: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x320b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x320b48: 0xc0c841c  jal         func_321070
    ctx->pc = 0x320B48u;
    SET_GPR_U32(ctx, 31, 0x320B50u);
    ctx->pc = 0x320B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320B48u;
            // 0x320b4c: 0xaf82a40c  sw          $v0, -0x5BF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321070u;
    if (runtime->hasFunction(0x321070u)) {
        auto targetFn = runtime->lookupFunction(0x321070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B50u; }
        if (ctx->pc != 0x320B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaveDataConvertLoop__Fv_0x321070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B50u; }
        if (ctx->pc != 0x320B50u) { return; }
    }
    ctx->pc = 0x320B50u;
label_320b50:
    // 0x320b50: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x320B50u;
    {
        const bool branch_taken_0x320b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320B50u;
            // 0x320b54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b50) {
            ctx->pc = 0x320B88u;
            goto label_320b88;
        }
    }
    ctx->pc = 0x320B58u;
    // 0x320b58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x320B58u;
    {
        const bool branch_taken_0x320b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320B58u;
            // 0x320b5c: 0xaf82a3f4  sw          $v0, -0x5C0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b58) {
            ctx->pc = 0x320B88u;
            goto label_320b88;
        }
    }
    ctx->pc = 0x320B60u;
label_320b60:
    // 0x320b60: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x320B60u;
    {
        const bool branch_taken_0x320b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x320B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320B60u;
            // 0x320b64: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b60) {
            ctx->pc = 0x320B88u;
            goto label_320b88;
        }
    }
    ctx->pc = 0x320B68u;
    // 0x320b68: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x320b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x320b6c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x320B6Cu;
    SET_GPR_U32(ctx, 31, 0x320B74u);
    ctx->pc = 0x320B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320B6Cu;
            // 0x320b70: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B74u; }
        if (ctx->pc != 0x320B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B74u; }
        if (ctx->pc != 0x320B74u) { return; }
    }
    ctx->pc = 0x320B74u;
label_320b74:
    // 0x320b74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x320B74u;
    {
        const bool branch_taken_0x320b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b74) {
            ctx->pc = 0x320B88u;
            goto label_320b88;
        }
    }
    ctx->pc = 0x320B7Cu;
    // 0x320b7c: 0xaf80a408  sw          $zero, -0x5BF8($gp)
    ctx->pc = 0x320b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943752), GPR_U32(ctx, 0));
    // 0x320b80: 0xaf80a40c  sw          $zero, -0x5BF4($gp)
    ctx->pc = 0x320b80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943756), GPR_U32(ctx, 0));
    // 0x320b84: 0xaf80a3f4  sw          $zero, -0x5C0C($gp)
    ctx->pc = 0x320b84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943732), GPR_U32(ctx, 0));
label_320b88:
    // 0x320b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_320b8c:
    // 0x320b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x320b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b90: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x320B90u;
    SET_GPR_U32(ctx, 31, 0x320B98u);
    ctx->pc = 0x320B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320B90u;
            // 0x320b94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B98u; }
        if (ctx->pc != 0x320B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320B98u; }
        if (ctx->pc != 0x320B98u) { return; }
    }
    ctx->pc = 0x320B98u;
label_320b98:
    // 0x320b98: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x320B98u;
    SET_GPR_U32(ctx, 31, 0x320BA0u);
    ctx->pc = 0x320B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320B98u;
            // 0x320b9c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BA0u; }
        if (ctx->pc != 0x320BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BA0u; }
        if (ctx->pc != 0x320BA0u) { return; }
    }
    ctx->pc = 0x320BA0u;
label_320ba0:
    // 0x320ba0: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x320BA0u;
    SET_GPR_U32(ctx, 31, 0x320BA8u);
    ctx->pc = 0x320BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320BA0u;
            // 0x320ba4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BA8u; }
        if (ctx->pc != 0x320BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BA8u; }
        if (ctx->pc != 0x320BA8u) { return; }
    }
    ctx->pc = 0x320BA8u;
label_320ba8:
    // 0x320ba8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320bac: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x320bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x320bb0: 0xc0b512c  jal         func_2D44B0
    ctx->pc = 0x320BB0u;
    SET_GPR_U32(ctx, 31, 0x320BB8u);
    ctx->pc = 0x320BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320BB0u;
            // 0x320bb4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44B0u;
    if (runtime->hasFunction(0x2D44B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BB8u; }
        if (ctx->pc != 0x320BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetClearance__5CFontFii_0x2d44b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BB8u; }
        if (ctx->pc != 0x320BB8u) { return; }
    }
    ctx->pc = 0x320BB8u;
label_320bb8:
    // 0x320bb8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320bbc: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x320BBCu;
    SET_GPR_U32(ctx, 31, 0x320BC4u);
    ctx->pc = 0x320BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320BBCu;
            // 0x320bc0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BC4u; }
        if (ctx->pc != 0x320BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BC4u; }
        if (ctx->pc != 0x320BC4u) { return; }
    }
    ctx->pc = 0x320BC4u;
label_320bc4:
    // 0x320bc4: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x320bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x320bc8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320bcc: 0xc0b5148  jal         func_2D4520
    ctx->pc = 0x320BCCu;
    SET_GPR_U32(ctx, 31, 0x320BD4u);
    ctx->pc = 0x320BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320BCCu;
            // 0x320bd0: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4520u;
    if (runtime->hasFunction(0x2D4520u)) {
        auto targetFn = runtime->lookupFunction(0x2D4520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BD4u; }
        if (ctx->pc != 0x320BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFUi_0x2d4520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BD4u; }
        if (ctx->pc != 0x320BD4u) { return; }
    }
    ctx->pc = 0x320BD4u;
label_320bd4:
    // 0x320bd4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x320bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x320bd8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320bdc: 0x24a53030  addiu       $a1, $a1, 0x3030
    ctx->pc = 0x320bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12336));
    // 0x320be0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x320be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x320be4: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320BE4u;
    SET_GPR_U32(ctx, 31, 0x320BECu);
    ctx->pc = 0x320BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320BE4u;
            // 0x320be8: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BECu; }
        if (ctx->pc != 0x320BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320BECu; }
        if (ctx->pc != 0x320BECu) { return; }
    }
    ctx->pc = 0x320BECu;
label_320bec:
    // 0x320bec: 0x8f82a3f4  lw          $v0, -0x5C0C($gp)
    ctx->pc = 0x320becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943732)));
    // 0x320bf0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x320BF0u;
    {
        const bool branch_taken_0x320bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320BF0u;
            // 0x320bf4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320bf0) {
            ctx->pc = 0x320C0Cu;
            goto label_320c0c;
        }
    }
    ctx->pc = 0x320BF8u;
    // 0x320bf8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320bfc: 0x24a53050  addiu       $a1, $a1, 0x3050
    ctx->pc = 0x320bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12368));
    // 0x320c00: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x320c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x320c04: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320C04u;
    SET_GPR_U32(ctx, 31, 0x320C0Cu);
    ctx->pc = 0x320C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320C04u;
            // 0x320c08: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C0Cu; }
        if (ctx->pc != 0x320C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C0Cu; }
        if (ctx->pc != 0x320C0Cu) { return; }
    }
    ctx->pc = 0x320C0Cu;
label_320c0c:
    // 0x320c0c: 0x8f86a3f8  lw          $a2, -0x5C08($gp)
    ctx->pc = 0x320c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943736)));
    // 0x320c10: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x320c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x320c14: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x320c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x320c18: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x320C18u;
    SET_GPR_U32(ctx, 31, 0x320C20u);
    ctx->pc = 0x320C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320C18u;
            // 0x320c1c: 0x24a53068  addiu       $a1, $a1, 0x3068 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C20u; }
        if (ctx->pc != 0x320C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C20u; }
        if (ctx->pc != 0x320C20u) { return; }
    }
    ctx->pc = 0x320C20u;
label_320c20:
    // 0x320c20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320c24: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x320C24u;
    SET_GPR_U32(ctx, 31, 0x320C2Cu);
    ctx->pc = 0x320C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320C24u;
            // 0x320c28: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C2Cu; }
        if (ctx->pc != 0x320C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C2Cu; }
        if (ctx->pc != 0x320C2Cu) { return; }
    }
    ctx->pc = 0x320C2Cu;
label_320c2c:
    // 0x320c2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320c30: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x320c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x320c34: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x320C34u;
    SET_GPR_U32(ctx, 31, 0x320C3Cu);
    ctx->pc = 0x320C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320C34u;
            // 0x320c38: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C3Cu; }
        if (ctx->pc != 0x320C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C3Cu; }
        if (ctx->pc != 0x320C3Cu) { return; }
    }
    ctx->pc = 0x320C3Cu;
label_320c3c:
    // 0x320c3c: 0x27b200d4  addiu       $s2, $sp, 0xD4
    ctx->pc = 0x320c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x320c40: 0x27b100d8  addiu       $s1, $sp, 0xD8
    ctx->pc = 0x320c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x320c44: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x320c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x320c48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320c4c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x320c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x320c50: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320C50u;
    SET_GPR_U32(ctx, 31, 0x320C58u);
    ctx->pc = 0x320C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320C50u;
            // 0x320c54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C58u; }
        if (ctx->pc != 0x320C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C58u; }
        if (ctx->pc != 0x320C58u) { return; }
    }
    ctx->pc = 0x320C58u;
label_320c58:
    // 0x320c58: 0x8f82a3f4  lw          $v0, -0x5C0C($gp)
    ctx->pc = 0x320c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943732)));
    // 0x320c5c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x320C5Cu;
    {
        const bool branch_taken_0x320c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320C5Cu;
            // 0x320c60: 0x24100048  addiu       $s0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c5c) {
            ctx->pc = 0x320C98u;
            goto label_320c98;
        }
    }
    ctx->pc = 0x320C64u;
    // 0x320c64: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x320c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x320c68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320c6c: 0x24a53080  addiu       $a1, $a1, 0x3080
    ctx->pc = 0x320c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12416));
    // 0x320c70: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x320c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x320c74: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320C74u;
    SET_GPR_U32(ctx, 31, 0x320C7Cu);
    ctx->pc = 0x320C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320C74u;
            // 0x320c78: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C7Cu; }
        if (ctx->pc != 0x320C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C7Cu; }
        if (ctx->pc != 0x320C7Cu) { return; }
    }
    ctx->pc = 0x320C7Cu;
label_320c7c:
    // 0x320c7c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x320c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x320c80: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x320c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x320c84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320c88: 0x24a530a0  addiu       $a1, $a1, 0x30A0
    ctx->pc = 0x320c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12448));
    // 0x320c8c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x320c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x320c90: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320C90u;
    SET_GPR_U32(ctx, 31, 0x320C98u);
    ctx->pc = 0x320C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320C90u;
            // 0x320c94: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C98u; }
        if (ctx->pc != 0x320C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320C98u; }
        if (ctx->pc != 0x320C98u) { return; }
    }
    ctx->pc = 0x320C98u;
label_320c98:
    // 0x320c98: 0x8f83a3f4  lw          $v1, -0x5C0C($gp)
    ctx->pc = 0x320c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943732)));
    // 0x320c9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x320c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320ca0: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x320CA0u;
    {
        const bool branch_taken_0x320ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x320ca0) {
            ctx->pc = 0x320DE0u;
            goto label_320de0;
        }
    }
    ctx->pc = 0x320CA8u;
    // 0x320ca8: 0x8f82a400  lw          $v0, -0x5C00($gp)
    ctx->pc = 0x320ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943744)));
    // 0x320cac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x320CACu;
    {
        const bool branch_taken_0x320cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320CACu;
            // 0x320cb0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320cac) {
            ctx->pc = 0x320CE4u;
            goto label_320ce4;
        }
    }
    ctx->pc = 0x320CB4u;
    // 0x320cb4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320cb8: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x320CB8u;
    SET_GPR_U32(ctx, 31, 0x320CC0u);
    ctx->pc = 0x320CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320CB8u;
            // 0x320cbc: 0x24a530c0  addiu       $a1, $a1, 0x30C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320CC0u; }
        if (ctx->pc != 0x320CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320CC0u; }
        if (ctx->pc != 0x320CC0u) { return; }
    }
    ctx->pc = 0x320CC0u;
label_320cc0:
    // 0x320cc0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320cc4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x320cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x320cc8: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x320CC8u;
    SET_GPR_U32(ctx, 31, 0x320CD0u);
    ctx->pc = 0x320CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320CC8u;
            // 0x320ccc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320CD0u; }
        if (ctx->pc != 0x320CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320CD0u; }
        if (ctx->pc != 0x320CD0u) { return; }
    }
    ctx->pc = 0x320CD0u;
label_320cd0:
    // 0x320cd0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x320cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x320cd4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320cd8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x320cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x320cdc: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320CDCu;
    SET_GPR_U32(ctx, 31, 0x320CE4u);
    ctx->pc = 0x320CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320CDCu;
            // 0x320ce0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320CE4u; }
        if (ctx->pc != 0x320CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320CE4u; }
        if (ctx->pc != 0x320CE4u) { return; }
    }
    ctx->pc = 0x320CE4u;
label_320ce4:
    // 0x320ce4: 0x8f83a400  lw          $v1, -0x5C00($gp)
    ctx->pc = 0x320ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943744)));
    // 0x320ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320cec: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x320CECu;
    {
        const bool branch_taken_0x320cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x320CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320CECu;
            // 0x320cf0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320cec) {
            ctx->pc = 0x320D24u;
            goto label_320d24;
        }
    }
    ctx->pc = 0x320CF4u;
    // 0x320cf4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320cf8: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x320CF8u;
    SET_GPR_U32(ctx, 31, 0x320D00u);
    ctx->pc = 0x320CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320CF8u;
            // 0x320cfc: 0x24a530e0  addiu       $a1, $a1, 0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D00u; }
        if (ctx->pc != 0x320D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D00u; }
        if (ctx->pc != 0x320D00u) { return; }
    }
    ctx->pc = 0x320D00u;
label_320d00:
    // 0x320d00: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320d04: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x320d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x320d08: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x320D08u;
    SET_GPR_U32(ctx, 31, 0x320D10u);
    ctx->pc = 0x320D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320D08u;
            // 0x320d0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D10u; }
        if (ctx->pc != 0x320D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D10u; }
        if (ctx->pc != 0x320D10u) { return; }
    }
    ctx->pc = 0x320D10u;
label_320d10:
    // 0x320d10: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x320d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x320d14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320d18: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x320d18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x320d1c: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320D1Cu;
    SET_GPR_U32(ctx, 31, 0x320D24u);
    ctx->pc = 0x320D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320D1Cu;
            // 0x320d20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D24u; }
        if (ctx->pc != 0x320D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D24u; }
        if (ctx->pc != 0x320D24u) { return; }
    }
    ctx->pc = 0x320D24u;
label_320d24:
    // 0x320d24: 0x8f83a400  lw          $v1, -0x5C00($gp)
    ctx->pc = 0x320d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943744)));
    // 0x320d28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x320d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320d2c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x320D2Cu;
    {
        const bool branch_taken_0x320d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x320D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320D2Cu;
            // 0x320d30: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320d2c) {
            ctx->pc = 0x320D64u;
            goto label_320d64;
        }
    }
    ctx->pc = 0x320D34u;
    // 0x320d34: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320d38: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x320D38u;
    SET_GPR_U32(ctx, 31, 0x320D40u);
    ctx->pc = 0x320D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320D38u;
            // 0x320d3c: 0x24a53100  addiu       $a1, $a1, 0x3100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D40u; }
        if (ctx->pc != 0x320D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D40u; }
        if (ctx->pc != 0x320D40u) { return; }
    }
    ctx->pc = 0x320D40u;
label_320d40:
    // 0x320d40: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320d44: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x320d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x320d48: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x320D48u;
    SET_GPR_U32(ctx, 31, 0x320D50u);
    ctx->pc = 0x320D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320D48u;
            // 0x320d4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D50u; }
        if (ctx->pc != 0x320D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D50u; }
        if (ctx->pc != 0x320D50u) { return; }
    }
    ctx->pc = 0x320D50u;
label_320d50:
    // 0x320d50: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x320d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x320d54: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320d58: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x320d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x320d5c: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320D5Cu;
    SET_GPR_U32(ctx, 31, 0x320D64u);
    ctx->pc = 0x320D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320D5Cu;
            // 0x320d60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D64u; }
        if (ctx->pc != 0x320D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D64u; }
        if (ctx->pc != 0x320D64u) { return; }
    }
    ctx->pc = 0x320D64u;
label_320d64:
    // 0x320d64: 0x8f83a400  lw          $v1, -0x5C00($gp)
    ctx->pc = 0x320d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943744)));
    // 0x320d68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x320d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x320d6c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x320D6Cu;
    {
        const bool branch_taken_0x320d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x320d6c) {
            ctx->pc = 0x320DA8u;
            goto label_320da8;
        }
    }
    ctx->pc = 0x320D74u;
    // 0x320d74: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x320d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x320d78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320d7c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x320D7Cu;
    SET_GPR_U32(ctx, 31, 0x320D84u);
    ctx->pc = 0x320D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320D7Cu;
            // 0x320d80: 0x24a530c0  addiu       $a1, $a1, 0x30C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D84u; }
        if (ctx->pc != 0x320D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D84u; }
        if (ctx->pc != 0x320D84u) { return; }
    }
    ctx->pc = 0x320D84u;
label_320d84:
    // 0x320d84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320d88: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x320d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x320d8c: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x320D8Cu;
    SET_GPR_U32(ctx, 31, 0x320D94u);
    ctx->pc = 0x320D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320D8Cu;
            // 0x320d90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D94u; }
        if (ctx->pc != 0x320D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320D94u; }
        if (ctx->pc != 0x320D94u) { return; }
    }
    ctx->pc = 0x320D94u;
label_320d94:
    // 0x320d94: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x320d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x320d98: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320d9c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x320d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x320da0: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320DA0u;
    SET_GPR_U32(ctx, 31, 0x320DA8u);
    ctx->pc = 0x320DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320DA0u;
            // 0x320da4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320DA8u; }
        if (ctx->pc != 0x320DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320DA8u; }
        if (ctx->pc != 0x320DA8u) { return; }
    }
    ctx->pc = 0x320DA8u;
label_320da8:
    // 0x320da8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x320da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x320dac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320db0: 0x24a53120  addiu       $a1, $a1, 0x3120
    ctx->pc = 0x320db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12576));
    // 0x320db4: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x320DB4u;
    SET_GPR_U32(ctx, 31, 0x320DBCu);
    ctx->pc = 0x320DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320DB4u;
            // 0x320db8: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320DBCu; }
        if (ctx->pc != 0x320DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320DBCu; }
        if (ctx->pc != 0x320DBCu) { return; }
    }
    ctx->pc = 0x320DBCu;
label_320dbc:
    // 0x320dbc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320dc0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x320dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x320dc4: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x320DC4u;
    SET_GPR_U32(ctx, 31, 0x320DCCu);
    ctx->pc = 0x320DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320DC4u;
            // 0x320dc8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320DCCu; }
        if (ctx->pc != 0x320DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320DCCu; }
        if (ctx->pc != 0x320DCCu) { return; }
    }
    ctx->pc = 0x320DCCu;
label_320dcc:
    // 0x320dcc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x320dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x320dd0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320dd4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x320dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x320dd8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320DD8u;
    SET_GPR_U32(ctx, 31, 0x320DE0u);
    ctx->pc = 0x320DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320DD8u;
            // 0x320ddc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320DE0u; }
        if (ctx->pc != 0x320DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320DE0u; }
        if (ctx->pc != 0x320DE0u) { return; }
    }
    ctx->pc = 0x320DE0u;
label_320de0:
    // 0x320de0: 0x8f83a3f4  lw          $v1, -0x5C0C($gp)
    ctx->pc = 0x320de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943732)));
    // 0x320de4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x320de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x320de8: 0x14620067  bne         $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x320DE8u;
    {
        const bool branch_taken_0x320de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x320DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320DE8u;
            // 0x320dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320de8) {
            ctx->pc = 0x320F88u;
            goto label_320f88;
        }
    }
    ctx->pc = 0x320DF0u;
    // 0x320df0: 0x8f83a408  lw          $v1, -0x5BF8($gp)
    ctx->pc = 0x320df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943752)));
    // 0x320df4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x320df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x320df8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x320DF8u;
    {
        const bool branch_taken_0x320df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x320DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320DF8u;
            // 0x320dfc: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320df8) {
            ctx->pc = 0x320E3Cu;
            goto label_320e3c;
        }
    }
    ctx->pc = 0x320E00u;
    // 0x320e00: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x320e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x320e04: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320e08: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x320E08u;
    SET_GPR_U32(ctx, 31, 0x320E10u);
    ctx->pc = 0x320E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320E08u;
            // 0x320e0c: 0x24a53140  addiu       $a1, $a1, 0x3140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E10u; }
        if (ctx->pc != 0x320E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E10u; }
        if (ctx->pc != 0x320E10u) { return; }
    }
    ctx->pc = 0x320E10u;
label_320e10:
    // 0x320e10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320e14: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x320e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x320e18: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x320E18u;
    SET_GPR_U32(ctx, 31, 0x320E20u);
    ctx->pc = 0x320E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320E18u;
            // 0x320e1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E20u; }
        if (ctx->pc != 0x320E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E20u; }
        if (ctx->pc != 0x320E20u) { return; }
    }
    ctx->pc = 0x320E20u;
label_320e20:
    // 0x320e20: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x320e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x320e24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320e28: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x320e28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x320e2c: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320E2Cu;
    SET_GPR_U32(ctx, 31, 0x320E34u);
    ctx->pc = 0x320E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320E2Cu;
            // 0x320e30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E34u; }
        if (ctx->pc != 0x320E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E34u; }
        if (ctx->pc != 0x320E34u) { return; }
    }
    ctx->pc = 0x320E34u;
label_320e34:
    // 0x320e34: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x320E34u;
    {
        const bool branch_taken_0x320e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320E34u;
            // 0x320e38: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e34) {
            ctx->pc = 0x320F6Cu;
            goto label_320f6c;
        }
    }
    ctx->pc = 0x320E3Cu;
label_320e3c:
    // 0x320e3c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x320E3Cu;
    {
        const bool branch_taken_0x320e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x320E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320E3Cu;
            // 0x320e40: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e3c) {
            ctx->pc = 0x320E80u;
            goto label_320e80;
        }
    }
    ctx->pc = 0x320E44u;
    // 0x320e44: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x320e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x320e48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320e4c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x320E4Cu;
    SET_GPR_U32(ctx, 31, 0x320E54u);
    ctx->pc = 0x320E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320E4Cu;
            // 0x320e50: 0x24a53160  addiu       $a1, $a1, 0x3160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E54u; }
        if (ctx->pc != 0x320E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E54u; }
        if (ctx->pc != 0x320E54u) { return; }
    }
    ctx->pc = 0x320E54u;
label_320e54:
    // 0x320e54: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320e58: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x320e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x320e5c: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x320E5Cu;
    SET_GPR_U32(ctx, 31, 0x320E64u);
    ctx->pc = 0x320E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320E5Cu;
            // 0x320e60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E64u; }
        if (ctx->pc != 0x320E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E64u; }
        if (ctx->pc != 0x320E64u) { return; }
    }
    ctx->pc = 0x320E64u;
label_320e64:
    // 0x320e64: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x320e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x320e68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320e6c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x320e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x320e70: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320E70u;
    SET_GPR_U32(ctx, 31, 0x320E78u);
    ctx->pc = 0x320E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320E70u;
            // 0x320e74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E78u; }
        if (ctx->pc != 0x320E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E78u; }
        if (ctx->pc != 0x320E78u) { return; }
    }
    ctx->pc = 0x320E78u;
label_320e78:
    // 0x320e78: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x320E78u;
    {
        const bool branch_taken_0x320e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320E78u;
            // 0x320e7c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e78) {
            ctx->pc = 0x320F6Cu;
            goto label_320f6c;
        }
    }
    ctx->pc = 0x320E80u;
label_320e80:
    // 0x320e80: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320e84: 0x24a53180  addiu       $a1, $a1, 0x3180
    ctx->pc = 0x320e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12672));
    // 0x320e88: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x320e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x320e8c: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320E8Cu;
    SET_GPR_U32(ctx, 31, 0x320E94u);
    ctx->pc = 0x320E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320E8Cu;
            // 0x320e90: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E94u; }
        if (ctx->pc != 0x320E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320E94u; }
        if (ctx->pc != 0x320E94u) { return; }
    }
    ctx->pc = 0x320E94u;
label_320e94:
    // 0x320e94: 0x8f86a3fc  lw          $a2, -0x5C04($gp)
    ctx->pc = 0x320e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943740)));
    // 0x320e98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x320e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x320e9c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x320e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x320ea0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x320EA0u;
    SET_GPR_U32(ctx, 31, 0x320EA8u);
    ctx->pc = 0x320EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320EA0u;
            // 0x320ea4: 0x24a53190  addiu       $a1, $a1, 0x3190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320EA8u; }
        if (ctx->pc != 0x320EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320EA8u; }
        if (ctx->pc != 0x320EA8u) { return; }
    }
    ctx->pc = 0x320EA8u;
label_320ea8:
    // 0x320ea8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320eac: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x320EACu;
    SET_GPR_U32(ctx, 31, 0x320EB4u);
    ctx->pc = 0x320EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320EACu;
            // 0x320eb0: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320EB4u; }
        if (ctx->pc != 0x320EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320EB4u; }
        if (ctx->pc != 0x320EB4u) { return; }
    }
    ctx->pc = 0x320EB4u;
label_320eb4:
    // 0x320eb4: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x320eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x320eb8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320ebc: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x320EBCu;
    SET_GPR_U32(ctx, 31, 0x320EC4u);
    ctx->pc = 0x320EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320EBCu;
            // 0x320ec0: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320EC4u; }
        if (ctx->pc != 0x320EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320EC4u; }
        if (ctx->pc != 0x320EC4u) { return; }
    }
    ctx->pc = 0x320EC4u;
label_320ec4:
    // 0x320ec4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x320ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x320ec8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320ecc: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x320eccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x320ed0: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320ED0u;
    SET_GPR_U32(ctx, 31, 0x320ED8u);
    ctx->pc = 0x320ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320ED0u;
            // 0x320ed4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320ED8u; }
        if (ctx->pc != 0x320ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320ED8u; }
        if (ctx->pc != 0x320ED8u) { return; }
    }
    ctx->pc = 0x320ED8u;
label_320ed8:
    // 0x320ed8: 0x8f86a404  lw          $a2, -0x5BFC($gp)
    ctx->pc = 0x320ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943748)));
    // 0x320edc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x320edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x320ee0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x320ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x320ee4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x320EE4u;
    SET_GPR_U32(ctx, 31, 0x320EECu);
    ctx->pc = 0x320EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320EE4u;
            // 0x320ee8: 0x24a531b0  addiu       $a1, $a1, 0x31B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320EECu; }
        if (ctx->pc != 0x320EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320EECu; }
        if (ctx->pc != 0x320EECu) { return; }
    }
    ctx->pc = 0x320EECu;
label_320eec:
    // 0x320eec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320ef0: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x320EF0u;
    SET_GPR_U32(ctx, 31, 0x320EF8u);
    ctx->pc = 0x320EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320EF0u;
            // 0x320ef4: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320EF8u; }
        if (ctx->pc != 0x320EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320EF8u; }
        if (ctx->pc != 0x320EF8u) { return; }
    }
    ctx->pc = 0x320EF8u;
label_320ef8:
    // 0x320ef8: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x320ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x320efc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320f00: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x320F00u;
    SET_GPR_U32(ctx, 31, 0x320F08u);
    ctx->pc = 0x320F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F00u;
            // 0x320f04: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F08u; }
        if (ctx->pc != 0x320F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F08u; }
        if (ctx->pc != 0x320F08u) { return; }
    }
    ctx->pc = 0x320F08u;
label_320f08:
    // 0x320f08: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x320f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x320f0c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320f10: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x320f10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x320f14: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320F14u;
    SET_GPR_U32(ctx, 31, 0x320F1Cu);
    ctx->pc = 0x320F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F14u;
            // 0x320f18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F1Cu; }
        if (ctx->pc != 0x320F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F1Cu; }
        if (ctx->pc != 0x320F1Cu) { return; }
    }
    ctx->pc = 0x320F1Cu;
label_320f1c:
    // 0x320f1c: 0x8f83a3fc  lw          $v1, -0x5C04($gp)
    ctx->pc = 0x320f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943740)));
    // 0x320f20: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x320f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x320f24: 0x8f82a404  lw          $v0, -0x5BFC($gp)
    ctx->pc = 0x320f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943748)));
    // 0x320f28: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x320f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x320f2c: 0x24a531d0  addiu       $a1, $a1, 0x31D0
    ctx->pc = 0x320f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12752));
    // 0x320f30: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x320F30u;
    SET_GPR_U32(ctx, 31, 0x320F38u);
    ctx->pc = 0x320F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F30u;
            // 0x320f34: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F38u; }
        if (ctx->pc != 0x320F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F38u; }
        if (ctx->pc != 0x320F38u) { return; }
    }
    ctx->pc = 0x320F38u;
label_320f38:
    // 0x320f38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320f3c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x320F3Cu;
    SET_GPR_U32(ctx, 31, 0x320F44u);
    ctx->pc = 0x320F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F3Cu;
            // 0x320f40: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F44u; }
        if (ctx->pc != 0x320F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F44u; }
        if (ctx->pc != 0x320F44u) { return; }
    }
    ctx->pc = 0x320F44u;
label_320f44:
    // 0x320f44: 0x26060048  addiu       $a2, $s0, 0x48
    ctx->pc = 0x320f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x320f48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320f4c: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x320F4Cu;
    SET_GPR_U32(ctx, 31, 0x320F54u);
    ctx->pc = 0x320F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F4Cu;
            // 0x320f50: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F54u; }
        if (ctx->pc != 0x320F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F54u; }
        if (ctx->pc != 0x320F54u) { return; }
    }
    ctx->pc = 0x320F54u;
label_320f54:
    // 0x320f54: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x320f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x320f58: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320f5c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x320f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x320f60: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320F60u;
    SET_GPR_U32(ctx, 31, 0x320F68u);
    ctx->pc = 0x320F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F60u;
            // 0x320f64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F68u; }
        if (ctx->pc != 0x320F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F68u; }
        if (ctx->pc != 0x320F68u) { return; }
    }
    ctx->pc = 0x320F68u;
label_320f68:
    // 0x320f68: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x320f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_320f6c:
    // 0x320f6c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x320f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x320f70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x320f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320f74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320f78: 0x24a531f0  addiu       $a1, $a1, 0x31F0
    ctx->pc = 0x320f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12784));
    // 0x320f7c: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x320F7Cu;
    SET_GPR_U32(ctx, 31, 0x320F84u);
    ctx->pc = 0x320F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F7Cu;
            // 0x320f80: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F84u; }
        if (ctx->pc != 0x320F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F84u; }
        if (ctx->pc != 0x320F84u) { return; }
    }
    ctx->pc = 0x320F84u;
label_320f84:
    // 0x320f84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x320f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320f88:
    // 0x320f88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x320f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_320f8c:
    // 0x320f8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x320f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320f90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x320f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320f94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320f98: 0x3e00008  jr          $ra
    ctx->pc = 0x320F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320F98u;
            // 0x320f9c: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x320FA0u;
}
