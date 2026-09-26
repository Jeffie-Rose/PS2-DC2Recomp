#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CancelNetaCircle__11CMenuInventFi
// Address: 0x201c20 - 0x201d44
void CancelNetaCircle__11CMenuInventFi_0x201c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CancelNetaCircle__11CMenuInventFi_0x201c20");
#endif

    switch (ctx->pc) {
        case 0x201c20u: goto label_201c20;
        case 0x201c24u: goto label_201c24;
        case 0x201c28u: goto label_201c28;
        case 0x201c2cu: goto label_201c2c;
        case 0x201c30u: goto label_201c30;
        case 0x201c34u: goto label_201c34;
        case 0x201c38u: goto label_201c38;
        case 0x201c3cu: goto label_201c3c;
        case 0x201c40u: goto label_201c40;
        case 0x201c44u: goto label_201c44;
        case 0x201c48u: goto label_201c48;
        case 0x201c4cu: goto label_201c4c;
        case 0x201c50u: goto label_201c50;
        case 0x201c54u: goto label_201c54;
        case 0x201c58u: goto label_201c58;
        case 0x201c5cu: goto label_201c5c;
        case 0x201c60u: goto label_201c60;
        case 0x201c64u: goto label_201c64;
        case 0x201c68u: goto label_201c68;
        case 0x201c6cu: goto label_201c6c;
        case 0x201c70u: goto label_201c70;
        case 0x201c74u: goto label_201c74;
        case 0x201c78u: goto label_201c78;
        case 0x201c7cu: goto label_201c7c;
        case 0x201c80u: goto label_201c80;
        case 0x201c84u: goto label_201c84;
        case 0x201c88u: goto label_201c88;
        case 0x201c8cu: goto label_201c8c;
        case 0x201c90u: goto label_201c90;
        case 0x201c94u: goto label_201c94;
        case 0x201c98u: goto label_201c98;
        case 0x201c9cu: goto label_201c9c;
        case 0x201ca0u: goto label_201ca0;
        case 0x201ca4u: goto label_201ca4;
        case 0x201ca8u: goto label_201ca8;
        case 0x201cacu: goto label_201cac;
        case 0x201cb0u: goto label_201cb0;
        case 0x201cb4u: goto label_201cb4;
        case 0x201cb8u: goto label_201cb8;
        case 0x201cbcu: goto label_201cbc;
        case 0x201cc0u: goto label_201cc0;
        case 0x201cc4u: goto label_201cc4;
        case 0x201cc8u: goto label_201cc8;
        case 0x201cccu: goto label_201ccc;
        case 0x201cd0u: goto label_201cd0;
        case 0x201cd4u: goto label_201cd4;
        case 0x201cd8u: goto label_201cd8;
        case 0x201cdcu: goto label_201cdc;
        case 0x201ce0u: goto label_201ce0;
        case 0x201ce4u: goto label_201ce4;
        case 0x201ce8u: goto label_201ce8;
        case 0x201cecu: goto label_201cec;
        case 0x201cf0u: goto label_201cf0;
        case 0x201cf4u: goto label_201cf4;
        case 0x201cf8u: goto label_201cf8;
        case 0x201cfcu: goto label_201cfc;
        case 0x201d00u: goto label_201d00;
        case 0x201d04u: goto label_201d04;
        case 0x201d08u: goto label_201d08;
        case 0x201d0cu: goto label_201d0c;
        case 0x201d10u: goto label_201d10;
        case 0x201d14u: goto label_201d14;
        case 0x201d18u: goto label_201d18;
        case 0x201d1cu: goto label_201d1c;
        case 0x201d20u: goto label_201d20;
        case 0x201d24u: goto label_201d24;
        case 0x201d28u: goto label_201d28;
        case 0x201d2cu: goto label_201d2c;
        case 0x201d30u: goto label_201d30;
        case 0x201d34u: goto label_201d34;
        case 0x201d38u: goto label_201d38;
        case 0x201d3cu: goto label_201d3c;
        case 0x201d40u: goto label_201d40;
        default: break;
    }

    ctx->pc = 0x201c20u;

label_201c20:
    // 0x201c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x201c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_201c24:
    // 0x201c24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x201c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_201c28:
    // 0x201c28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x201c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_201c2c:
    // 0x201c2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_201c30:
    // 0x201c30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x201c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201c34:
    // 0x201c34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_201c38:
    // 0x201c38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x201c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201c3c:
    // 0x201c3c: 0x8482060c  lh          $v0, 0x60C($a0)
    ctx->pc = 0x201c3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1548)));
label_201c40:
    // 0x201c40: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_201c44:
    if (ctx->pc == 0x201C44u) {
        ctx->pc = 0x201C44u;
            // 0x201c44: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x201C48u;
        goto label_201c48;
    }
    ctx->pc = 0x201C40u;
    {
        const bool branch_taken_0x201c40 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x201C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201C40u;
            // 0x201c44: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c40) {
            ctx->pc = 0x201C50u;
            goto label_201c50;
        }
    }
    ctx->pc = 0x201C48u;
label_201c48:
    // 0x201c48: 0x10000038  b           . + 4 + (0x38 << 2)
label_201c4c:
    if (ctx->pc == 0x201C4Cu) {
        ctx->pc = 0x201C4Cu;
            // 0x201c4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201C50u;
        goto label_201c50;
    }
    ctx->pc = 0x201C48u;
    {
        const bool branch_taken_0x201c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201C48u;
            // 0x201c4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c48) {
            ctx->pc = 0x201D2Cu;
            goto label_201d2c;
        }
    }
    ctx->pc = 0x201C50u;
label_201c50:
    // 0x201c50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_201c54:
    // 0x201c54: 0xa642060c  sh          $v0, 0x60C($s2)
    ctx->pc = 0x201c54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1548), (uint16_t)GPR_U32(ctx, 2));
label_201c58:
    // 0x201c58: 0x8643060c  lh          $v1, 0x60C($s2)
    ctx->pc = 0x201c58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1548)));
label_201c5c:
    // 0x201c5c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x201c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_201c60:
    // 0x201c60: 0x8044061c  lb          $a0, 0x61C($v0)
    ctx->pc = 0x201c60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1564)));
label_201c64:
    // 0x201c64: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_201c68:
    if (ctx->pc == 0x201C68u) {
        ctx->pc = 0x201C68u;
            // 0x201c68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x201C6Cu;
        goto label_201c6c;
    }
    ctx->pc = 0x201C64u;
    {
        const bool branch_taken_0x201c64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x201C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201C64u;
            // 0x201c68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c64) {
            ctx->pc = 0x201C80u;
            goto label_201c80;
        }
    }
    ctx->pc = 0x201C6Cu;
label_201c6c:
    // 0x201c6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x201c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_201c70:
    // 0x201c70: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x201c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_201c74:
    // 0x201c74: 0x8c500610  lw          $s0, 0x610($v0)
    ctx->pc = 0x201c74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1552)));
label_201c78:
    // 0x201c78: 0x0  nop
    ctx->pc = 0x201c78u;
    // NOP
label_201c7c:
    // 0x201c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201c80:
    // 0x201c80: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_201c84:
    if (ctx->pc == 0x201C84u) {
        ctx->pc = 0x201C84u;
            // 0x201c84: 0x721021  addu        $v0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->pc = 0x201C88u;
        goto label_201c88;
    }
    ctx->pc = 0x201C80u;
    {
        const bool branch_taken_0x201c80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x201C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201C80u;
            // 0x201c84: 0x721021  addu        $v0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c80) {
            ctx->pc = 0x201C9Cu;
            goto label_201c9c;
        }
    }
    ctx->pc = 0x201C88u;
label_201c88:
    // 0x201c88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x201c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_201c8c:
    // 0x201c8c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x201c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_201c90:
    // 0x201c90: 0x8c500610  lw          $s0, 0x610($v0)
    ctx->pc = 0x201c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1552)));
label_201c94:
    // 0x201c94: 0x0  nop
    ctx->pc = 0x201c94u;
    // NOP
label_201c98:
    // 0x201c98: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x201c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_201c9c:
    // 0x201c9c: 0xa040061f  sb          $zero, 0x61F($v0)
    ctx->pc = 0x201c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1567), (uint8_t)GPR_U32(ctx, 0));
label_201ca0:
    // 0x201ca0: 0x8642060c  lh          $v0, 0x60C($s2)
    ctx->pc = 0x201ca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1548)));
label_201ca4:
    // 0x201ca4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x201ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_201ca8:
    // 0x201ca8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x201ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_201cac:
    // 0x201cac: 0x8c440f00  lw          $a0, 0xF00($v0)
    ctx->pc = 0x201cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3840)));
label_201cb0:
    // 0x201cb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_201cb4:
    if (ctx->pc == 0x201CB4u) {
        ctx->pc = 0x201CB4u;
            // 0x201cb4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x201CB8u;
        goto label_201cb8;
    }
    ctx->pc = 0x201CB0u;
    {
        const bool branch_taken_0x201cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201CB0u;
            // 0x201cb4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cb0) {
            ctx->pc = 0x201CC0u;
            goto label_201cc0;
        }
    }
    ctx->pc = 0x201CB8u;
label_201cb8:
    // 0x201cb8: 0xc08a240  jal         func_228900
label_201cbc:
    if (ctx->pc == 0x201CBCu) {
        ctx->pc = 0x201CBCu;
            // 0x201cbc: 0x24a592c0  addiu       $a1, $a1, -0x6D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939328));
        ctx->pc = 0x201CC0u;
        goto label_201cc0;
    }
    ctx->pc = 0x201CB8u;
    SET_GPR_U32(ctx, 31, 0x201CC0u);
    ctx->pc = 0x201CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201CB8u;
            // 0x201cbc: 0x24a592c0  addiu       $a1, $a1, -0x6D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201CC0u; }
        if (ctx->pc != 0x201CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201CC0u; }
        if (ctx->pc != 0x201CC0u) { return; }
    }
    ctx->pc = 0x201CC0u;
label_201cc0:
    // 0x201cc0: 0x8642060c  lh          $v0, 0x60C($s2)
    ctx->pc = 0x201cc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1548)));
label_201cc4:
    // 0x201cc4: 0x1c400019  bgtz        $v0, . + 4 + (0x19 << 2)
label_201cc8:
    if (ctx->pc == 0x201CC8u) {
        ctx->pc = 0x201CC8u;
            // 0x201cc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201CCCu;
        goto label_201ccc;
    }
    ctx->pc = 0x201CC4u;
    {
        const bool branch_taken_0x201cc4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x201CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201CC4u;
            // 0x201cc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cc4) {
            ctx->pc = 0x201D2Cu;
            goto label_201d2c;
        }
    }
    ctx->pc = 0x201CCCu;
label_201ccc:
    // 0x201ccc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x201cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_201cd0:
    // 0x201cd0: 0x8c24caa0  lw          $a0, -0x3560($at)
    ctx->pc = 0x201cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_201cd4:
    // 0x201cd4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_201cd8:
    if (ctx->pc == 0x201CD8u) {
        ctx->pc = 0x201CDCu;
        goto label_201cdc;
    }
    ctx->pc = 0x201CD4u;
    {
        const bool branch_taken_0x201cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x201cd4) {
            ctx->pc = 0x201CF8u;
            goto label_201cf8;
        }
    }
    ctx->pc = 0x201CDCu;
label_201cdc:
    // 0x201cdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x201cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_201ce0:
    // 0x201ce0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_201ce4:
    // 0x201ce4: 0x24a59240  addiu       $a1, $a1, -0x6DC0
    ctx->pc = 0x201ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939200));
label_201ce8:
    // 0x201ce8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201cec:
    // 0x201cec: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x201cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_201cf0:
    // 0x201cf0: 0x320f809  jalr        $t9
label_201cf4:
    if (ctx->pc == 0x201CF4u) {
        ctx->pc = 0x201CF4u;
            // 0x201cf4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x201CF8u;
        goto label_201cf8;
    }
    ctx->pc = 0x201CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x201CF8u);
        ctx->pc = 0x201CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201CF0u;
            // 0x201cf4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201CF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201CF8u; }
            if (ctx->pc != 0x201CF8u) { return; }
        }
        }
    }
    ctx->pc = 0x201CF8u;
label_201cf8:
    // 0x201cf8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_201cfc:
    if (ctx->pc == 0x201CFCu) {
        ctx->pc = 0x201CFCu;
            // 0x201cfc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x201D00u;
        goto label_201d00;
    }
    ctx->pc = 0x201CF8u;
    {
        const bool branch_taken_0x201cf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x201CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201CF8u;
            // 0x201cfc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cf8) {
            ctx->pc = 0x201D14u;
            goto label_201d14;
        }
    }
    ctx->pc = 0x201D00u;
label_201d00:
    // 0x201d00: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_201d04:
    // 0x201d04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x201d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_201d08:
    // 0x201d08: 0xc08e7cc  jal         func_239F30
label_201d0c:
    if (ctx->pc == 0x201D0Cu) {
        ctx->pc = 0x201D0Cu;
            // 0x201d0c: 0x24a59298  addiu       $a1, $a1, -0x6D68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939288));
        ctx->pc = 0x201D10u;
        goto label_201d10;
    }
    ctx->pc = 0x201D08u;
    SET_GPR_U32(ctx, 31, 0x201D10u);
    ctx->pc = 0x201D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D08u;
            // 0x201d0c: 0x24a59298  addiu       $a1, $a1, -0x6D68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D10u; }
        if (ctx->pc != 0x201D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D10u; }
        if (ctx->pc != 0x201D10u) { return; }
    }
    ctx->pc = 0x201D10u;
label_201d10:
    // 0x201d10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x201d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_201d14:
    // 0x201d14: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_201d18:
    if (ctx->pc == 0x201D18u) {
        ctx->pc = 0x201D18u;
            // 0x201d18: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x201D1Cu;
        goto label_201d1c;
    }
    ctx->pc = 0x201D14u;
    {
        const bool branch_taken_0x201d14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x201D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201D14u;
            // 0x201d18: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d14) {
            ctx->pc = 0x201D28u;
            goto label_201d28;
        }
    }
    ctx->pc = 0x201D1Cu;
label_201d1c:
    // 0x201d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x201d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_201d20:
    // 0x201d20: 0xc08e7cc  jal         func_239F30
label_201d24:
    if (ctx->pc == 0x201D24u) {
        ctx->pc = 0x201D24u;
            // 0x201d24: 0x24a592c8  addiu       $a1, $a1, -0x6D38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939336));
        ctx->pc = 0x201D28u;
        goto label_201d28;
    }
    ctx->pc = 0x201D20u;
    SET_GPR_U32(ctx, 31, 0x201D28u);
    ctx->pc = 0x201D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201D20u;
            // 0x201d24: 0x24a592c8  addiu       $a1, $a1, -0x6D38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D28u; }
        if (ctx->pc != 0x201D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D28u; }
        if (ctx->pc != 0x201D28u) { return; }
    }
    ctx->pc = 0x201D28u;
label_201d28:
    // 0x201d28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x201d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201d2c:
    // 0x201d2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x201d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_201d30:
    // 0x201d30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201d30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_201d34:
    // 0x201d34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201d34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201d38:
    // 0x201d38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_201d3c:
    // 0x201d3c: 0x3e00008  jr          $ra
label_201d40:
    if (ctx->pc == 0x201D40u) {
        ctx->pc = 0x201D40u;
            // 0x201d40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x201D44u;
        goto label_fallthrough_0x201d3c;
    }
    ctx->pc = 0x201D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201D3Cu;
            // 0x201d40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x201d3c:
    ctx->pc = 0x201D44u;
}
