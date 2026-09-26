#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ascii2serno__FUc
// Address: 0x186030 - 0x186258
void ascii2serno__FUc_0x186030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ascii2serno__FUc_0x186030");
#endif

    ctx->pc = 0x186030u;

    // 0x186030: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x186030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x186034: 0x2042ff60  addi        $v0, $v0, -0xA0
    ctx->pc = 0x186034u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967136, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x186038: 0x2c410040  sltiu       $at, $v0, 0x40
    ctx->pc = 0x186038u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x18603c: 0x10200083  beqz        $at, . + 4 + (0x83 << 2)
    ctx->pc = 0x18603Cu;
    {
        const bool branch_taken_0x18603c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x186040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18603Cu;
            // 0x186040: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18603c) {
            ctx->pc = 0x18624Cu;
            goto label_18624c;
        }
    }
    ctx->pc = 0x186044u;
    // 0x186044: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x186044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x186048: 0x24633f00  addiu       $v1, $v1, 0x3F00
    ctx->pc = 0x186048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16128));
    // 0x18604c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186050: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x186050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186054: 0x400008  jr          $v0
    ctx->pc = 0x186054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18605Cu: goto label_18605c;
            case 0x186064u: goto label_186064;
            case 0x18606Cu: goto label_18606c;
            case 0x186074u: goto label_186074;
            case 0x18607Cu: goto label_18607c;
            case 0x186084u: goto label_186084;
            case 0x18608Cu: goto label_18608c;
            case 0x186094u: goto label_186094;
            case 0x18609Cu: goto label_18609c;
            case 0x1860A4u: goto label_1860a4;
            case 0x1860ACu: goto label_1860ac;
            case 0x1860B4u: goto label_1860b4;
            case 0x1860BCu: goto label_1860bc;
            case 0x1860C4u: goto label_1860c4;
            case 0x1860CCu: goto label_1860cc;
            case 0x1860D4u: goto label_1860d4;
            case 0x1860DCu: goto label_1860dc;
            case 0x1860E4u: goto label_1860e4;
            case 0x1860ECu: goto label_1860ec;
            case 0x1860F4u: goto label_1860f4;
            case 0x1860FCu: goto label_1860fc;
            case 0x186104u: goto label_186104;
            case 0x18610Cu: goto label_18610c;
            case 0x186114u: goto label_186114;
            case 0x18611Cu: goto label_18611c;
            case 0x186124u: goto label_186124;
            case 0x18612Cu: goto label_18612c;
            case 0x186134u: goto label_186134;
            case 0x18613Cu: goto label_18613c;
            case 0x186144u: goto label_186144;
            case 0x18614Cu: goto label_18614c;
            case 0x186154u: goto label_186154;
            case 0x18615Cu: goto label_18615c;
            case 0x186164u: goto label_186164;
            case 0x18616Cu: goto label_18616c;
            case 0x186174u: goto label_186174;
            case 0x18617Cu: goto label_18617c;
            case 0x186184u: goto label_186184;
            case 0x18618Cu: goto label_18618c;
            case 0x186194u: goto label_186194;
            case 0x18619Cu: goto label_18619c;
            case 0x1861A4u: goto label_1861a4;
            case 0x1861ACu: goto label_1861ac;
            case 0x1861B4u: goto label_1861b4;
            case 0x1861BCu: goto label_1861bc;
            case 0x1861C4u: goto label_1861c4;
            case 0x1861CCu: goto label_1861cc;
            case 0x1861D4u: goto label_1861d4;
            case 0x1861DCu: goto label_1861dc;
            case 0x1861E4u: goto label_1861e4;
            case 0x1861ECu: goto label_1861ec;
            case 0x1861F4u: goto label_1861f4;
            case 0x1861FCu: goto label_1861fc;
            case 0x186204u: goto label_186204;
            case 0x18620Cu: goto label_18620c;
            case 0x186214u: goto label_186214;
            case 0x18621Cu: goto label_18621c;
            case 0x186224u: goto label_186224;
            case 0x18622Cu: goto label_18622c;
            case 0x186234u: goto label_186234;
            case 0x18623Cu: goto label_18623c;
            case 0x186244u: goto label_186244;
            case 0x18624Cu: goto label_18624c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18605Cu;
label_18605c:
    // 0x18605c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x18605Cu;
    {
        const bool branch_taken_0x18605c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18605Cu;
            // 0x186060: 0x2402212c  addiu       $v0, $zero, 0x212C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18605c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186064u;
label_186064:
    // 0x186064: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x186064u;
    {
        const bool branch_taken_0x186064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186064u;
            // 0x186068: 0x2402215f  addiu       $v0, $zero, 0x215F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8543));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186064) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18606Cu;
label_18606c:
    // 0x18606c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x18606Cu;
    {
        const bool branch_taken_0x18606c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18606Cu;
            // 0x186070: 0x24022160  addiu       $v0, $zero, 0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18606c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186074u;
label_186074:
    // 0x186074: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x186074u;
    {
        const bool branch_taken_0x186074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186074u;
            // 0x186078: 0x2402212b  addiu       $v0, $zero, 0x212B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8491));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186074) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18607Cu;
label_18607c:
    // 0x18607c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x18607Cu;
    {
        const bool branch_taken_0x18607c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18607Cu;
            // 0x186080: 0x2402212f  addiu       $v0, $zero, 0x212F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8495));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18607c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186084u;
label_186084:
    // 0x186084: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x186084u;
    {
        const bool branch_taken_0x186084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186084u;
            // 0x186088: 0x24022134  addiu       $v0, $zero, 0x2134 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186084) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18608Cu;
label_18608c:
    // 0x18608c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x18608Cu;
    {
        const bool branch_taken_0x18608c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18608Cu;
            // 0x186090: 0x24022135  addiu       $v0, $zero, 0x2135 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8501));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18608c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186094u;
label_186094:
    // 0x186094: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x186094u;
    {
        const bool branch_taken_0x186094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186094u;
            // 0x186098: 0x240221e6  addiu       $v0, $zero, 0x21E6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8678));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186094) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18609Cu;
label_18609c:
    // 0x18609c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x18609Cu;
    {
        const bool branch_taken_0x18609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18609Cu;
            // 0x1860a0: 0x240221e8  addiu       $v0, $zero, 0x21E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18609c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1860A4u;
label_1860a4:
    // 0x1860a4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1860A4u;
    {
        const bool branch_taken_0x1860a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860A4u;
            // 0x1860a8: 0x240221ea  addiu       $v0, $zero, 0x21EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8682));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860a4) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1860ACu;
label_1860ac:
    // 0x1860ac: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1860ACu;
    {
        const bool branch_taken_0x1860ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860ACu;
            // 0x1860b0: 0x240221ec  addiu       $v0, $zero, 0x21EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8684));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860ac) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1860B4u;
label_1860b4:
    // 0x1860b4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1860B4u;
    {
        const bool branch_taken_0x1860b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860B4u;
            // 0x1860b8: 0x240221ee  addiu       $v0, $zero, 0x21EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8686));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860b4) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1860BCu;
label_1860bc:
    // 0x1860bc: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1860BCu;
    {
        const bool branch_taken_0x1860bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860BCu;
            // 0x1860c0: 0x24022228  addiu       $v0, $zero, 0x2228 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860bc) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1860C4u;
label_1860c4:
    // 0x1860c4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1860C4u;
    {
        const bool branch_taken_0x1860c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860C4u;
            // 0x1860c8: 0x2402222a  addiu       $v0, $zero, 0x222A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8746));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860c4) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1860CCu;
label_1860cc:
    // 0x1860cc: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1860CCu;
    {
        const bool branch_taken_0x1860cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860CCu;
            // 0x1860d0: 0x2402222c  addiu       $v0, $zero, 0x222C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8748));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860cc) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1860D4u;
label_1860d4:
    // 0x1860d4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1860D4u;
    {
        const bool branch_taken_0x1860d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860D4u;
            // 0x1860d8: 0x24022208  addiu       $v0, $zero, 0x2208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860d4) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1860DCu;
label_1860dc:
    // 0x1860dc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1860DCu;
    {
        const bool branch_taken_0x1860dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860DCu;
            // 0x1860e0: 0x240221e7  addiu       $v0, $zero, 0x21E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8679));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860dc) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1860E4u;
label_1860e4:
    // 0x1860e4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1860E4u;
    {
        const bool branch_taken_0x1860e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860E4u;
            // 0x1860e8: 0x240221e9  addiu       $v0, $zero, 0x21E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8681));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860e4) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1860ECu;
label_1860ec:
    // 0x1860ec: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1860ECu;
    {
        const bool branch_taken_0x1860ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860ECu;
            // 0x1860f0: 0x240221eb  addiu       $v0, $zero, 0x21EB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860ec) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1860F4u;
label_1860f4:
    // 0x1860f4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1860F4u;
    {
        const bool branch_taken_0x1860f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860F4u;
            // 0x1860f8: 0x240221ed  addiu       $v0, $zero, 0x21ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8685));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860f4) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1860FCu;
label_1860fc:
    // 0x1860fc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1860FCu;
    {
        const bool branch_taken_0x1860fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860FCu;
            // 0x186100: 0x240221ef  addiu       $v0, $zero, 0x21EF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8687));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860fc) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186104u;
label_186104:
    // 0x186104: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x186104u;
    {
        const bool branch_taken_0x186104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186104u;
            // 0x186108: 0x240221f0  addiu       $v0, $zero, 0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186104) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18610Cu;
label_18610c:
    // 0x18610c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x18610Cu;
    {
        const bool branch_taken_0x18610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18610Cu;
            // 0x186110: 0x240221f2  addiu       $v0, $zero, 0x21F2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8690));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18610c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186114u;
label_186114:
    // 0x186114: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x186114u;
    {
        const bool branch_taken_0x186114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186114u;
            // 0x186118: 0x240221f4  addiu       $v0, $zero, 0x21F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8692));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186114) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18611Cu;
label_18611c:
    // 0x18611c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x18611Cu;
    {
        const bool branch_taken_0x18611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18611Cu;
            // 0x186120: 0x240221f6  addiu       $v0, $zero, 0x21F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8694));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18611c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186124u;
label_186124:
    // 0x186124: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x186124u;
    {
        const bool branch_taken_0x186124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186124u;
            // 0x186128: 0x240221f8  addiu       $v0, $zero, 0x21F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186124) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18612Cu;
label_18612c:
    // 0x18612c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x18612Cu;
    {
        const bool branch_taken_0x18612c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18612Cu;
            // 0x186130: 0x240221fa  addiu       $v0, $zero, 0x21FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8698));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18612c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186134u;
label_186134:
    // 0x186134: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x186134u;
    {
        const bool branch_taken_0x186134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186134u;
            // 0x186138: 0x240221fc  addiu       $v0, $zero, 0x21FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186134) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18613Cu;
label_18613c:
    // 0x18613c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x18613Cu;
    {
        const bool branch_taken_0x18613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18613Cu;
            // 0x186140: 0x240221fe  addiu       $v0, $zero, 0x21FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8702));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18613c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186144u;
label_186144:
    // 0x186144: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x186144u;
    {
        const bool branch_taken_0x186144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186144u;
            // 0x186148: 0x24022200  addiu       $v0, $zero, 0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186144) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18614Cu;
label_18614c:
    // 0x18614c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x18614Cu;
    {
        const bool branch_taken_0x18614c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18614Cu;
            // 0x186150: 0x24022202  addiu       $v0, $zero, 0x2202 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8706));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18614c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186154u;
label_186154:
    // 0x186154: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x186154u;
    {
        const bool branch_taken_0x186154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186154u;
            // 0x186158: 0x24022204  addiu       $v0, $zero, 0x2204 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186154) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18615Cu;
label_18615c:
    // 0x18615c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x18615Cu;
    {
        const bool branch_taken_0x18615c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18615Cu;
            // 0x186160: 0x24022206  addiu       $v0, $zero, 0x2206 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8710));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18615c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186164u;
label_186164:
    // 0x186164: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x186164u;
    {
        const bool branch_taken_0x186164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186164u;
            // 0x186168: 0x24022209  addiu       $v0, $zero, 0x2209 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8713));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186164) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18616Cu;
label_18616c:
    // 0x18616c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x18616Cu;
    {
        const bool branch_taken_0x18616c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18616Cu;
            // 0x186170: 0x2402220b  addiu       $v0, $zero, 0x220B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8715));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18616c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186174u;
label_186174:
    // 0x186174: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x186174u;
    {
        const bool branch_taken_0x186174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186174u;
            // 0x186178: 0x2402220d  addiu       $v0, $zero, 0x220D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8717));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186174) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18617Cu;
label_18617c:
    // 0x18617c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x18617Cu;
    {
        const bool branch_taken_0x18617c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18617Cu;
            // 0x186180: 0x2402220f  addiu       $v0, $zero, 0x220F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8719));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18617c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186184u;
label_186184:
    // 0x186184: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x186184u;
    {
        const bool branch_taken_0x186184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186184u;
            // 0x186188: 0x24022210  addiu       $v0, $zero, 0x2210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186184) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18618Cu;
label_18618c:
    // 0x18618c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18618Cu;
    {
        const bool branch_taken_0x18618c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18618Cu;
            // 0x186190: 0x24022211  addiu       $v0, $zero, 0x2211 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8721));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18618c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186194u;
label_186194:
    // 0x186194: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x186194u;
    {
        const bool branch_taken_0x186194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186194u;
            // 0x186198: 0x24022212  addiu       $v0, $zero, 0x2212 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8722));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186194) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18619Cu;
label_18619c:
    // 0x18619c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x18619Cu;
    {
        const bool branch_taken_0x18619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18619Cu;
            // 0x1861a0: 0x24022213  addiu       $v0, $zero, 0x2213 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8723));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18619c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1861A4u;
label_1861a4:
    // 0x1861a4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1861A4u;
    {
        const bool branch_taken_0x1861a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861A4u;
            // 0x1861a8: 0x24022214  addiu       $v0, $zero, 0x2214 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8724));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861a4) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1861ACu;
label_1861ac:
    // 0x1861ac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1861ACu;
    {
        const bool branch_taken_0x1861ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861ACu;
            // 0x1861b0: 0x24022217  addiu       $v0, $zero, 0x2217 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8727));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861ac) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1861B4u;
label_1861b4:
    // 0x1861b4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1861B4u;
    {
        const bool branch_taken_0x1861b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861B4u;
            // 0x1861b8: 0x2402221a  addiu       $v0, $zero, 0x221A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8730));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861b4) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1861BCu;
label_1861bc:
    // 0x1861bc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1861BCu;
    {
        const bool branch_taken_0x1861bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861BCu;
            // 0x1861c0: 0x2402221d  addiu       $v0, $zero, 0x221D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8733));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861bc) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1861C4u;
label_1861c4:
    // 0x1861c4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1861C4u;
    {
        const bool branch_taken_0x1861c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861C4u;
            // 0x1861c8: 0x24022220  addiu       $v0, $zero, 0x2220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861c4) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1861CCu;
label_1861cc:
    // 0x1861cc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1861CCu;
    {
        const bool branch_taken_0x1861cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861CCu;
            // 0x1861d0: 0x24022223  addiu       $v0, $zero, 0x2223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8739));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861cc) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1861D4u;
label_1861d4:
    // 0x1861d4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1861D4u;
    {
        const bool branch_taken_0x1861d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861D4u;
            // 0x1861d8: 0x24022224  addiu       $v0, $zero, 0x2224 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861d4) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1861DCu;
label_1861dc:
    // 0x1861dc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1861DCu;
    {
        const bool branch_taken_0x1861dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861DCu;
            // 0x1861e0: 0x24022225  addiu       $v0, $zero, 0x2225 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8741));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861dc) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1861E4u;
label_1861e4:
    // 0x1861e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1861E4u;
    {
        const bool branch_taken_0x1861e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861E4u;
            // 0x1861e8: 0x24022226  addiu       $v0, $zero, 0x2226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8742));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861e4) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1861ECu;
label_1861ec:
    // 0x1861ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1861ECu;
    {
        const bool branch_taken_0x1861ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861ECu;
            // 0x1861f0: 0x24022227  addiu       $v0, $zero, 0x2227 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8743));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861ec) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1861F4u;
label_1861f4:
    // 0x1861f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1861F4u;
    {
        const bool branch_taken_0x1861f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861F4u;
            // 0x1861f8: 0x24022229  addiu       $v0, $zero, 0x2229 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8745));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861f4) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x1861FCu;
label_1861fc:
    // 0x1861fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1861FCu;
    {
        const bool branch_taken_0x1861fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861FCu;
            // 0x186200: 0x2402222b  addiu       $v0, $zero, 0x222B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8747));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861fc) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186204u;
label_186204:
    // 0x186204: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x186204u;
    {
        const bool branch_taken_0x186204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186204u;
            // 0x186208: 0x2402222d  addiu       $v0, $zero, 0x222D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8749));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186204) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18620Cu;
label_18620c:
    // 0x18620c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18620Cu;
    {
        const bool branch_taken_0x18620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18620Cu;
            // 0x186210: 0x2402222e  addiu       $v0, $zero, 0x222E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8750));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18620c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186214u;
label_186214:
    // 0x186214: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x186214u;
    {
        const bool branch_taken_0x186214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186214u;
            // 0x186218: 0x2402222f  addiu       $v0, $zero, 0x222F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8751));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186214) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18621Cu;
label_18621c:
    // 0x18621c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18621Cu;
    {
        const bool branch_taken_0x18621c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18621Cu;
            // 0x186220: 0x24022230  addiu       $v0, $zero, 0x2230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18621c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186224u;
label_186224:
    // 0x186224: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x186224u;
    {
        const bool branch_taken_0x186224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186224u;
            // 0x186228: 0x24022231  addiu       $v0, $zero, 0x2231 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8753));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186224) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18622Cu;
label_18622c:
    // 0x18622c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18622Cu;
    {
        const bool branch_taken_0x18622c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18622Cu;
            // 0x186230: 0x24022232  addiu       $v0, $zero, 0x2232 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18622c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186234u;
label_186234:
    // 0x186234: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x186234u;
    {
        const bool branch_taken_0x186234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186234u;
            // 0x186238: 0x24022234  addiu       $v0, $zero, 0x2234 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8756));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186234) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18623Cu;
label_18623c:
    // 0x18623c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18623Cu;
    {
        const bool branch_taken_0x18623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18623Cu;
            // 0x186240: 0x24022237  addiu       $v0, $zero, 0x2237 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8759));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18623c) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x186244u;
label_186244:
    // 0x186244: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186244u;
    {
        const bool branch_taken_0x186244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186244u;
            // 0x186248: 0x24022238  addiu       $v0, $zero, 0x2238 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186244) {
            ctx->pc = 0x186250u;
            goto label_186250;
        }
    }
    ctx->pc = 0x18624Cu;
label_18624c:
    // 0x18624c: 0x2402227e  addiu       $v0, $zero, 0x227E
    ctx->pc = 0x18624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8830));
label_186250:
    // 0x186250: 0x3e00008  jr          $ra
    ctx->pc = 0x186250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186258u;
}
